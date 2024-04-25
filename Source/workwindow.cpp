#include "./Headers/workwindow.h"
#include "./Headers/loginwindow.h"
#include "./ui_workwindow.h"

workwindow::workwindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::workwindow)
{
    ui->setupUi(this);

    // Размеры окна
    setFixedSize(1080, 700);

    // Отслеживания изменения уровня доступа у текущего пользователя
    QTimer *checkaccess_timer = new QTimer(this);
    checkaccess_timer->setInterval(10000); // Задержка проверки, 1000 = 1 сек
    connect(checkaccess_timer, &QTimer::timeout, this, &workwindow::CheckAccessLevel);
    checkaccess_timer->start();

    connect(ui->ExitButton_NoAcc, &QPushButton::clicked, this, &workwindow::Exit);
    connect(ui->ExitButton_Work, &QPushButton::clicked, this, &workwindow::Exit);

    connect(ui->DelUserButton_Adm, &QPushButton::clicked, this, &workwindow::DeleteUser);
    connect(ui->ChangeAccessLevelButton_Adm, &QPushButton::clicked, this, &workwindow::EditUser);
    connect(ui->CreateUserButton_Adm, &QPushButton::clicked, this, &workwindow::CreateNewUser);

    connect(ui->SaveButton_Work, &QPushButton::clicked, this, &workwindow::SaveChanges_Work);
    connect(ui->SaveButton_Adm, &QPushButton::clicked, this, &workwindow::SaveChanges_Adm);

    connect(ui->ReloadButtonIcon_Adm, &QPushButton::clicked, this, &workwindow::UpdateTable_Adm);
    connect(ui->ReloadButtonIcon_Work, &QPushButton::clicked, this, &workwindow::UpdateTable_Work);

    connect(ui->DelRowBut_Work, &QPushButton::clicked, this, &workwindow::DelRow_Work);
    connect(ui->AddRowBut_Work, &QPushButton::clicked, this, &workwindow::AddRow_Work);

    connect(ui->DelRowBut_Adm, &QPushButton::clicked, this, &workwindow::DelRow_Adm);
    connect(ui->AddRowBut_Adm, &QPushButton::clicked, this, &workwindow::AddRow_Adm);

    connect(ui->SortTableBut_Adm, &QPushButton::clicked, this, &workwindow::SortTable_Adm);
    connect(ui->SortTableBut_Work, &QPushButton::clicked, this, &workwindow::SortTable_Work);

    connect(ui->SortUsersButton_Adm, &QPushButton::clicked, this, &workwindow::SortUserNames);
    connect(ui->ExitButton_Adm, &QPushButton::clicked, this, &workwindow::Exit);

    // Первоначальная инициализация элементов окна
    QMovie *adminpanel_gif = new QMovie("./icons/AdminPanel.gif");
    QMovie *workpanel_gif = new QMovie("./icons/WorkPanel.gif");
    ui->Logo->setMovie(adminpanel_gif);
    ui->Logo_2->setMovie(workpanel_gif);
    adminpanel_gif->start();
    workpanel_gif->start();

    QIcon reload("./icons/reload.png");
    QIcon reload2("./icons/reload.png");

    ui->ReloadButtonIcon_Adm->setIcon(reload);
    ui->ReloadButtonIcon_Adm->setIconSize(QSize(31, 31));

    ui->ReloadButtonIcon_Work->setIcon(reload2);
    ui->ReloadButtonIcon_Work->setIconSize(QSize(31, 31));

    SetUserNames();
    SetTablesNames();
    Model a;
    auto table = a.GetTable(ui->CurrectTableCmB_Work->currentText());
    FillTable(ui->MainTable_Work, table, ui->CurrectTableCmB_Work->currentText());
    table = a.GetTable(ui->CurrectTableCmB_Adm->currentText());
    FillTable(ui->MainTable_Adm, table, ui->CurrectTableCmB_Adm->currentText());
    SetSortList(ui->SortCmB_Adm, ui->CurrectTableCmB_Adm->currentText());
    SetSortList(ui->SortCmB_Work, ui->CurrectTableCmB_Work->currentText());
    table.clear();



    // Лямбда функции для отображения таблиц, выбранных в ComboBox
    connect(ui->CurrectTableCmB_Work, QOverload<int>::of(&QComboBox::currentIndexChanged),
            [=](int index){
                ui->SortCmB_Work->clear();
                Model a;
                QString text = ui->CurrectTableCmB_Work->itemText(index);
                auto table = a.GetTable(text);
                FillTable(ui->MainTable_Work, table, ui->CurrectTableCmB_Work->currentText());
                SetSortList(ui->SortCmB_Work, ui->CurrectTableCmB_Work->currentText());
            });

    connect(ui->CurrectTableCmB_Adm, QOverload<int>::of(&QComboBox::currentIndexChanged),
            [=](int index){
                ui->SortCmB_Adm->clear();
                Model a;
                QString text = ui->CurrectTableCmB_Adm->itemText(index);
                auto table = a.GetTable(text);
                FillTable(ui->MainTable_Adm, table, ui->CurrectTableCmB_Adm->currentText());
                SetSortList(ui->SortCmB_Adm, ui->CurrectTableCmB_Adm->currentText());
            });
}

workwindow::~workwindow()
{
    delete ui;
}

void workwindow::toNoAccessPage() {
    ui->WorkPages->setCurrentIndex(0);
    setWindowTitle("WareHouse НЕТ ДОСТУПА ДЛЯ User: " + CurrectUser + ":" + AccessLevel);
}

void workwindow::toWorkPage() {
    ui->WorkPages->setCurrentIndex(1);
    setWindowTitle("WareHouse РАБОЧЕЕ ОКНО User: " + CurrectUser + ":" + AccessLevel);
}

void workwindow::toAdminPage() {
    ui->WorkPages->setCurrentIndex(2);
    setWindowTitle("WareHouse ОКНО АДМИНИСТРАТОРА User: " + CurrectUser + ":" + AccessLevel);
}

void workwindow::SetCurrectUser() {
    ui->CurrectUserLineEdit_NoAcc->setText(CurrectUser);
    ui->CurrectUserLineEdit_Work->setText(CurrectUser);
}

void workwindow::Exit() {
    this->destroy();
    loginwindow* w = new loginwindow();
    w->show();
}

void workwindow::SetUserNames() {
    Model a;
    QStringListModel *model = new QStringListModel(this);
    QStringList stringList;
    for(size_t i = 0; i < a.GetUserNames().size(); i++){
        stringList << a.GetUserNames()[i];
    }
    model->setStringList(stringList);
    ui->UsersList_Adm->setModel(model);
}

void workwindow::SetTablesNames() {
    Model a;
    std::vector<QString> TablesNames = a.GetTablesNames();
    for(size_t i = 0; i < TablesNames.size(); i++){
        if(TablesNames[i] == "users")
            ui->CurrectTableCmB_Adm->addItem(TablesNames[i]);
        else {
            ui->CurrectTableCmB_Work->addItem(TablesNames[i]);
            ui->CurrectTableCmB_Adm->addItem(TablesNames[i]);
        }
    }
}

void workwindow::EditUser(){
    if(!EditUserPass() && !EditUserAccess()){
        ui->InfoLabel_Adm->setText("Уровень доступа и пароль изменены");
    }
    else if(!EditUserAccess() && EditUserPass()){
        ui->InfoLabel_Adm->setText("Уровень доступа изменен");
    }
}

int workwindow::EditUserPass(){
    Model a;
    if(ui->NewPassLineEdit_Adm->text() == ""){
        return 1;
    }
    return a.SetPassword(ui->UsersList_Adm->currentIndex().data().toString(), ui->NewPassLineEdit_Adm->text());
}

int workwindow::EditUserAccess(){
    Model a;
    return a.SetAccessLevel(ui->UsersList_Adm->currentIndex().data().toString(), QString::number(ui->AccessLevelCmBox2_Adm->currentIndex() + 1));
}

int workwindow::CreateNewUser() {
    if(ui->LogLineEdit_Adm->text().isEmpty() or ui->PassLineEdit_Adm->text().isEmpty()){
        ui->InfoLabel_CreateUserAdm->setText("Поле логин или пароль пусты");
        return 1;
    }
    Model a;
    if(a.CreateUser(ui->LogLineEdit_Adm->text(), ui->PassLineEdit_Adm->text(), QString::number(ui->AccessLevelCmB1_Adm->currentIndex() + 1)) == 0){
        ui->InfoLabel_CreateUserAdm->setText("Пользователь создан");
        SetUserNames();
        return 0;
    }
    else {
        ui->InfoLabel_CreateUserAdm->setText("Неудача");
        return 1;
    }
}

void workwindow::DeleteUser() {
    Model a;
    a.DeleteUser(ui->UsersList_Adm->currentIndex().data().toString());
    SetUserNames();
    ui->InfoLabel_Adm->setText("Удаление выполнено");
}

int workwindow::CheckAccessLevel(){
    Model a;
    if(a.GetAccessLevel(CurrectUser) != AccessLevel){
        AccessLevel = a.GetAccessLevel(CurrectUser);
        toNoAccessPage();
        return 0;
    }
    else if((a.GetAccessLevel(CurrectUser) == "2" || a.GetAccessLevel(CurrectUser) == "3") && ui->WorkPages->currentIndex() == 0){
        AccessLevel = a.GetAccessLevel(CurrectUser);
        qDebug() << AccessLevel;
        qDebug() << a.GetAccessLevel(CurrectUser);
        toWorkPage();
        return 0;
    }
    else
        return 1;

}

void workwindow::FillTable(QTableWidget* tableWidget, std::vector<std::vector<QString>>& table, QString tablename) {
    Model a;
    tableWidget->clear();
    tableWidget->setRowCount(table.size());
    if (!table.empty()) {
        tableWidget->setColumnCount(table[0].size());
    }
    QStringList headers;
    std::vector<QString> temp = a.GetTablesColNames(tablename);
    for(size_t i = 0; i < temp.size(); i++)
        headers << temp[i];
    if (tablename == "users") {
        QStringList newHeaders;
        for (int i = 0; i < headers.size(); i++) {
            if (i % 2 != 0) {
                newHeaders.append(headers.at(i));
            }
        }
        headers = newHeaders;
        tableWidget->setColumnCount(headers.size());
    }
    tableWidget->setHorizontalHeaderLabels(headers);
    for (size_t row = 0; row < table.size(); ++row) {
        for (size_t col = 0; col < table[row].size(); ++col) {
            QTableWidgetItem* item = new QTableWidgetItem(table[row][col]);
            tableWidget->setItem(row, col, item);
        }
    }
}

void workwindow::SaveChanges_Work() {
    Model a;
    a.saveChangesToDatabase(ui->MainTable_Work, ui->CurrectTableCmB_Work->currentText());
}

void workwindow::SaveChanges_Adm() {
    Model a;
    a.saveChangesToDatabase(ui->MainTable_Adm, ui->CurrectTableCmB_Adm->currentText());
}

void workwindow::UpdateTable_Adm() {
    Model a;
    QString text = ui->CurrectTableCmB_Adm->currentText();
    auto table = a.GetTable(text);
    FillTable(ui->MainTable_Adm, table, ui->CurrectTableCmB_Adm->currentText());
    SetUserNames();
}

void workwindow::UpdateTable_Work() {
    Model a;
    QString text = ui->CurrectTableCmB_Work->currentText();
    auto table = a.GetTable(text);
    FillTable(ui->MainTable_Work, table, ui->CurrectTableCmB_Work->currentText());
}

void workwindow::AddRow_Adm() {
    Model a;
    a.addRow(ui->MainTable_Adm);
}

void workwindow::AddRow_Work() {
    Model a;
    a.addRow(ui->MainTable_Work);
}

void workwindow::DelRow_Work() {
    Model a;
    a.deleteRow(ui->MainTable_Work);
}

void workwindow::DelRow_Adm() {
    Model a;
    a.deleteRow(ui->MainTable_Adm);
}

void workwindow::SetSortList(QComboBox *name, QString tablename) {
    Model a;
    QStringList columnsToUpdate;
    std::vector<QString> temp = a.GetTablesColNames(tablename);
    for(size_t i = 0; i < temp.size(); i++) {
        if (tablename == "users" && i % 2 == 0) {
            continue;
        }
        columnsToUpdate.append(temp[i]);
    }
    name->addItems(columnsToUpdate);
}

void workwindow::SortUserNames() {
    Model a;
    a.sortListView(ui->UsersList_Adm);
    ui->UsersList_Adm->update();
}

void workwindow::SortTable_Work() {
    Model a;
    a.bubbleSort(ui->MainTable_Work, ui->SortCmB_Work->currentIndex());
}

void workwindow::SortTable_Adm() {
    Model a;
    a.bubbleSort(ui->MainTable_Adm, ui->SortCmB_Adm->currentIndex());
}

