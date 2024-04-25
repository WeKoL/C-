#ifndef WORKWINDOW_H
#define WORKWINDOW_H

#include <QWidget>
#include <QTableWidget>
#include <QStringListModel>
#include <QTimer>
#include <QSqlTableModel>
#include <QComboBox>
#include <QListView>

namespace Ui {
class workwindow;
}

class workwindow : public QWidget
{
    Q_OBJECT

public:
    QString CurrectUser;
    QString AccessLevel;

    explicit workwindow(QWidget *parent = nullptr);
    ~workwindow();

public slots:
    void SetCurrectUser();                                           // Назначить отображение текущего пользователя
    void toNoAccessPage();                                           // Вернуться на страницу без доступа
    void toWorkPage();                                               // Вернуться на рабочую страницу
    void toAdminPage();                                              // Вернуться на страницу администратора

private slots:
    void Exit();                                                     // Вернуться в окно авторизации/регистрации
    void SetUserNames();                                             // Обновить имена пользователей на странице администратора
    void SetTablesNames();                                           // Обновить имена существующих таблиц
    int EditUserPass();                                              // Редактирование пароль пользователя
    int EditUserAccess();                                            // Редактирование уровня доступа
    void EditUser();                                                 // Вспомогательная для двух выше
    int CreateNewUser();                                             // Создание нового пользователя
    void DeleteUser();                                               // Удаление пользователя
    int CheckAccessLevel();                                          // Проверка уровня доступа
    void FillTable(QTableWidget *tableWidget,                        // Заполняет таблицу данными из бд
                  std::vector<std::vector<QString>>& table,
                  QString tablename);
    void SaveChanges_Work();                                         // Сохраняет изменения таблицы Work окно
    void SaveChanges_Adm();                                          // Сохраняет изменения таблицы Adm окно
    void UpdateTable_Work();                                         // Обновляет таблицу Work окно
    void UpdateTable_Adm();                                          // Обновляет таблицу Adm окно
    void AddRow_Adm();                                               // Добавляет поле в таблицу Work окно
    void AddRow_Work();                                              // Добавляет поле в таблицу Adm окно
    void DelRow_Work();                                              // Удаляет поле в таблицу Work окно
    void DelRow_Adm();                                               // Удаляет поле в таблицу Adm окно
    void SetSortList(QComboBox *name, QString tablename);            // Назначает список для отображения выбора столбца для сортировки
    void SortUserNames();                                            // Сортирует имена пользователей в окне Adm
    void SortTable_Work();                                           // Сортирует таблицу Work окно
    void SortTable_Adm();                                            // Сортирует таблицу Adm окно


private:
    Ui::workwindow *ui;
};

#endif // WORKWINDOW_H
