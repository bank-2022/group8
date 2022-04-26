#ifndef ENGINE_H
#define ENGINE_H

#include <QObject>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>

class Engine: public QObject
{
    Q_OBJECT
public:
    Engine();


private:
    QString base_url = "http://localhost:3000";
    QByteArray token;
    QNetworkReply *reply;
    QByteArray response_data;
    QNetworkAccessManager *loginManager;
    QNetworkAccessManager *getIdManager;
    QNetworkAccessManager *getUserManager;
    QNetworkAccessManager *getBalanceManager;
    QString Id;  
    QString balance;
    QString cardID;
    short cardnumber = 0;
    void getAccountID();
    void getUserInfo();
    void getBalance();
    void getTransactions();
    void getFiveTransactions();

public slots:
//Slots to engine
    void login(short cardNum,short pin);
    void withdrawMoney(short);
    void showBalance();
    void browse_transactions();
//Responses to interface
    void loginResponse(QNetworkReply *reply);
    void getIdResponse(QNetworkReply *reply);
    void getUserResponse(QNetworkReply *reply);
    void getBalance(QNetworkReply*);
    void SendBalance(QNetworkReply*);
    void withdrawResult(QNetworkReply*);
    void SendTransactions(QNetworkReply*);
    void getBalanceTransactions(QNetworkReply*);

signals:
//Signals to interface
    void loginInfo(QString, QString, QString, QString);
    void loginFailed();
    void sendBalance(QString, QString);
    void withdrawResult(bool);
    void sendTransactions(QString, QString);

};

#endif // ENGINE_H
