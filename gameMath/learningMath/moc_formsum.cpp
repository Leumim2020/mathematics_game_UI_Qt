/****************************************************************************
** Meta object code from reading C++ file 'formsum.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../learningMath/formsum.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'formsum.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_formsum_t {
    QByteArrayData data[18];
    char stringdata0[216];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_formsum_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_formsum_t qt_meta_stringdata_formsum = {
    {
QT_MOC_LITERAL(0, 0, 7), // "formsum"
QT_MOC_LITERAL(1, 8, 11), // "ini_results"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 17), // "std::vector<int>&"
QT_MOC_LITERAL(4, 39, 17), // "results_operation"
QT_MOC_LITERAL(5, 57, 13), // "sum_level_one"
QT_MOC_LITERAL(6, 71, 3), // "sum"
QT_MOC_LITERAL(7, 75, 13), // "sum_level_two"
QT_MOC_LITERAL(8, 89, 3), // "_v1"
QT_MOC_LITERAL(9, 93, 3), // "_v2"
QT_MOC_LITERAL(10, 97, 3), // "_v3"
QT_MOC_LITERAL(11, 101, 8), // "_victory"
QT_MOC_LITERAL(12, 110, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(13, 134, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(14, 156, 24), // "on_lineEditc1_textEdited"
QT_MOC_LITERAL(15, 181, 4), // "int&"
QT_MOC_LITERAL(16, 186, 4), // "arg1"
QT_MOC_LITERAL(17, 191, 24) // "on_lineEditc2_textEdited"

    },
    "formsum\0ini_results\0\0std::vector<int>&\0"
    "results_operation\0sum_level_one\0sum\0"
    "sum_level_two\0_v1\0_v2\0_v3\0_victory\0"
    "on_pushButton_3_clicked\0on_pushButton_clicked\0"
    "on_lineEditc1_textEdited\0int&\0arg1\0"
    "on_lineEditc2_textEdited"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_formsum[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x0a /* Public */,
       5,    1,   52,    2, 0x0a /* Public */,
       7,    4,   55,    2, 0x0a /* Public */,
      12,    0,   64,    2, 0x08 /* Private */,
      13,    0,   65,    2, 0x08 /* Private */,
      14,    1,   66,    2, 0x08 /* Private */,
      17,    1,   69,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Char,    8,    9,   10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 15,   16,

       0        // eod
};

void formsum::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<formsum *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ini_results((*reinterpret_cast< std::vector<int>(*)>(_a[1]))); break;
        case 1: _t->sum_level_one((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->sum_level_two((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< char(*)>(_a[4]))); break;
        case 3: _t->on_pushButton_3_clicked(); break;
        case 4: _t->on_pushButton_clicked(); break;
        case 5: _t->on_lineEditc1_textEdited((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_lineEditc2_textEdited((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject formsum::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_formsum.data,
    qt_meta_data_formsum,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *formsum::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *formsum::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_formsum.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int formsum::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
