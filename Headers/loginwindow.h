#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>
#include <QMovie>
#include "model.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class loginwindow;
}
QT_END_NAMESPACE

class loginwindow : public QMainWindow, public Model
{
    Q_OBJECT

public:
    loginwindow(QWidget *parent = nullptr);
    ~loginwindow();

private slots:
    void togglePasswordVisibility(); // Переключение видимости пароля
    void toLogin();                  // Вернуться на страницу авторизации
    void toRegister();               // Вернуться на страницу регистрации
    int tryToLogin();                // Попытка войти
    int tryToRegister();             // Попытка зарегистрироваться


private:
    Ui::loginwindow *ui;
};
#endif // LOGINWINDOW_H
