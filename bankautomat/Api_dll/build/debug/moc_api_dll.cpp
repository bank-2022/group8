/****************************************************************************
** Meta object code from reading C++ file 'api_dll.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../BankSimul/group8/bankautomat/Api_dll/api_dll.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'api_dll.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Api_dll_t {
    QByteArrayData data[22];
    char stringdata0[294];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Api_dll_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Api_dll_t qt_meta_stringdata_Api_dll = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Api_dll"
QT_MOC_LITERAL(1, 8, 17), // "VerifyLoginSignal"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 7), // "cardNum"
QT_MOC_LITERAL(4, 35, 3), // "pin"
QT_MOC_LITERAL(5, 39, 10), // "getBalance"
QT_MOC_LITERAL(6, 50, 14), // "MakeWithdrawal"
QT_MOC_LITERAL(7, 65, 15), // "getTransactions"
QT_MOC_LITERAL(8, 81, 13), // "sendLoginInfo"
QT_MOC_LITERAL(9, 95, 11), // "loginFailed"
QT_MOC_LITERAL(10, 107, 16), // "sendBalanceToExe"
QT_MOC_LITERAL(11, 124, 18), // "sendWithdrawResult"
QT_MOC_LITERAL(12, 143, 21), // "sendTransactionsToExe"
QT_MOC_LITERAL(13, 165, 16), // "Verify_loginData"
QT_MOC_LITERAL(14, 182, 13), // "withdrawMoney"
QT_MOC_LITERAL(15, 196, 11), // "showBalance"
QT_MOC_LITERAL(16, 208, 19), // "browse_transactions"
QT_MOC_LITERAL(17, 228, 9), // "loginInfo"
QT_MOC_LITERAL(18, 238, 11), // "FailedLogin"
QT_MOC_LITERAL(19, 250, 11), // "sendBalance"
QT_MOC_LITERAL(20, 262, 14), // "withdrawResult"
QT_MOC_LITERAL(21, 277, 16) // "sendTransactions"

    },
    "Api_dll\0VerifyLoginSignal\0\0cardNum\0"
    "pin\0getBalance\0MakeWithdrawal\0"
    "getTransactions\0sendLoginInfo\0loginFailed\0"
    "sendBalanceToExe\0sendWithdrawResult\0"
    "sendTransactionsToExe\0Verify_loginData\0"
    "withdrawMoney\0showBalance\0browse_transactions\0"
    "loginInfo\0FailedLogin\0sendBalance\0"
    "withdrawResult\0sendTransactions"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Api_dll[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  104,    2, 0x06 /* Public */,
       5,    0,  109,    2, 0x06 /* Public */,
       6,    1,  110,    2, 0x06 /* Public */,
       7,    0,  113,    2, 0x06 /* Public */,
       8,    4,  114,    2, 0x06 /* Public */,
       9,    0,  123,    2, 0x06 /* Public */,
      10,    2,  124,    2, 0x06 /* Public */,
      11,    1,  129,    2, 0x06 /* Public */,
      12,    2,  132,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    2,  137,    2, 0x0a /* Public */,
      14,    1,  142,    2, 0x0a /* Public */,
      15,    0,  145,    2, 0x0a /* Public */,
      16,    0,  146,    2, 0x0a /* Public */,
      17,    4,  147,    2, 0x0a /* Public */,
      18,    0,  156,    2, 0x0a /* Public */,
      19,    2,  157,    2, 0x0a /* Public */,
      20,    1,  162,    2, 0x0a /* Public */,
      21,    2,  165,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Short,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    2,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::Short,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    2,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,

       0        // eod
};

void Api_dll::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Api_dll *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->VerifyLoginSignal((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->getBalance(); break;
        case 2: _t->MakeWithdrawal((*reinterpret_cast< short(*)>(_a[1]))); break;
        case 3: _t->getTransactions(); break;
        case 4: _t->sendLoginInfo((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 5: _t->loginFailed(); break;
        case 6: _t->sendBalanceToExe((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 7: _t->sendWithdrawResult((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->sendTransactionsToExe((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 9: _t->Verify_loginData((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 10: _t->withdrawMoney((*reinterpret_cast< short(*)>(_a[1]))); break;
        case 11: _t->showBalance(); break;
        case 12: _t->browse_transactions(); break;
        case 13: _t->loginInfo((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 14: _t->FailedLogin(); break;
        case 15: _t->sendBalance((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 16: _t->withdrawResult((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->sendTransactions((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Api_dll::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Api_dll::VerifyLoginSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Api_dll::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Api_dll::getBalance)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Api_dll::*)(short );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Api_dll::MakeWithdrawal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Api_dll::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Api_dll::getTransactions)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Api_dll::*)(QString , QString , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Api_dll::sendLoginInfo)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Api_dll::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Api_dll::loginFailed)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Api_dll::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Api_dll::sendBalanceToExe)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Api_dll::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Api_dll::sendWithdrawResult)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Api_dll::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Api_dll::sendTransactionsToExe)) {
                *result = 8;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Api_dll::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Api_dll.data,
    qt_meta_data_Api_dll,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Api_dll::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Api_dll::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Api_dll.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Api_dll::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void Api_dll::VerifyLoginSignal(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Api_dll::getBalance()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Api_dll::MakeWithdrawal(short _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Api_dll::getTransactions()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Api_dll::sendLoginInfo(QString _t1, QString _t2, QString _t3, QString _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Api_dll::loginFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Api_dll::sendBalanceToExe(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Api_dll::sendWithdrawResult(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Api_dll::sendTransactionsToExe(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
