#include "./Headers/loginwindow.h"

#include <QApplication>
#include <QLocale>
#include <QFile>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    loginwindow w;
    w.show();
    return a.exec();
}
