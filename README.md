# WareHouseT
### Структура проекта:
- **Корень проекта**
    - WareHouseT.pro -- qmake make profject file
    - WareHouseT.pro.user -- qmake make profject file
    - **forconnection** -- Библиотеки для подключения к базеданных MySQL
        - **bin**
            - libcrypto-3-x64.dll
            - libmysql.dll
            - libmysqld.dll
            - libssl-3-x64.dll
            - qsqlmysql.dll
            - qsqlmysqld.dll
        - **deploy**
            - libcrypto-3-x64.dll
            - libmysql.dll
            - libssl-3-x64.dll
        - **sql**
            - libmysql.dll
            - libmysqld.dll
            - qsqlmysql.dll
            - qsqlmysqld.dll
    - **Headers** -- Заголовочные файлы классов
        - loginwindow.h
        - model.h
        - sha256.h
        - workwindow.h
    - **Icons**
        - key.png
        - showpass.png
        - unshowpass.png
        - user.png
        - reload.png
        - background.gif
    - **Source**
        - loginwindow.cpp
        - main.cpp
        - model.cpp
        - sha256.cpp
        - workwindow.cpp
    - **UI**
        - loginwindow.ui
        - workwindow.ui

Проект реализован с помощью фреймворка QT 6.7.0 на языке С++, 
с использованием системы сборки qmake и следующих библиотек:
- Qt6Core
- Qt6Gui
- Qt6Network
- Qt6Sql
- Qt6Svg
- Qt6Widgets
- SHA256, для хэширования паролей в таблице базы данных

В не совсем корректной реализации для проекта применен паттер проектирования MVC.
MVC (Model-View-Controller). В качестве *Controller* модуля выстапают файлы __<loginwindow.сpp>__ и __<workwindow.cpp>__ --
они управляют *View* модулем, то есть *UI* формами, представленными в файлах __<loginwindow.ui>__ и __<workwindow.ui>__,
взаимодействуют с *Model* модулем,то есть классом *Model* и его методами, для получения данных и переводят их в *View* модуль

В качестве модели выступает класс *Model*, представленный в __<model.h>__, __<model.cpp>__.
В __<model.cpp>__ представлена реализация методов с логикой проекта. Например с обработкой подключения к базе данных,
работы с SQL запросами и их обработкой и прочей логикой.

Единого формата данных нет, приложение может управлять любой таблицей в базе данных, берет их оттуда, остальные необходимые для работы данные храняться в памяти приложения, формы храняться в xml формате.
### Установка, настройка и компиляция проекта:
**Установка и настройка:**
1. Установить версию QT Creator Open-Source;

2. Открыть проект с помощью <WareHouseT.pro>

3. Настроить Release версию
    3.1. Перейти в окно Проекты
    3.2. Выбрать конфигурацию сборки release/выпуск
    3.3. Отключить теневую сборку

4. Перейти в корневую папку QT Creator
    4.1. Далее по пути: ```.\Qt\6.7.0\mingw_64\bin```
    4.2. Перенести с заменой файлы из ```.\projectfolder\forconnection\bin```
    4.3. Перейти по пути ```.\Qt\6.7.0\mingw_64\plugins\sqldrivers```
    4.4. Перенести с заменой файлы из ```.\projectfolder\forconnection\sql```

**Компиляция:**
5. Собрать release/выпуск сборку
    5.1 В корневой папке проекта появится папка release, удалить из нее все кроме ```WareHouseT.exe```
    5.2 Перейти по пути ```.\Qt\6.7.0\mingw_64\bin```
    5.3 Открыть файл ```WareHouseT.exe``` c помощью ```.\Qt\6.7.0\mingw_64\bin\windeployqt6.exe```
    5.4 Перенести файлы из ```.\projectfolder\forconnection\deploy``` в ```.\projectfolder\release```
    Скомпилированная release версия готова.

  **Настройка подключения к базе данных:**

6. Открыть файл **<model.h>**, заменить параметры подключения
```
class Model
{
public:
    QString HostName = "";
    QString UserName = "";
    QString Password = "";
    QString DatabaseName = "";
...
```
7. В базе данных должна присутствовать таблица users с обязательными стобцами: **<user_name>**, **<pass>**, **<access_level>**.
