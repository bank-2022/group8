/****************************************************************************
** Meta object code from reading C++ file 'pindll.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../pindll.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pindll.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PinDll_t {
    QByteArrayData data[8];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PinDll_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PinDll_t qt_meta_stringdata_PinDll = {
    {
QT_MOC_LITERAL(0, 0, 6), // "PinDll"
QT_MOC_LITERAL(1, 7, 9), // "BtnSignal"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 14), // "PinSignalToExe"
QT_MOC_LITERAL(4, 33, 13), // "setLabelClear"
QT_MOC_LITERAL(5, 47, 8), // "CardSlot"
QT_MOC_LITERAL(6, 56, 9), // "PinResult"
QT_MOC_LITERAL(7, 66, 7) // "BtnSlot"

    },
    "PinDll\0BtnSignal\0\0PinSignalToExe\0"
    "setLabelClear\0CardSlot\0PinResult\0"
    "BtnSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PinDll[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       3,    1,   47,    2, 0x06 /* Public */,
       4,    0,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   51,    2, 0x0a /* Public */,
       6,    1,   52,    2, 0x0a /* Public */,
       7,    1,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void PinDll::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PinDll *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->BtnSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->PinSignalToExe((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->setLabelClear(); break;
        case 3: _t->CardSlot(); break;
        case 4: _t->PinResult((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->BtnSlot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PinDll::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PinDll::BtnSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PinDll::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PinDll::PinSignalToExe)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PinDll::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PinDll::setLabelClear)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PinDll::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PinDll.data,
    qt_meta_data_PinDll,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PinDll::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PinDll::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PinDll.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PinDll::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void PinDll::BtnSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PinDll::PinSignalToExe(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PinDll::setLabelClear()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
