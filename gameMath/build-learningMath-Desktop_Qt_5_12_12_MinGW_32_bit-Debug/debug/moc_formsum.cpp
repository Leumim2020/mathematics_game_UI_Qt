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
    QByteArrayData data[17];
    char stringdata0[272];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_formsum_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_formsum_t qt_meta_stringdata_formsum = {
    {
QT_MOC_LITERAL(0, 0, 7), // "formsum"
QT_MOC_LITERAL(1, 8, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(4, 55, 24), // "on_lineEditc1_textEdited"
QT_MOC_LITERAL(5, 80, 5), // "uint&"
QT_MOC_LITERAL(6, 86, 4), // "arg1"
QT_MOC_LITERAL(7, 91, 24), // "on_lineEditc2_textEdited"
QT_MOC_LITERAL(8, 116, 24), // "on_lineEditc3_textEdited"
QT_MOC_LITERAL(9, 141, 24), // "on_lineEditc4_textEdited"
QT_MOC_LITERAL(10, 166, 24), // "on_lineEditc5_textEdited"
QT_MOC_LITERAL(11, 191, 11), // "ini_results"
QT_MOC_LITERAL(12, 203, 18), // "std::vector<uint>&"
QT_MOC_LITERAL(13, 222, 17), // "results_operation"
QT_MOC_LITERAL(14, 240, 13), // "sum_level_one"
QT_MOC_LITERAL(15, 254, 3), // "sum"
QT_MOC_LITERAL(16, 258, 13) // "sum_level_two"

    },
    "formsum\0on_pushButton_3_clicked\0\0"
    "on_pushButton_clicked\0on_lineEditc1_textEdited\0"
    "uint&\0arg1\0on_lineEditc2_textEdited\0"
    "on_lineEditc3_textEdited\0"
    "on_lineEditc4_textEdited\0"
    "on_lineEditc5_textEdited\0ini_results\0"
    "std::vector<uint>&\0results_operation\0"
    "sum_level_one\0sum\0sum_level_two"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_formsum[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    1,   66,    2, 0x08 /* Private */,
       7,    1,   69,    2, 0x08 /* Private */,
       8,    1,   72,    2, 0x08 /* Private */,
       9,    1,   75,    2, 0x08 /* Private */,
      10,    1,   78,    2, 0x08 /* Private */,
      11,    1,   81,    2, 0x08 /* Private */,
      14,    1,   84,    2, 0x08 /* Private */,
      16,    1,   87,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, QMetaType::UInt,   15,
    QMetaType::Void, QMetaType::UInt,   15,

       0        // eod
};

void formsum::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<formsum *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_3_clicked(); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_lineEditc1_textEdited((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 3: _t->on_lineEditc2_textEdited((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 4: _t->on_lineEditc3_textEdited((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 5: _t->on_lineEditc4_textEdited((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 6: _t->on_lineEditc5_textEdited((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 7: _t->ini_results((*reinterpret_cast< std::vector<uint>(*)>(_a[1]))); break;
        case 8: _t->sum_level_one((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 9: _t->sum_level_two((*reinterpret_cast< uint(*)>(_a[1]))); break;
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
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
