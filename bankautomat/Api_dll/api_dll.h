#ifndef API_DLL_H
#define API_DLL_H

#include <QObject>

#include "Api_dll_global.h"
#include "engine.h"

class API_DLL_EXPORT Api_dll: public QObject
{

    Q_OBJECT
public:
    Api_dll();
    ~Api_dll();


private:
    Engine * objectEngine;


public slots:
//Slots to engine
    void Verify_loginData(QString cardNum, short pin);
    void withdrawMoney(short);
    void showBalance();
    void browse_transactions();

//Responses to exe
    void loginInfo(QString, QString, QString, QString);
    void FailedLogin();
    void sendBalance(QString, QString);
    void withdrawResult(bool);
    void sendTransactions(QString, QString);

signals:
//Signals to engine
    void VerifyLoginSignal(QString cardNum, short pin);
    void getBalance();
    void MakeWithdrawal(short);
    void getTransactions();

//Signals to exe
    void sendLoginInfo(QString, QString, QString, QString);
    void loginFailed();
    void sendBalanceToExe(QString, QString);
    void sendWithdrawResult(bool);
    void sendTransactionsToExe(QString, QString);
};

#endif // API_DLL_H
