#include "api_dll.h"

Api_dll::Api_dll()
{
    objectEngine = new Engine;
    connect(this, SIGNAL(VerifyLoginSignal(short,short)),
            objectEngine, SLOT(login(short,short)));

    connect(objectEngine, SIGNAL(loginInfo(QString, QString, QString, QString)),
            this, SLOT(loginInfo(QString, QString, QString, QString)));

    connect(objectEngine, SIGNAL(loginFailed()),
            this, SLOT(FailedLogin()));

    connect(this, SIGNAL(getBalance()),
            objectEngine, SLOT(showBalance()));

    connect(objectEngine, SIGNAL(sendBalance(QString,QString)),
            this, SLOT(sendBalance(QString,QString)));

    connect(this, SIGNAL(MakeWithdrawal(short)),
            objectEngine, SLOT(withdrawMoney(short)));

    connect(objectEngine, SIGNAL(withdrawResult(bool)),
            this, SLOT(withdrawResult(bool)));

    connect(this, SIGNAL(getTransactions()),
            objectEngine, SLOT(browse_transactions()));

    connect(objectEngine, SIGNAL(sendTransactions(QString,QString)),
            this, SLOT(sendTransactions(QString,QString)));
}

Api_dll::~Api_dll()
{
    delete objectEngine;
    objectEngine = nullptr;
}

void Api_dll::Verify_loginData(short cardNum, short pin)
{
    emit VerifyLoginSignal(cardNum,pin);  
}

void Api_dll::withdrawMoney(short amount)
{
    emit MakeWithdrawal(amount);
}

void Api_dll::showBalance()
{
    emit getBalance();
}

void Api_dll::browse_transactions()
{
    emit getTransactions();
}

void Api_dll::loginInfo(QString ID, QString name, QString add, QString pho)
{

    emit sendLoginInfo(ID, name, add ,pho);
}

void Api_dll::FailedLogin()
{
    emit loginFailed();
}

void Api_dll::sendBalance(QString balance, QString transactions)
{
    emit sendBalanceToExe(balance,transactions);
}

void Api_dll::withdrawResult(bool result)
{
    emit sendWithdrawResult(result);
}

void Api_dll::sendTransactions(QString balance, QString transactions)
{
    emit sendTransactionsToExe(balance, transactions);
}
