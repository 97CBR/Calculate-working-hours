/****************************************************************************
** Meta object code from reading C++ file 'WorkTime.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../WorkTime.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WorkTime.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WorkTime_t {
    QByteArrayData data[10];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WorkTime_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WorkTime_t qt_meta_stringdata_WorkTime = {
    {
QT_MOC_LITERAL(0, 0, 8), // "WorkTime"
QT_MOC_LITERAL(1, 9, 9), // "StartWork"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 8), // "StopWork"
QT_MOC_LITERAL(4, 29, 8), // "showTime"
QT_MOC_LITERAL(5, 38, 7), // "addTime"
QT_MOC_LITERAL(6, 46, 9), // "TopWindow"
QT_MOC_LITERAL(7, 56, 11), // "SmallWindow"
QT_MOC_LITERAL(8, 68, 11), // "CloseWindow"
QT_MOC_LITERAL(9, 80, 11) // "settingPage"

    },
    "WorkTime\0StartWork\0\0StopWork\0showTime\0"
    "addTime\0TopWindow\0SmallWindow\0CloseWindow\0"
    "settingPage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WorkTime[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,
       3,    0,   55,    2, 0x0a /* Public */,
       4,    0,   56,    2, 0x0a /* Public */,
       5,    0,   57,    2, 0x0a /* Public */,
       6,    0,   58,    2, 0x0a /* Public */,
       7,    0,   59,    2, 0x0a /* Public */,
       8,    0,   60,    2, 0x0a /* Public */,
       9,    0,   61,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WorkTime::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WorkTime *_t = static_cast<WorkTime *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->StartWork(); break;
        case 1: _t->StopWork(); break;
        case 2: _t->showTime(); break;
        case 3: _t->addTime(); break;
        case 4: _t->TopWindow(); break;
        case 5: _t->SmallWindow(); break;
        case 6: _t->CloseWindow(); break;
        case 7: _t->settingPage(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject WorkTime::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_WorkTime.data,
      qt_meta_data_WorkTime,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WorkTime::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WorkTime::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WorkTime.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int WorkTime::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
