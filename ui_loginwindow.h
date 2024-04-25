/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginwindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *LoginPagesWidget;
    QWidget *LoginPage;
    QToolButton *LoginIconButton_Log;
    QToolButton *RegIconButton_Log;
    QLabel *BackGround;
    QLabel *InfoLabel_Log;
    QLabel *PassLabel_Log;
    QPushButton *LoginButton;
    QLineEdit *LoginLineEdit_Log;
    QToolButton *showPassButton;
    QLabel *ShowPassLabel;
    QLineEdit *PassLineEdit_Log;
    QPushButton *RegButton_Log;
    QLabel *LoginLabel_Log;
    QFrame *line_3;
    QWidget *RegisterPage;
    QToolButton *RegIconButton_Reg;
    QFrame *line_2;
    QLabel *LoginLabel_Reg;
    QLineEdit *LoginLineEdit_Reg;
    QPushButton *BackToLoginButton;
    QToolButton *LoginIconButton_Reg;
    QLabel *InfoLabel_Reg;
    QLabel *PassLabel_Reg;
    QLineEdit *PassLineEdit_Reg;
    QPushButton *TryRegButton;
    QLabel *BackGround_2;
    QMenuBar *menubar;

    void setupUi(QMainWindow *loginwindow)
    {
        if (loginwindow->objectName().isEmpty())
            loginwindow->setObjectName("loginwindow");
        loginwindow->resize(300, 380);
        loginwindow->setStyleSheet(QString::fromUtf8("/*-----QWidget-----*/\n"
"QWidget\n"
"{\n"
"	color: #000000;\n"
"	border-color: #000000;\n"
"\n"
"}\n"
"QStackedWidget\n"
"{\n"
"	background: transparent;\n"
"}\n"
"\n"
"/*-----QPushButton-----*/\n"
"QPushButton\n"
"{\n"
"	background-color: #379683;\n"
"	color: rgb(237, 245, 225);\n"
"    font-family: \"Arial\";\n"
"    font-size: 12px;\n"
"	border-style: solid;\n"
"	border-width: 2px;\n"
"	border-radius: 6px;\n"
"	border-color: #379683;\n"
"	margin: 2px;\n"
"\n"
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
"	bac"
                        "kground: transparent;\n"
"    font-family: \"Arial\";\n"
"    font-size: 12px;\n"
"    color: #333333;\n"
"}"));
        centralwidget = new QWidget(loginwindow);
        centralwidget->setObjectName("centralwidget");
        LoginPagesWidget = new QStackedWidget(centralwidget);
        LoginPagesWidget->setObjectName("LoginPagesWidget");
        LoginPagesWidget->setGeometry(QRect(0, -20, 300, 400));
        LoginPage = new QWidget();
        LoginPage->setObjectName("LoginPage");
        LoginIconButton_Log = new QToolButton(LoginPage);
        LoginIconButton_Log->setObjectName("LoginIconButton_Log");
        LoginIconButton_Log->setEnabled(false);
        LoginIconButton_Log->setGeometry(QRect(18, 85, 22, 22));
        RegIconButton_Log = new QToolButton(LoginPage);
        RegIconButton_Log->setObjectName("RegIconButton_Log");
        RegIconButton_Log->setEnabled(false);
        RegIconButton_Log->setGeometry(QRect(18, 155, 22, 21));
        BackGround = new QLabel(LoginPage);
        BackGround->setObjectName("BackGround");
        BackGround->setGeometry(QRect(0, 0, 300, 400));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BackGround->sizePolicy().hasHeightForWidth());
        BackGround->setSizePolicy(sizePolicy);
        InfoLabel_Log = new QLabel(LoginPage);
        InfoLabel_Log->setObjectName("InfoLabel_Log");
        InfoLabel_Log->setGeometry(QRect(50, 220, 201, 20));
        PassLabel_Log = new QLabel(LoginPage);
        PassLabel_Log->setObjectName("PassLabel_Log");
        PassLabel_Log->setGeometry(QRect(47, 135, 209, 14));
        LoginButton = new QPushButton(LoginPage);
        LoginButton->setObjectName("LoginButton");
        LoginButton->setGeometry(QRect(48, 265, 101, 22));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        LoginButton->setFont(font);
        LoginButton->setCursor(QCursor(Qt::PointingHandCursor));
        LoginLineEdit_Log = new QLineEdit(LoginPage);
        LoginLineEdit_Log->setObjectName("LoginLineEdit_Log");
        LoginLineEdit_Log->setGeometry(QRect(47, 89, 209, 18));
        LoginLineEdit_Log->setStyleSheet(QString::fromUtf8(""));
        showPassButton = new QToolButton(LoginPage);
        showPassButton->setObjectName("showPassButton");
        showPassButton->setGeometry(QRect(230, 180, 25, 25));
        showPassButton->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon;
        icon.addFile(QString::fromUtf8("icons/unshowpass.png"), QSize(), QIcon::Normal, QIcon::Off);
        showPassButton->setIcon(icon);
        showPassButton->setIconSize(QSize(22, 22));
        showPassButton->setCheckable(false);
        showPassButton->setChecked(false);
        ShowPassLabel = new QLabel(LoginPage);
        ShowPassLabel->setObjectName("ShowPassLabel");
        ShowPassLabel->setGeometry(QRect(48, 180, 176, 25));
        PassLineEdit_Log = new QLineEdit(LoginPage);
        PassLineEdit_Log->setObjectName("PassLineEdit_Log");
        PassLineEdit_Log->setGeometry(QRect(47, 155, 209, 18));
        RegButton_Log = new QPushButton(LoginPage);
        RegButton_Log->setObjectName("RegButton_Log");
        RegButton_Log->setGeometry(QRect(155, 265, 100, 22));
        RegButton_Log->setCursor(QCursor(Qt::PointingHandCursor));
        LoginLabel_Log = new QLabel(LoginPage);
        LoginLabel_Log->setObjectName("LoginLabel_Log");
        LoginLabel_Log->setGeometry(QRect(47, 69, 209, 14));
        line_3 = new QFrame(LoginPage);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(50, 240, 201, 20));
        line_3->setFrameShape(QFrame::Shape::HLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);
        LoginPagesWidget->addWidget(LoginPage);
        BackGround->raise();
        line_3->raise();
        LoginIconButton_Log->raise();
        RegIconButton_Log->raise();
        InfoLabel_Log->raise();
        PassLabel_Log->raise();
        LoginButton->raise();
        LoginLineEdit_Log->raise();
        showPassButton->raise();
        ShowPassLabel->raise();
        PassLineEdit_Log->raise();
        RegButton_Log->raise();
        LoginLabel_Log->raise();
        RegisterPage = new QWidget();
        RegisterPage->setObjectName("RegisterPage");
        RegIconButton_Reg = new QToolButton(RegisterPage);
        RegIconButton_Reg->setObjectName("RegIconButton_Reg");
        RegIconButton_Reg->setEnabled(false);
        RegIconButton_Reg->setGeometry(QRect(20, 150, 22, 21));
        line_2 = new QFrame(RegisterPage);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(60, 220, 181, 31));
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        LoginLabel_Reg = new QLabel(RegisterPage);
        LoginLabel_Reg->setObjectName("LoginLabel_Reg");
        LoginLabel_Reg->setGeometry(QRect(50, 70, 189, 14));
        LoginLineEdit_Reg = new QLineEdit(RegisterPage);
        LoginLineEdit_Reg->setObjectName("LoginLineEdit_Reg");
        LoginLineEdit_Reg->setGeometry(QRect(50, 90, 201, 18));
        BackToLoginButton = new QPushButton(RegisterPage);
        BackToLoginButton->setObjectName("BackToLoginButton");
        BackToLoginButton->setGeometry(QRect(152, 241, 90, 22));
        BackToLoginButton->setCursor(QCursor(Qt::PointingHandCursor));
        LoginIconButton_Reg = new QToolButton(RegisterPage);
        LoginIconButton_Reg->setObjectName("LoginIconButton_Reg");
        LoginIconButton_Reg->setEnabled(false);
        LoginIconButton_Reg->setGeometry(QRect(20, 90, 22, 21));
        InfoLabel_Reg = new QLabel(RegisterPage);
        InfoLabel_Reg->setObjectName("InfoLabel_Reg");
        InfoLabel_Reg->setGeometry(QRect(60, 211, 171, 20));
        PassLabel_Reg = new QLabel(RegisterPage);
        PassLabel_Reg->setObjectName("PassLabel_Reg");
        PassLabel_Reg->setGeometry(QRect(50, 130, 189, 14));
        PassLabel_Reg->setLayoutDirection(Qt::LeftToRight);
        PassLineEdit_Reg = new QLineEdit(RegisterPage);
        PassLineEdit_Reg->setObjectName("PassLineEdit_Reg");
        PassLineEdit_Reg->setGeometry(QRect(50, 150, 201, 18));
        TryRegButton = new QPushButton(RegisterPage);
        TryRegButton->setObjectName("TryRegButton");
        TryRegButton->setGeometry(QRect(60, 240, 91, 22));
        TryRegButton->setCursor(QCursor(Qt::PointingHandCursor));
        BackGround_2 = new QLabel(RegisterPage);
        BackGround_2->setObjectName("BackGround_2");
        BackGround_2->setGeometry(QRect(0, 0, 300, 400));
        sizePolicy.setHeightForWidth(BackGround_2->sizePolicy().hasHeightForWidth());
        BackGround_2->setSizePolicy(sizePolicy);
        LoginPagesWidget->addWidget(RegisterPage);
        BackGround_2->raise();
        RegIconButton_Reg->raise();
        line_2->raise();
        LoginLabel_Reg->raise();
        LoginLineEdit_Reg->raise();
        BackToLoginButton->raise();
        LoginIconButton_Reg->raise();
        InfoLabel_Reg->raise();
        PassLabel_Reg->raise();
        PassLineEdit_Reg->raise();
        TryRegButton->raise();
        loginwindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(loginwindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 300, 22));
        loginwindow->setMenuBar(menubar);

        retranslateUi(loginwindow);

        LoginPagesWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(loginwindow);
    } // setupUi

    void retranslateUi(QMainWindow *loginwindow)
    {
        loginwindow->setWindowTitle(QCoreApplication::translate("loginwindow", "WareHouse Sign In/Sign Up", nullptr));
        LoginIconButton_Log->setText(QString());
        RegIconButton_Log->setText(QString());
        BackGround->setText(QString());
        InfoLabel_Log->setText(QString());
        PassLabel_Log->setText(QCoreApplication::translate("loginwindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        LoginButton->setText(QCoreApplication::translate("loginwindow", "\320\222\321\205\320\276\320\264", nullptr));
        showPassButton->setText(QString());
        ShowPassLabel->setText(QCoreApplication::translate("loginwindow", "\320\236\321\202\320\276\320\261\321\200\320\260\320\266\320\260\321\202\321\214 \320\277\320\260\321\200\320\276\320\273\321\214?", nullptr));
        RegButton_Log->setText(QCoreApplication::translate("loginwindow", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        LoginLabel_Log->setText(QCoreApplication::translate("loginwindow", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        RegIconButton_Reg->setText(QString());
        LoginLabel_Reg->setText(QCoreApplication::translate("loginwindow", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        BackToLoginButton->setText(QCoreApplication::translate("loginwindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        LoginIconButton_Reg->setText(QString());
        InfoLabel_Reg->setText(QString());
        PassLabel_Reg->setText(QCoreApplication::translate("loginwindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        TryRegButton->setText(QCoreApplication::translate("loginwindow", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        BackGround_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class loginwindow: public Ui_loginwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
