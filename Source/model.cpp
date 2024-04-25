#include "./Headers/model.h"
#include "./Source/sha256.cpp"

Model::Model() {}
Model::~Model() {
    HostName.clear();
    Password.clear();
    UserName.clear();
    DatabaseName.clear();
}

QSqlDatabase Model::Connect() {
    qDebug() << QSqlDatabase::drivers();
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");

    db.setHostName(Model::HostName);
    db.setUserName(Model::UserName);
    db.setPassword(Model::Password);
    db.setDatabaseName(Model::DatabaseName);

    if(db.open())
        qDebug("db open");
    else
        qDebug("db not open");

    return db;
}

std::vector<QString> Model::ExecQuery(const QString& queryText) {
    std::vector<QString> forReturn;

    QSqlQuery query(queryText);
    while (query.next()) {
        QVariant temp = query.value(0);
        forReturn.push_back(temp.toString());
    }

    return forReturn;
}

int Model::Login(QString log, QString pass) {
    QString queryStr = "SELECT pass FROM users WHERE user_name = '" + log + "'";
    std::vector<QString> result = ExecQuery(queryStr);

    if (result.empty()) {
        return 3;
    }

    QString userPass = result[0];
    SHA256 sha;
    sha.update(pass.toStdString());
    std::array<uint8_t, 32> digest = sha.digest();
    if (userPass == QString::fromStdString(SHA256::toString(digest))) {
        return 0;
    } else {
        return 1;
    }
}

QString Model::GetAccessLevel(QString username) {
    QString queryStr = "SELECT access_level FROM warehouset WHERE user_name = '" + username + "'";
    std::vector<QString> result = ExecQuery(queryStr);

    if (result.empty()) {
        return "5";
    }
    QString AccessLevel = result[0];

    if (AccessLevel == "1") {

        return "1";
    }
    if(AccessLevel == "2") {
        return "2";
    }
    else {
        return "3";
    }
}

int Model::Register(const QString& username, const QString& password) {
    QString checkQueryStr = "SELECT COUNT(*) FROM users WHERE user_name = '" + username + "'";
    std::vector<QString> result = ExecQuery(checkQueryStr);

    if (!result.empty() && result[0].toInt() > 0) {
        return 1;
    }

    SHA256 sha;
    sha.update(password.toStdString());
    std::array<uint8_t, 32> digest = sha.digest();
    QString insertQueryStr = "INSERT INTO " + Model::DatabaseName +
                             ".users (user_name, pass, access_level) VALUES ('" +
                             username +
                             "', '" +
                             QString::fromStdString(SHA256::toString(digest)) +
                             "', 1)";
    if (ExecQuery(insertQueryStr).empty())
        return 0;
    else
        return 2;
}

std::vector<QString> Model::GetUserNames() {
    std::vector<QString> result;
    QString checkQueryStr = "SELECT user_name FROM users;";
    result = ExecQuery(checkQueryStr);

    return result;
}

int Model::SetAccessLevel(QString username, QString accesslevel){
    QString queryStr = "UPDATE users SET access_level ='" + accesslevel + "' WHERE user_name = '" + username + "'";
    std::vector<QString> result = ExecQuery(queryStr);
    return 0;
}

int Model::SetPassword(QString username, QString password){
    SHA256 sha;
    sha.update(password.toStdString());
    std::array<uint8_t, 32> digest = sha.digest();

    QString queryStr = "UPDATE users SET pass ='" +
                       QString::fromStdString(SHA256::toString(digest)) +
                       "' WHERE user_name = '" +
                       username +
                       "'";
    std::vector<QString> result = ExecQuery(queryStr);
    return 0;
}

int Model::DeleteUser(QString username){
    QString queryStr = "DELETE FROM users WHERE user_name = '" + username + "'";
    std::vector<QString> result = ExecQuery(queryStr);
    return 0;
}

int Model::CreateUser(const QString& username, const QString& password, const QString& access_level){
    QString checkQueryStr = "SELECT COUNT(*) FROM users WHERE user_name = '" + username + "'";
    std::vector<QString> result = ExecQuery(checkQueryStr);

    if (!result.empty() && result[0].toInt() > 0) {
        return 1;
    }

    SHA256 sha;
    sha.update(password.toStdString());
    std::array<uint8_t, 32> digest = sha.digest();
    QString insertQueryStr = "INSERT INTO " + Model::DatabaseName +
                             ".users (user_name, pass, access_level) VALUES ('" +
                             username + "', '" +
                             QString::fromStdString(SHA256::toString(digest)) +
                             "', " + access_level +
                             ")";

    if (ExecQuery(insertQueryStr).empty()) {
        return 0;
    } else {
        return 2;
    }
}

std::vector<QString> Model::GetTablesNames() {
    std::vector<QString> result;
    QString checkQueryStr = "SELECT table_name FROM information_schema.tables WHERE table_schema = '" + DatabaseName + "'";
    result = ExecQuery(checkQueryStr);
    return result;
}

std::vector<std::vector<QString>> Model::GetTable(QString tablename) {
    std::vector<std::vector<QString>> fullTable;
    QString queryStr = "SELECT * FROM " + tablename + ";";
    QSqlQuery query(queryStr);

    while (query.next()) {
        std::vector<QString> row;
        for (int i = 0; i < query.record().count(); ++i) {
            row.push_back(query.value(i).toString());
        }
        fullTable.push_back(row);
    }

    return fullTable;
}

void Model::saveChangesToDatabase(QTableWidget *tableWidget, const QString &tableName) {
    QSqlDatabase db = QSqlDatabase::database();

    QSqlTableModel sqlTableModel(nullptr, db);
    sqlTableModel.setTable(tableName);
    sqlTableModel.select();

    for (int row = 0; row < tableWidget->rowCount(); ++row) {
        QSqlRecord record;
        if (row < sqlTableModel.rowCount())
            record = sqlTableModel.record(row);
        else
            record = sqlTableModel.record();

        for (int col = 0; col < tableWidget->columnCount(); ++col) {
            QString cellValue;
            QTableWidgetItem* item = tableWidget->item(row, col);
            if (item) {
                cellValue = item->text();
            } else {
                QVariant::Type variantType = sqlTableModel.record().field(col).type();
                if (variantType == QVariant::Int || variantType == QVariant::Double) {
                    cellValue = "0";
                } else {
                    cellValue = "";
                }
            }
            record.setValue(col, cellValue);
        }

        if (row < sqlTableModel.rowCount()) {
            if (!sqlTableModel.setRecord(row, record)) {
                qDebug() << "Ошибка при обновлении записи в таблице:";
                qDebug() << sqlTableModel.lastError().text();
            }
        } else {
            if (!sqlTableModel.insertRecord(-1, record)) {
                qDebug() << "Ошибка при вставке записи в таблицу:";
                qDebug() << sqlTableModel.lastError().text();
            }
        }
    }
    int primaryKeyColumnIndex = sqlTableModel.fieldIndex("id");
    for (int i = sqlTableModel.rowCount() - 1; i >= 0; --i) {
        bool found = false;
        for (int row = 0; row < tableWidget->rowCount(); ++row) {
            if (sqlTableModel.record(i).value(primaryKeyColumnIndex) == tableWidget->item(row, primaryKeyColumnIndex)->text()) {
                found = true;
                break;
            }
        }
        if (!found) {
            sqlTableModel.removeRow(i);
        }
    }

    if (sqlTableModel.submitAll()) {
        qDebug() << "Данные успешно сохранены в таблицу" << tableName;
    } else {
        qDebug() << "Ошибка при сохранении данных:";
        qDebug() << sqlTableModel.lastError().text();
    }
}

std::vector<QString> Model::GetTablesColNames(QString tablename) {
    std::vector<QString> result;
    QString checkQueryStr = "SELECT column_name FROM information_schema.columns WHERE table_name = '" + tablename + "' ORDER BY ordinal_position;";
    result = ExecQuery(checkQueryStr);
    return result;
}

void Model::quickSort(QStringList& items, int l, int r) {
    if (l < r) {
        int q = partition(items, l, r);
        quickSort(items, l, q - 1);
        quickSort(items, q + 1, r);
    }
}

int Model::partition(QStringList& items, int l, int r) {
    QString x = items[r];
    int less = l;

    for (int i = l; i < r; ++i) {
        if (items[i].at(0) <= x.at(0)) {
            QString temp = items[i];
            items.replace(i, items[less]);
            items.replace(less, temp);
            ++less;
        }
    }
    QString temp = items[less];
    items[less] = items[r];
    items[r] = temp;
    return less;
}

void Model::sortListView(QListView* listView) {
    QStringListModel* model = qobject_cast<QStringListModel*>(listView->model());
    if (!model)
        return;

    QStringList items = model->stringList();
    quickSort(items, 0, items.size() - 1);

    model->setStringList(items);
}

void Model::bubbleSort(QTableWidget* table, int colIndex) {
    int rowCount = table->rowCount();

    for (int i = 0; i < rowCount - 1; ++i) {
        for (int j = 0; j < rowCount - i - 1; ++j) {
            QTableWidgetItem* item1 = table->item(j, colIndex);
            QTableWidgetItem* item2 = table->item(j + 1, colIndex);

            if (item1 && item2) {
                bool converted1, converted2;
                double value1 = item1->text().toDouble(&converted1);
                double value2 = item2->text().toDouble(&converted2);

                if (converted1 && converted2) {
                    if (value1 > value2) {
                        for (int k = 0; k < table->columnCount(); ++k) {
                            QTableWidgetItem* temp = table->takeItem(j, k);
                            table->setItem(j, k, table->takeItem(j + 1, k));
                            table->setItem(j + 1, k, temp);
                        }
                    }
                } else {
                    if (item1->text().toLower() > item2->text().toLower()) {
                        for (int k = 0; k < table->columnCount(); ++k) {
                            QTableWidgetItem* temp = table->takeItem(j, k);
                            table->setItem(j, k, table->takeItem(j + 1, k));
                            table->setItem(j + 1, k, temp);
                        }
                    }
                }
            }
        }
    }
}

void Model::addRow(QTableWidget* tableWidget) {
    int maxId = 0;
    if (tableWidget->rowCount() > 0) {
        for (int row = 0; row < tableWidget->rowCount(); ++row) {
            int currentId = tableWidget->item(row, 0)->text().toInt();
            maxId = qMax(maxId, currentId);
        }
    }
    int newId = maxId + 1;

    QTableWidgetItem* newItem = new QTableWidgetItem(QString::number(newId));
    tableWidget->insertRow(tableWidget->rowCount());
    tableWidget->setItem(tableWidget->rowCount() - 1, 0, newItem);
}

void Model::deleteRow(QTableWidget* tableWidget) {
    int currentRow = tableWidget->currentRow();
    if (currentRow >= 0) {
        tableWidget->removeRow(currentRow);

        for (int row = currentRow; row < tableWidget->rowCount(); ++row) {
            QTableWidgetItem* item = tableWidget->item(row, 0);

            if (item) {
                item->setText(QString::number(row + 1));
            }
        }
    }
}





