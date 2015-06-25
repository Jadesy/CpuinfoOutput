/****************************************************************************
** Meta object code from reading C++ file 'cpuinfoanalysis.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../CPlus/cpuinfoanalysis.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cpuinfoanalysis.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CpuinfoAnalysis_t {
    QByteArrayData data[8];
    char stringdata[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CpuinfoAnalysis_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CpuinfoAnalysis_t qt_meta_stringdata_CpuinfoAnalysis = {
    {
QT_MOC_LITERAL(0, 0, 15), // "CpuinfoAnalysis"
QT_MOC_LITERAL(1, 16, 7), // "getInfo"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 5), // "setNo"
QT_MOC_LITERAL(4, 31, 7), // "iNumber"
QT_MOC_LITERAL(5, 39, 5), // "getNo"
QT_MOC_LITERAL(6, 45, 2), // "no"
QT_MOC_LITERAL(7, 48, 4) // "info"

    },
    "CpuinfoAnalysis\0getInfo\0\0setNo\0iNumber\0"
    "getNo\0no\0info"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CpuinfoAnalysis[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       2,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x02 /* Public */,
       3,    1,   30,    2, 0x02 /* Public */,
       5,    0,   33,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QString,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Int,

 // properties: name, type, flags
       6, QMetaType::Int, 0x00095103,
       7, QMetaType::QString, 0x00095001,

       0        // eod
};

void CpuinfoAnalysis::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CpuinfoAnalysis *_t = static_cast<CpuinfoAnalysis *>(_o);
        switch (_id) {
        case 0: { QString _r = _t->getInfo();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 1: _t->setNo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: { int _r = _t->getNo();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject CpuinfoAnalysis::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CpuinfoAnalysis.data,
      qt_meta_data_CpuinfoAnalysis,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CpuinfoAnalysis::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CpuinfoAnalysis::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CpuinfoAnalysis.stringdata))
        return static_cast<void*>(const_cast< CpuinfoAnalysis*>(this));
    return QObject::qt_metacast(_clname);
}

int CpuinfoAnalysis::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = getNo(); break;
        case 1: *reinterpret_cast< QString*>(_v) = getInfo(); break;
        default: break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setNo(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
