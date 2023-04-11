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
    char stringdata0[210];
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
QT_MOC_LITERAL(3, 21, 18), // "std::vector<uint>&"
QT_MOC_LITERAL(4, 40, 17), // "results_operation"
QT_MOC_LITERAL(5, 58, 13), // "sum_level_one"
QT_MOC_LITERAL(6, 72, 2), // "v1"
QT_MOC_LITERAL(7, 75, 2), // "v2"
QT_MOC_LITERAL(8, 78, 7), // "victory"
QT_MOC_LITERAL(9, 86, 13), // "sum_level_two"
QT_MOC_LITERAL(10, 100, 2), // "v3"
QT_MOC_LITERAL(11, 103, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(12, 127, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(13, 149, 24), // "on_lineEditc1_textEdited"
QT_MOC_LITERAL(14, 174, 5), // "uint&"
QT_MOC_LITERAL(15, 180, 4), // "arg1"
QT_MOC_LITERAL(16, 185, 24) // "on_lineEditc2_textEdited"

    },
    "formsum\0ini_results\0\0std::vector<uint>&\0"
    "results_operation\0sum_level_one\0v1\0"
    "v2\0victory\0sum_level_two\0v3\0"
    "on_pushButton_3_clicked\0on_pushButton_clicked\0"
    "on_lineEditc1_textEdited\0uint&\0arg1\0"
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
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       5,    3,   52,    2, 0x06 /* Public */,
       9,    4,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   68,    2, 0x08 /* Private */,
      12,    0,   69,    2, 0x08 /* Private */,
      13,    1,   70,    2, 0x08 /* Private */,
      16,    1,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, QMetaType::Char,    6,    7,    8,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, QMetaType::Char,    6,    7,   10,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,

       0        // eod
};

void formsum::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<formsum *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ini_results((*reinterpret_cast< std::vector<uint>(*)>(_a[1]))); break;
        case 1: _t->sum_level_one((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< char(*)>(_a[3]))); break;
        case 2: _t->sum_level_two((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< char(*)>(_a[4]))); break;
        case 3: _t->on_pushButton_3_clicked(); break;
        case 4: _t->on_pushButton_clicked(); break;
        case 5: _t->on_lineEditc1_textEdited((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 6: _t->on_lineEditc2_textEdited((*reinterpret_cast< uint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (formsum::*)(std::vector<unsigned int> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&formsum::ini_results)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (formsum::*)(unsigned int , unsigned int , char );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&formsum::sum_level_one)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (formsum::*)(unsigned int , unsigned int , unsigned  , char );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&formsum::sum_level_two)) {
                *result = 2;
                return;
            }
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

// SIGNAL 0
void formsum::ini_results(std::vector<unsigned int> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void formsum::sum_level_one(unsigned int _t1, unsigned int _t2, char _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void formsum::sum_level_two(unsigned int _t1, unsigned int _t2, unsigned  _t3, char _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
