/********************************************************************************
** Form generated from reading UI file 'workwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORKWINDOW_H
#define UI_WORKWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_workwindow
{
public:
    QFrame *WorkFrame;
    QStackedWidget *WorkPages;
    QWidget *NotAccessPage;
    QLabel *NoAccessLabel;
    QPushButton *ExitButton_NoAcc;
    QLineEdit *CurrectUserLineEdit_NoAcc;
    QLabel *CurrectUserLabel_NoAcc;
    QWidget *AccessPage;
    QComboBox *CurrectTableCmB_Work;
    QPushButton *ExitButton_Work;
    QPushButton *SaveButton_Work;
    QLabel *CurrectTable_Work;
    QLineEdit *CurrectUserLineEdit_Work;
    QLabel *CurrectUserLabel_Work;
    QToolButton *ReloadButtonIcon_Work;
    QFrame *line_4;
    QLabel *InfoLabel_Work;
    QPushButton *DelRowBut_Work;
    QPushButton *AddRowBut_Work;
    QPushButton *SortTableBut_Work;
    QLabel *SortLabel_Work;
    QComboBox *SortCmB_Work;
    QTableWidget *MainTable_Work;
    QLabel *Logo_2;
    QWidget *AdminPage;
    QGroupBox *CreateUser;
    QLineEdit *LogLineEdit_Adm;
    QLineEdit *PassLineEdit_Adm;
    QLabel *LogLabel_Adm;
    QLabel *PassLabel_Adm;
    QLabel *AccessLevelLabel_Adm;
    QComboBox *AccessLevelCmB1_Adm;
    QFrame *line_2;
    QPushButton *CreateUserButton_Adm;
    QLabel *InfoLabel_CreateUserAdm;
    QGroupBox *TableControl;
    QLabel *CurrectTableLabel_Adm;
    QComboBox *CurrectTableCmB_Adm;
    QPushButton *SaveButton_Adm;
    QToolButton *ReloadButtonIcon_Adm;
    QPushButton *DelRowBut_Adm;
    QPushButton *AddRowBut_Adm;
    QPushButton *SortTableBut_Adm;
    QComboBox *SortCmB_Adm;
    QLabel *SortLabel_Adm;
    QTableWidget *MainTable_Adm;
    QPushButton *ExitButton_Adm;
    QLabel *Logo;
    QGroupBox *EditUser;
    QListView *UsersList_Adm;
    QComboBox *AccessLevelCmBox2_Adm;
    QLabel *AccessLevelLabel_Adm_2;
    QPushButton *ChangeAccessLevelButton_Adm;
    QLabel *InfoLabel_Adm;
    QLineEdit *NewPassLineEdit_Adm;
    QLabel *NewPassLabel_Adm;
    QFrame *line_3;
    QPushButton *DelUserButton_Adm;
    QFrame *line;
    QPushButton *SortUsersButton_Adm;

    void setupUi(QWidget *workwindow)
    {
        if (workwindow->objectName().isEmpty())
            workwindow->setObjectName("workwindow");
        workwindow->resize(1080, 700);
        workwindow->setStyleSheet(QString::fromUtf8("/*-----QWidget-----*/\n"
"QWidget\n"
"{\n"
"	background-color: #DEF2F1;\n"
"	color: #000000;\n"
"	border-color: #000000;\n"
"\n"
"}\n"
"\n"
"/*-----QPushButton-----*/\n"
"QPushButton\n"
"{\n"
"	background-color: #379683;\n"
"	color: rgb(237, 245, 225);\n"
"    font-family: \"Arial\";\n"
"    font-size: 14px;\n"
"	border-style: solid;\n"
"	border-width: 2px;\n"
"	border-radius: 6px;\n"
"	border-color: #379683;\n"
"	margin: 2px;\n"
"\n"
"}\n"
"QPushButton {\n"
"    background-color: #379683;\n"
"    color: rgb(237, 245, 225);\n"
"    font-family: \"Arial\";\n"
"    font-size: 14px;\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    border-radius: 6px;\n"
"    border-color: #379683;\n"
"    margin: 2px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2d6a5f; \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #266057;\n"
"}\n"
"\n"
"/*-----QLineEdit-----*/\n"
"QLineEdit\n"
"{\n"
"    font-family: \"Arial\";\n"
"	background-color: rgb(237, 245, 225);\n"
"	color: #000000;\n"
""
                        "	border-style: solid;\n"
"	border-width: 1px;\n"
"	border-radius: 4px;\n"
"	border-color: #000000;\n"
"	font-family: \"Azonix\";\n"
"\n"
"}\n"
"\n"
"QToolButton {\n"
"    background-color: transparent; \n"
"    border: none; \n"
"}\n"
"\n"
"QLabel {\n"
"    font-family: \"Arial\";\n"
"}"));
        WorkFrame = new QFrame(workwindow);
        WorkFrame->setObjectName("WorkFrame");
        WorkFrame->setGeometry(QRect(0, 0, 1081, 701));
        WorkFrame->setFrameShape(QFrame::StyledPanel);
        WorkFrame->setFrameShadow(QFrame::Raised);
        WorkPages = new QStackedWidget(WorkFrame);
        WorkPages->setObjectName("WorkPages");
        WorkPages->setGeometry(QRect(10, 10, 1061, 681));
        NotAccessPage = new QWidget();
        NotAccessPage->setObjectName("NotAccessPage");
        NoAccessLabel = new QLabel(NotAccessPage);
        NoAccessLabel->setObjectName("NoAccessLabel");
        NoAccessLabel->setGeometry(QRect(310, 260, 421, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(44);
        font.setBold(true);
        NoAccessLabel->setFont(font);
        ExitButton_NoAcc = new QPushButton(NotAccessPage);
        ExitButton_NoAcc->setObjectName("ExitButton_NoAcc");
        ExitButton_NoAcc->setEnabled(true);
        ExitButton_NoAcc->setGeometry(QRect(930, 640, 131, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setBold(false);
        ExitButton_NoAcc->setFont(font1);
        CurrectUserLineEdit_NoAcc = new QLineEdit(NotAccessPage);
        CurrectUserLineEdit_NoAcc->setObjectName("CurrectUserLineEdit_NoAcc");
        CurrectUserLineEdit_NoAcc->setGeometry(QRect(830, 30, 231, 22));
        CurrectUserLineEdit_NoAcc->setReadOnly(true);
        CurrectUserLabel_NoAcc = new QLabel(NotAccessPage);
        CurrectUserLabel_NoAcc->setObjectName("CurrectUserLabel_NoAcc");
        CurrectUserLabel_NoAcc->setGeometry(QRect(830, 10, 141, 16));
        WorkPages->addWidget(NotAccessPage);
        AccessPage = new QWidget();
        AccessPage->setObjectName("AccessPage");
        CurrectTableCmB_Work = new QComboBox(AccessPage);
        CurrectTableCmB_Work->setObjectName("CurrectTableCmB_Work");
        CurrectTableCmB_Work->setGeometry(QRect(10, 540, 211, 22));
        ExitButton_Work = new QPushButton(AccessPage);
        ExitButton_Work->setObjectName("ExitButton_Work");
        ExitButton_Work->setGeometry(QRect(870, 640, 191, 41));
        SaveButton_Work = new QPushButton(AccessPage);
        SaveButton_Work->setObjectName("SaveButton_Work");
        SaveButton_Work->setGeometry(QRect(680, 640, 181, 41));
        CurrectTable_Work = new QLabel(AccessPage);
        CurrectTable_Work->setObjectName("CurrectTable_Work");
        CurrectTable_Work->setGeometry(QRect(10, 520, 101, 16));
        CurrectUserLineEdit_Work = new QLineEdit(AccessPage);
        CurrectUserLineEdit_Work->setObjectName("CurrectUserLineEdit_Work");
        CurrectUserLineEdit_Work->setGeometry(QRect(832, 60, 221, 22));
        CurrectUserLineEdit_Work->setReadOnly(true);
        CurrectUserLabel_Work = new QLabel(AccessPage);
        CurrectUserLabel_Work->setObjectName("CurrectUserLabel_Work");
        CurrectUserLabel_Work->setGeometry(QRect(830, 40, 131, 16));
        ReloadButtonIcon_Work = new QToolButton(AccessPage);
        ReloadButtonIcon_Work->setObjectName("ReloadButtonIcon_Work");
        ReloadButtonIcon_Work->setGeometry(QRect(1020, 520, 31, 31));
        line_4 = new QFrame(AccessPage);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(10, 660, 241, 16));
        line_4->setFrameShape(QFrame::Shape::HLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);
        InfoLabel_Work = new QLabel(AccessPage);
        InfoLabel_Work->setObjectName("InfoLabel_Work");
        InfoLabel_Work->setGeometry(QRect(10, 640, 241, 16));
        DelRowBut_Work = new QPushButton(AccessPage);
        DelRowBut_Work->setObjectName("DelRowBut_Work");
        DelRowBut_Work->setGeometry(QRect(250, 530, 171, 41));
        AddRowBut_Work = new QPushButton(AccessPage);
        AddRowBut_Work->setObjectName("AddRowBut_Work");
        AddRowBut_Work->setGeometry(QRect(430, 530, 171, 41));
        SortTableBut_Work = new QPushButton(AccessPage);
        SortTableBut_Work->setObjectName("SortTableBut_Work");
        SortTableBut_Work->setGeometry(QRect(610, 530, 171, 41));
        SortLabel_Work = new QLabel(AccessPage);
        SortLabel_Work->setObjectName("SortLabel_Work");
        SortLabel_Work->setGeometry(QRect(10, 580, 101, 16));
        SortCmB_Work = new QComboBox(AccessPage);
        SortCmB_Work->setObjectName("SortCmB_Work");
        SortCmB_Work->setGeometry(QRect(10, 600, 211, 22));
        MainTable_Work = new QTableWidget(AccessPage);
        MainTable_Work->setObjectName("MainTable_Work");
        MainTable_Work->setGeometry(QRect(0, 90, 1051, 421));
        Logo_2 = new QLabel(AccessPage);
        Logo_2->setObjectName("Logo_2");
        Logo_2->setGeometry(QRect(10, 10, 800, 70));
        WorkPages->addWidget(AccessPage);
        AdminPage = new QWidget();
        AdminPage->setObjectName("AdminPage");
        CreateUser = new QGroupBox(AdminPage);
        CreateUser->setObjectName("CreateUser");
        CreateUser->setGeometry(QRect(20, 10, 331, 211));
        LogLineEdit_Adm = new QLineEdit(CreateUser);
        LogLineEdit_Adm->setObjectName("LogLineEdit_Adm");
        LogLineEdit_Adm->setGeometry(QRect(10, 50, 201, 22));
        PassLineEdit_Adm = new QLineEdit(CreateUser);
        PassLineEdit_Adm->setObjectName("PassLineEdit_Adm");
        PassLineEdit_Adm->setGeometry(QRect(10, 100, 201, 22));
        LogLabel_Adm = new QLabel(CreateUser);
        LogLabel_Adm->setObjectName("LogLabel_Adm");
        LogLabel_Adm->setGeometry(QRect(10, 30, 49, 16));
        PassLabel_Adm = new QLabel(CreateUser);
        PassLabel_Adm->setObjectName("PassLabel_Adm");
        PassLabel_Adm->setGeometry(QRect(10, 80, 49, 16));
        AccessLevelLabel_Adm = new QLabel(CreateUser);
        AccessLevelLabel_Adm->setObjectName("AccessLevelLabel_Adm");
        AccessLevelLabel_Adm->setGeometry(QRect(10, 130, 101, 21));
        AccessLevelCmB1_Adm = new QComboBox(CreateUser);
        AccessLevelCmB1_Adm->addItem(QString());
        AccessLevelCmB1_Adm->addItem(QString());
        AccessLevelCmB1_Adm->addItem(QString());
        AccessLevelCmB1_Adm->setObjectName("AccessLevelCmB1_Adm");
        AccessLevelCmB1_Adm->setGeometry(QRect(180, 130, 31, 22));
        AccessLevelCmB1_Adm->setCursor(QCursor(Qt::PointingHandCursor));
        line_2 = new QFrame(CreateUser);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(7, 180, 191, 20));
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        CreateUserButton_Adm = new QPushButton(CreateUser);
        CreateUserButton_Adm->setObjectName("CreateUserButton_Adm");
        CreateUserButton_Adm->setGeometry(QRect(210, 160, 111, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        CreateUserButton_Adm->setFont(font2);
        CreateUserButton_Adm->setCursor(QCursor(Qt::PointingHandCursor));
        InfoLabel_CreateUserAdm = new QLabel(CreateUser);
        InfoLabel_CreateUserAdm->setObjectName("InfoLabel_CreateUserAdm");
        InfoLabel_CreateUserAdm->setGeometry(QRect(10, 160, 191, 21));
        TableControl = new QGroupBox(AdminPage);
        TableControl->setObjectName("TableControl");
        TableControl->setGeometry(QRect(370, 10, 681, 661));
        CurrectTableLabel_Adm = new QLabel(TableControl);
        CurrectTableLabel_Adm->setObjectName("CurrectTableLabel_Adm");
        CurrectTableLabel_Adm->setGeometry(QRect(10, 470, 131, 21));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial")});
        font3.setPointSize(12);
        CurrectTableLabel_Adm->setFont(font3);
        CurrectTableCmB_Adm = new QComboBox(TableControl);
        CurrectTableCmB_Adm->setObjectName("CurrectTableCmB_Adm");
        CurrectTableCmB_Adm->setGeometry(QRect(140, 470, 181, 22));
        CurrectTableCmB_Adm->setCursor(QCursor(Qt::PointingHandCursor));
        SaveButton_Adm = new QPushButton(TableControl);
        SaveButton_Adm->setObjectName("SaveButton_Adm");
        SaveButton_Adm->setGeometry(QRect(540, 610, 131, 41));
        SaveButton_Adm->setFont(font2);
        SaveButton_Adm->setCursor(QCursor(Qt::PointingHandCursor));
        ReloadButtonIcon_Adm = new QToolButton(TableControl);
        ReloadButtonIcon_Adm->setObjectName("ReloadButtonIcon_Adm");
        ReloadButtonIcon_Adm->setGeometry(QRect(641, 470, 31, 31));
        DelRowBut_Adm = new QPushButton(TableControl);
        DelRowBut_Adm->setObjectName("DelRowBut_Adm");
        DelRowBut_Adm->setGeometry(QRect(400, 610, 131, 41));
        AddRowBut_Adm = new QPushButton(TableControl);
        AddRowBut_Adm->setObjectName("AddRowBut_Adm");
        AddRowBut_Adm->setGeometry(QRect(260, 610, 131, 41));
        SortTableBut_Adm = new QPushButton(TableControl);
        SortTableBut_Adm->setObjectName("SortTableBut_Adm");
        SortTableBut_Adm->setGeometry(QRect(120, 610, 131, 41));
        SortCmB_Adm = new QComboBox(TableControl);
        SortCmB_Adm->setObjectName("SortCmB_Adm");
        SortCmB_Adm->setGeometry(QRect(140, 510, 181, 22));
        SortLabel_Adm = new QLabel(TableControl);
        SortLabel_Adm->setObjectName("SortLabel_Adm");
        SortLabel_Adm->setGeometry(QRect(10, 510, 131, 21));
        SortLabel_Adm->setFont(font3);
        MainTable_Adm = new QTableWidget(TableControl);
        MainTable_Adm->setObjectName("MainTable_Adm");
        MainTable_Adm->setGeometry(QRect(10, 20, 661, 441));
        ExitButton_Adm = new QPushButton(TableControl);
        ExitButton_Adm->setObjectName("ExitButton_Adm");
        ExitButton_Adm->setGeometry(QRect(540, 560, 131, 41));
        ExitButton_Adm->setFont(font2);
        ExitButton_Adm->setCursor(QCursor(Qt::PointingHandCursor));
        Logo = new QLabel(TableControl);
        Logo->setObjectName("Logo");
        Logo->setGeometry(QRect(330, 469, 340, 60));
        EditUser = new QGroupBox(AdminPage);
        EditUser->setObjectName("EditUser");
        EditUser->setGeometry(QRect(20, 240, 331, 431));
        UsersList_Adm = new QListView(EditUser);
        UsersList_Adm->setObjectName("UsersList_Adm");
        UsersList_Adm->setGeometry(QRect(160, 30, 161, 311));
        AccessLevelCmBox2_Adm = new QComboBox(EditUser);
        AccessLevelCmBox2_Adm->addItem(QString());
        AccessLevelCmBox2_Adm->addItem(QString());
        AccessLevelCmBox2_Adm->addItem(QString());
        AccessLevelCmBox2_Adm->setObjectName("AccessLevelCmBox2_Adm");
        AccessLevelCmBox2_Adm->setGeometry(QRect(120, 30, 31, 22));
        AccessLevelCmBox2_Adm->setCursor(QCursor(Qt::PointingHandCursor));
        AccessLevelLabel_Adm_2 = new QLabel(EditUser);
        AccessLevelLabel_Adm_2->setObjectName("AccessLevelLabel_Adm_2");
        AccessLevelLabel_Adm_2->setGeometry(QRect(10, 30, 101, 21));
        ChangeAccessLevelButton_Adm = new QPushButton(EditUser);
        ChangeAccessLevelButton_Adm->setObjectName("ChangeAccessLevelButton_Adm");
        ChangeAccessLevelButton_Adm->setGeometry(QRect(160, 390, 161, 31));
        ChangeAccessLevelButton_Adm->setCursor(QCursor(Qt::PointingHandCursor));
        InfoLabel_Adm = new QLabel(EditUser);
        InfoLabel_Adm->setObjectName("InfoLabel_Adm");
        InfoLabel_Adm->setGeometry(QRect(10, 351, 311, 20));
        NewPassLineEdit_Adm = new QLineEdit(EditUser);
        NewPassLineEdit_Adm->setObjectName("NewPassLineEdit_Adm");
        NewPassLineEdit_Adm->setGeometry(QRect(10, 100, 141, 22));
        NewPassLabel_Adm = new QLabel(EditUser);
        NewPassLabel_Adm->setObjectName("NewPassLabel_Adm");
        NewPassLabel_Adm->setGeometry(QRect(10, 80, 91, 16));
        line_3 = new QFrame(EditUser);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(10, 60, 141, 16));
        line_3->setFrameShape(QFrame::Shape::HLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);
        DelUserButton_Adm = new QPushButton(EditUser);
        DelUserButton_Adm->setObjectName("DelUserButton_Adm");
        DelUserButton_Adm->setGeometry(QRect(10, 390, 151, 31));
        DelUserButton_Adm->setCursor(QCursor(Qt::PointingHandCursor));
        line = new QFrame(EditUser);
        line->setObjectName("line");
        line->setGeometry(QRect(10, 370, 311, 16));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        SortUsersButton_Adm = new QPushButton(EditUser);
        SortUsersButton_Adm->setObjectName("SortUsersButton_Adm");
        SortUsersButton_Adm->setGeometry(QRect(40, 310, 111, 31));
        WorkPages->addWidget(AdminPage);

        retranslateUi(workwindow);

        WorkPages->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(workwindow);
    } // setupUi

    void retranslateUi(QWidget *workwindow)
    {
        workwindow->setWindowTitle(QString());
        NoAccessLabel->setText(QCoreApplication::translate("workwindow", "\320\235\320\225\320\242 \320\224\320\236\320\241\320\242\320\243\320\237\320\220", nullptr));
        ExitButton_NoAcc->setText(QCoreApplication::translate("workwindow", "\320\222\321\213\320\271\321\202\320\270", nullptr));
        CurrectUserLabel_NoAcc->setText(QCoreApplication::translate("workwindow", "\320\242\320\265\320\272\321\203\321\211\320\270\320\271 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\214", nullptr));
        ExitButton_Work->setText(QCoreApplication::translate("workwindow", "\320\222\321\213\320\271\321\202\320\270", nullptr));
        SaveButton_Work->setText(QCoreApplication::translate("workwindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        CurrectTable_Work->setText(QCoreApplication::translate("workwindow", "\320\242\320\265\320\272\321\203\321\211\320\260\321\217 \321\202\320\260\320\261\320\273\320\270\321\206\320\260", nullptr));
        CurrectUserLabel_Work->setText(QCoreApplication::translate("workwindow", "\320\242\320\265\320\272\321\203\321\211\320\270\320\271 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\214", nullptr));
        ReloadButtonIcon_Work->setText(QString());
        InfoLabel_Work->setText(QString());
        DelRowBut_Work->setText(QCoreApplication::translate("workwindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        AddRowBut_Work->setText(QCoreApplication::translate("workwindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        SortTableBut_Work->setText(QCoreApplication::translate("workwindow", "\320\236\321\202\321\201\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        SortLabel_Work->setText(QCoreApplication::translate("workwindow", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\277\320\276", nullptr));
        Logo_2->setText(QString());
        CreateUser->setTitle(QCoreApplication::translate("workwindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        LogLabel_Adm->setText(QCoreApplication::translate("workwindow", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        PassLabel_Adm->setText(QCoreApplication::translate("workwindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        AccessLevelLabel_Adm->setText(QCoreApplication::translate("workwindow", "\320\243\321\200\320\276\320\262\320\265\320\275\321\214 \320\264\320\276\321\201\321\202\321\203\320\277\320\260", nullptr));
        AccessLevelCmB1_Adm->setItemText(0, QCoreApplication::translate("workwindow", "1", nullptr));
        AccessLevelCmB1_Adm->setItemText(1, QCoreApplication::translate("workwindow", "2", nullptr));
        AccessLevelCmB1_Adm->setItemText(2, QCoreApplication::translate("workwindow", "3", nullptr));

        CreateUserButton_Adm->setText(QCoreApplication::translate("workwindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", nullptr));
        InfoLabel_CreateUserAdm->setText(QString());
        TableControl->setTitle(QCoreApplication::translate("workwindow", "\320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \321\202\320\260\320\261\320\273\320\270\321\206\320\260\320\274\320\270", nullptr));
        CurrectTableLabel_Adm->setText(QCoreApplication::translate("workwindow", "\320\242\320\265\320\272\321\203\321\211\320\260\321\217 \321\202\320\260\320\261\320\273\320\270\321\206\320\260", nullptr));
        SaveButton_Adm->setText(QCoreApplication::translate("workwindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        ReloadButtonIcon_Adm->setText(QString());
        DelRowBut_Adm->setText(QCoreApplication::translate("workwindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        AddRowBut_Adm->setText(QCoreApplication::translate("workwindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        SortTableBut_Adm->setText(QCoreApplication::translate("workwindow", "\320\236\321\202\321\201\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        SortLabel_Adm->setText(QCoreApplication::translate("workwindow", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\277\320\276", nullptr));
        ExitButton_Adm->setText(QCoreApplication::translate("workwindow", "\320\222\321\213\320\271\321\202\320\270", nullptr));
        Logo->setText(QString());
        EditUser->setTitle(QCoreApplication::translate("workwindow", "\320\222\321\213\320\264\320\260\321\202\321\214 \320\277\321\200\320\260\320\262\320\260", nullptr));
        AccessLevelCmBox2_Adm->setItemText(0, QCoreApplication::translate("workwindow", "1", nullptr));
        AccessLevelCmBox2_Adm->setItemText(1, QCoreApplication::translate("workwindow", "2", nullptr));
        AccessLevelCmBox2_Adm->setItemText(2, QCoreApplication::translate("workwindow", "3", nullptr));

        AccessLevelLabel_Adm_2->setText(QCoreApplication::translate("workwindow", "\320\243\321\200\320\276\320\262\320\265\320\275\321\214 \320\264\320\276\321\201\321\202\321\203\320\277\320\260", nullptr));
        ChangeAccessLevelButton_Adm->setText(QCoreApplication::translate("workwindow", "\320\227\320\260\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        InfoLabel_Adm->setText(QString());
        NewPassLabel_Adm->setText(QCoreApplication::translate("workwindow", "\320\235\320\276\320\262\321\213\320\271 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        DelUserButton_Adm->setText(QCoreApplication::translate("workwindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        SortUsersButton_Adm->setText(QCoreApplication::translate("workwindow", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class workwindow: public Ui_workwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORKWINDOW_H
