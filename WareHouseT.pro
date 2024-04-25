QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ./Source/loginwindow.cpp \
    ./Source/main.cpp \
    ./Source/model.cpp \
    ./Source/sha256.cpp \
    ./Source/workwindow.cpp

HEADERS += \
    ./Headers/loginwindow.h \
    ./Headers/model.h \
    ./Headers/sha256.h \
    ./Headers/workwindow.h

OTHER_FILES += \
    ./icons/key.png \
    ./icons/showpass.png \
    ./icons/unshowpass.png \
    ./icons/user.png \
    ./icons/reload.png \
    ./icons/background.gif \
    ./icons/WorkPanel.gif \
    ./icons/AdminPanel.gif

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

FORMS += \
    ./UI/loginwindow.ui \
    ./UI/workwindow.ui
