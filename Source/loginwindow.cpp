#include "./Headers/loginwindow.h"
#include "./Headers/workwindow.h"
#include "./ui_loginwindow.h"

loginwindow::loginwindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::loginwindow)
{
    ui->setupUi(this);

    // Размеры окна
    setFixedSize(300, 380);
    //setCentralWidget(ui->LoginPagesWidget);

    // Подключение к базе данных
    Model::Connect();

    ui->PassLineEdit_Log->setEchoMode(QLineEdit::Password);

    connect(ui->showPassButton, &QPushButton::clicked, this, &loginwindow::togglePasswordVisibility);
    connect(ui->RegButton_Log, &QPushButton::clicked, this, &loginwindow::toRegister);
    connect(ui->BackToLoginButton, &QPushButton::clicked, this, &loginwindow::toLogin);
    connect(ui->LoginButton, &QPushButton::clicked, this, &loginwindow::tryToLogin);
    connect(ui->TryRegButton, &QPushButton::clicked, this, &loginwindow::tryToRegister);

    // Инициализация элементов окна
    QIcon unshowpass("./icons/unshowpass.png");
    QIcon user("./icons/user.png");
    QIcon password("./icons/key.png");

    QMovie *background = new QMovie("./icons/background.gif");
    ui->BackGround->setMovie(background);
    ui->BackGround_2->setMovie(background);
    background->start();

    ui->showPassButton->setIcon(unshowpass);
    ui->showPassButton->setIconSize(QSize(22, 22));

    ui->LoginIconButton_Log->setIcon(user);
    ui->LoginIconButton_Log->setIconSize(QSize(22, 22));

    ui->RegIconButton_Log->setIcon(password);
    ui->RegIconButton_Log->setIconSize(QSize(22, 22));

    ui->LoginIconButton_Reg->setIcon(user);
    ui->LoginIconButton_Reg->setIconSize(QSize(22, 22));

    ui->RegIconButton_Reg->setIcon(password);
    ui->RegIconButton_Reg->setIconSize(QSize(22, 22));

}

void loginwindow::togglePasswordVisibility()
{
    QLineEdit::EchoMode currentMode = ui->PassLineEdit_Log->echoMode();
    QIcon showpass("./icons/showpass.png");
    QIcon unshowpass("./icons/unshowpass.png");

    if (currentMode == QLineEdit::Password) {
        ui->PassLineEdit_Log->setEchoMode(QLineEdit::Normal);
        ui->showPassButton->setIcon(showpass);
    } else {
        ui->PassLineEdit_Log->setEchoMode(QLineEdit::Password);
        ui->showPassButton->setIcon(unshowpass);
    }
}

void loginwindow::toLogin(){
    ui->LoginPagesWidget->setCurrentIndex(0);
}

void loginwindow::toRegister(){
    ui->LoginPagesWidget->setCurrentIndex(1);
}

int loginwindow::tryToLogin(){
    QSqlDatabase db = QSqlDatabase::database();
    if(ui->LoginLineEdit_Log->text().isEmpty() or ui->PassLineEdit_Log->text().isEmpty()){
        ui->InfoLabel_Log->setText("Поле логин или пароль пусты");
        return 1;
    }

    ui->InfoLabel_Log->setText("");
    int answer = Model::Login(ui->LoginLineEdit_Log->text(), ui->PassLineEdit_Log->text());
    if(answer == 0){
        ui->InfoLabel_Log->setText("Успешный вход");
        workwindow* w = new workwindow();

        w->CurrectUser = ui->LoginLineEdit_Log->text();
        w->AccessLevel = Model::GetAccessLevel(ui->LoginLineEdit_Log->text());
        qDebug() << w->AccessLevel;
        qDebug() << w->CurrectUser;
        if(w->AccessLevel == "2"){
            w->SetCurrectUser();
            w->toWorkPage();
        }
        else if(w->AccessLevel == "3"){
            w->toAdminPage();
        }
        else {
            w->SetCurrectUser();
            w->toNoAccessPage();
        }

        w->show();
        this->destroy();

        return 0;
    }
    if(answer == 1){
        ui->InfoLabel_Log->setText("Пароль или логин не совпадают");
        return 0;
    }
    if(!db.isOpen()){
        ui->InfoLabel_Log->setText("Ошибка соединения");
        return 0;
    }
    if(answer == 3){
        ui->InfoLabel_Log->setText("Пользователь не найден");
        return 0;
    }

    return 1;
}

int loginwindow::tryToRegister(){
    QSqlDatabase db = QSqlDatabase::database();
    if(ui->LoginLineEdit_Reg->text().isEmpty() or ui->PassLineEdit_Reg->text().isEmpty()){
        ui->InfoLabel_Reg->setText("Поле логин или пароль пусты");
        return 1;
    }

    int answer = Model::Register(ui->LoginLineEdit_Reg->text(), ui->PassLineEdit_Reg->text());
    if(answer == 0){
        ui->InfoLabel_Reg->setText("Успешная регистрация");
        return 0;
    }
    if(answer == 1){
        ui->InfoLabel_Reg->setText("Пользователь уже существует");
        return 0;
    }
    if(!db.isOpen()){
        ui->InfoLabel_Reg->setText("Ошибка соединения или создания");
        return 0;
    }
    return 1;
}

loginwindow::~loginwindow()
{
    delete ui;
}
