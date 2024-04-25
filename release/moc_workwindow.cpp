/****************************************************************************
** Meta object code from reading C++ file 'workwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Headers/workwindow.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'workwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSworkwindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSworkwindowENDCLASS = QtMocHelpers::stringData(
    "workwindow",
    "SetCurrectUser",
    "",
    "toNoAccessPage",
    "toWorkPage",
    "toAdminPage",
    "Exit",
    "SetUserNames",
    "SetTablesNames",
    "EditUserPass",
    "EditUserAccess",
    "EditUser",
    "CreateNewUser",
    "DeleteUser",
    "CheckAccessLevel",
    "FillTable",
    "QTableWidget*",
    "tableWidget",
    "std::vector<std::vector<QString>>&",
    "table",
    "tablename",
    "SaveChanges_Work",
    "SaveChanges_Adm",
    "UpdateTable_Work",
    "UpdateTable_Adm",
    "AddRow_Adm",
    "AddRow_Work",
    "DelRow_Work",
    "DelRow_Adm",
    "SetSortList",
    "QComboBox*",
    "name",
    "SortUserNames",
    "SortTable_Work",
    "SortTable_Adm"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSworkwindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  170,    2, 0x0a,    1 /* Public */,
       3,    0,  171,    2, 0x0a,    2 /* Public */,
       4,    0,  172,    2, 0x0a,    3 /* Public */,
       5,    0,  173,    2, 0x0a,    4 /* Public */,
       6,    0,  174,    2, 0x08,    5 /* Private */,
       7,    0,  175,    2, 0x08,    6 /* Private */,
       8,    0,  176,    2, 0x08,    7 /* Private */,
       9,    0,  177,    2, 0x08,    8 /* Private */,
      10,    0,  178,    2, 0x08,    9 /* Private */,
      11,    0,  179,    2, 0x08,   10 /* Private */,
      12,    0,  180,    2, 0x08,   11 /* Private */,
      13,    0,  181,    2, 0x08,   12 /* Private */,
      14,    0,  182,    2, 0x08,   13 /* Private */,
      15,    3,  183,    2, 0x08,   14 /* Private */,
      21,    0,  190,    2, 0x08,   18 /* Private */,
      22,    0,  191,    2, 0x08,   19 /* Private */,
      23,    0,  192,    2, 0x08,   20 /* Private */,
      24,    0,  193,    2, 0x08,   21 /* Private */,
      25,    0,  194,    2, 0x08,   22 /* Private */,
      26,    0,  195,    2, 0x08,   23 /* Private */,
      27,    0,  196,    2, 0x08,   24 /* Private */,
      28,    0,  197,    2, 0x08,   25 /* Private */,
      29,    2,  198,    2, 0x08,   26 /* Private */,
      32,    0,  203,    2, 0x08,   29 /* Private */,
      33,    0,  204,    2, 0x08,   30 /* Private */,
      34,    0,  205,    2, 0x08,   31 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Void, 0x80000000 | 16, 0x80000000 | 18, QMetaType::QString,   17,   19,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 30, QMetaType::QString,   31,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject workwindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSworkwindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSworkwindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSworkwindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<workwindow, std::true_type>,
        // method 'SetCurrectUser'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toNoAccessPage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toWorkPage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toAdminPage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Exit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SetUserNames'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SetTablesNames'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'EditUserPass'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'EditUserAccess'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'EditUser'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'CreateNewUser'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'DeleteUser'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'CheckAccessLevel'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'FillTable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTableWidget *, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::vector<std::vector<QString>> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'SaveChanges_Work'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SaveChanges_Adm'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'UpdateTable_Work'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'UpdateTable_Adm'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'AddRow_Adm'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'AddRow_Work'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'DelRow_Work'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'DelRow_Adm'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SetSortList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QComboBox *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'SortUserNames'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SortTable_Work'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SortTable_Adm'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void workwindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<workwindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->SetCurrectUser(); break;
        case 1: _t->toNoAccessPage(); break;
        case 2: _t->toWorkPage(); break;
        case 3: _t->toAdminPage(); break;
        case 4: _t->Exit(); break;
        case 5: _t->SetUserNames(); break;
        case 6: _t->SetTablesNames(); break;
        case 7: { int _r = _t->EditUserPass();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 8: { int _r = _t->EditUserAccess();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->EditUser(); break;
        case 10: { int _r = _t->CreateNewUser();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->DeleteUser(); break;
        case 12: { int _r = _t->CheckAccessLevel();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->FillTable((*reinterpret_cast< std::add_pointer_t<QTableWidget*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<std::vector<std::vector<QString>>&>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 14: _t->SaveChanges_Work(); break;
        case 15: _t->SaveChanges_Adm(); break;
        case 16: _t->UpdateTable_Work(); break;
        case 17: _t->UpdateTable_Adm(); break;
        case 18: _t->AddRow_Adm(); break;
        case 19: _t->AddRow_Work(); break;
        case 20: _t->DelRow_Work(); break;
        case 21: _t->DelRow_Adm(); break;
        case 22: _t->SetSortList((*reinterpret_cast< std::add_pointer_t<QComboBox*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 23: _t->SortUserNames(); break;
        case 24: _t->SortTable_Work(); break;
        case 25: _t->SortTable_Adm(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QTableWidget* >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QComboBox* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *workwindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *workwindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSworkwindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int workwindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
    return _id;
}
QT_WARNING_POP
