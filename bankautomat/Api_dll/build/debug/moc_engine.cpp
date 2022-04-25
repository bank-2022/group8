/****************************************************************************
** Meta object code from reading C++ file 'engine.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../engine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'engine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Engine_t {
    QByteArrayData data[22];
    char stringdata0[266];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Engine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Engine_t qt_meta_stringdata_Engine = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Engine"
QT_MOC_LITERAL(1, 7, 9), // "loginInfo"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 11), // "loginFailed"
QT_MOC_LITERAL(4, 30, 11), // "sendBalance"
QT_MOC_LITERAL(5, 42, 14), // "withdrawResult"
QT_MOC_LITERAL(6, 57, 16), // "sendTransactions"
QT_MOC_LITERAL(7, 74, 5), // "login"
QT_MOC_LITERAL(8, 80, 7), // "cardNum"
QT_MOC_LITERAL(9, 88, 3), // "pin"
QT_MOC_LITERAL(10, 92, 13), // "withdrawMoney"
QT_MOC_LITERAL(11, 106, 11), // "showBalance"
QT_MOC_LITERAL(12, 118, 19), // "browse_transactions"
QT_MOC_LITERAL(13, 138, 13), // "loginResponse"
QT_MOC_LITERAL(14, 152, 14), // "QNetworkReply*"
QT_MOC_LITERAL(15, 167, 5), // "reply"
QT_MOC_LITERAL(16, 173, 13), // "getIdResponse"
QT_MOC_LITERAL(17, 187, 15), // "getUserResponse"
QT_MOC_LITERAL(18, 203, 10), // "getBalance"
QT_MOC_LITERAL(19, 214, 11), // "SendBalance"
QT_MOC_LITERAL(20, 226, 16), // "SendTransactions"
QT_MOC_LITERAL(21, 243, 22) // "getBalanceTransactions"

    },
    "Engine\0loginInfo\0\0loginFailed\0sendBalance\0"
    "withdrawResult\0sendTransactions\0login\0"
    "cardNum\0pin\0withdrawMoney\0showBalance\0"
    "browse_transactions\0loginResponse\0"
    "QNetworkReply*\0reply\0getIdResponse\0"
    "getUserResponse\0getBalance\0SendBalance\0"
    "SendTransactions\0getBalanceTransactions"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Engine[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   99,    2, 0x06 /* Public */,
       3,    0,  108,    2, 0x06 /* Public */,
       4,    2,  109,    2, 0x06 /* Public */,
       5,    1,  114,    2, 0x06 /* Public */,
       6,    2,  117,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    2,  122,    2, 0x0a /* Public */,
      10,    1,  127,    2, 0x0a /* Public */,
      11,    0,  130,    2, 0x0a /* Public */,
      12,    0,  131,    2, 0x0a /* Public */,
      13,    1,  132,    2, 0x0a /* Public */,
      16,    1,  135,    2, 0x0a /* Public */,
      17,    1,  138,    2, 0x0a /* Public */,
      18,    1,  141,    2, 0x0a /* Public */,
      19,    1,  144,    2, 0x0a /* Public */,
       5,    1,  147,    2, 0x0a /* Public */,
      20,    1,  150,    2, 0x0a /* Public */,
      21,    1,  153,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    2,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Short, QMetaType::Short,    8,    9,
    QMetaType::Void, QMetaType::Short,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void, 0x80000000 | 14,    2,

       0        // eod
};

void Engine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Engine *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loginInfo((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 1: _t->loginFailed(); break;
        case 2: _t->sendBalance((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->withdrawResult((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->sendTransactions((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: _t->login((*reinterpret_cast< short(*)>(_a[1])),(*reinterpret_cast< short(*)>(_a[2]))); break;
        case 6: _t->withdrawMoney((*reinterpret_cast< short(*)>(_a[1]))); break;
        case 7: _t->showBalance(); break;
        case 8: _t->browse_transactions(); break;
        case 9: _t->loginResponse((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 10: _t->getIdResponse((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 11: _t->getUserResponse((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 12: _t->getBalance((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 13: _t->SendBalance((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 14: _t->withdrawResult((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 15: _t->SendTransactions((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 16: _t->getBalanceTransactions((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Engine::*)(QString , QString , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Engine::loginInfo)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Engine::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Engine::loginFailed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Engine::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Engine::sendBalance)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Engine::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Engine::withdrawResult)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Engine::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Engine::sendTransactions)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Engine::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Engine.data,
    qt_meta_data_Engine,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Engine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Engine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Engine.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Engine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void Engine::loginInfo(QString _t1, QString _t2, QString _t3, QString _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Engine::loginFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Engine::sendBalance(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Engine::withdrawResult(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Engine::sendTransactions(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
