#ifndef MODEL_H
#define MODEL_H

#include <QSqlDriver>
#include <QSQLDatabase>
#include <QSql>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlRecord>
#include <QTableWidget>
#include <QSqlTableModel>
#include <QSqlError>
#include <QStringListModel>
#include <QListView>
#include <QSqlField>
#include <vector>

class Model
{
public:
    QString HostName = "localhost";                                     // Переменные для подключения к MySql DB
    QString UserName = "root";
    QString Password = "root";
    QString DatabaseName = "warehouset";

    Model();
    ~Model();

public slots:
    QSqlDatabase Connect();                                             // Инициализация подключения к базе данных
    std::vector<QString> ExecQuery(const QString& queryText);           // Выполнение SQL запроса
    int Login(QString log, QString pass);                               // Логика авторизации через базу данных
    QString GetAccessLevel(QString username);                           // Возвращает уровень доступа пользователя из базы данных
    int Register(const QString& username, const QString& password);     // Логика регистрации
    int DeleteUser(QString username);                                   // Логика удаления пользователя
    std::vector<QString> GetTablesNames();                              // Возвращает доступные таблицы
    std::vector<QString> GetTablesColNames(QString tablename);          // Возвращает доступные столбцы таблицы
    std::vector<std::vector<QString>> GetTable(QString tablename);      // Возвращает таблицу из базы данных
    std::vector<QString> GetUserNames();                                // Возвращает список пользователей
    int DeleteTable(const QString& tablename);                          // Удаляет таблицу из базы данных
    int SetAccessLevel(QString username, QString accesslevel);          // Редактирует уровень доступа
    int SetPassword(QString username,QString password);                 // Редактирует пароль
    int CreateUser(const QString& username, const QString& password,    // Логика создания нового пользователя
                                        const QString& access_level);
    std::vector<QString> SortByAlphabet(std::vector<QString> forsort);
    void saveChangesToDatabase(QTableWidget *tableWidget,               // Сохраняет изменения в базу данных из таблицы
                                const QString &tableName);
    void quickSort(QStringList& items, int l, int r);                   // Алгоритм быстрой сортировки
    int partition(QStringList& items, int l, int r);                    // Вспомогательный метод для быстрой сортировки
    void sortListView(QListView* listView);                             // Сортировка элемента со списком пользователей
    void bubbleSort(QTableWidget* table, int colIndex);                 // Пузырьковая сортировка для таблиц
    void addRow(QTableWidget *tableWidget);                             // Логика добавления строки в таблицу
    void deleteRow(QTableWidget* tableWidget);                          // Логика удаления строки в таблицу
};

#endif // MODEL_H
