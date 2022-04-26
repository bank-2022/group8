#include "engine.h"

Engine::Engine()
{

}

void Engine::getAccountID()
{
    QNetworkRequest request((base_url+"/card/"+QString::number(cardnumber)));

    request.setRawHeader(QByteArray("Authorization"),(token));

    getIdManager = new QNetworkAccessManager(this);
    connect(getIdManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(getIdResponse(QNetworkReply*)));

    reply = getIdManager->get(request);
}

void Engine::getUserInfo()
{
    QNetworkRequest request((base_url+"/user/"+Id));
    request.setRawHeader(QByteArray("Authorization"),(token));

    getUserManager = new QNetworkAccessManager(this);
    connect(getUserManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(getUserResponse(QNetworkReply*)));
    reply = getUserManager->get(request);
}

void Engine::getBalance()
{
    QNetworkRequest request((base_url+"/account/"+Id));
    request.setRawHeader(QByteArray("Authorization"),(token));
    getUserManager = new QNetworkAccessManager(this);

    connect(getUserManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(getBalance(QNetworkReply*)));
    reply = getUserManager->get(request);
}

void Engine::getTransactions()
{
    QNetworkRequest request((base_url+"/transactions/"+Id));
    request.setRawHeader(QByteArray("Authorization"),(token));
    getBalanceManager = new QNetworkAccessManager(this);

    connect(getBalanceManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(SendTransactions(QNetworkReply*)));
    reply = getBalanceManager->get(request);
}

void Engine::getFiveTransactions()
{
    QNetworkRequest request((base_url+"/transactions/"+Id));
    request.setRawHeader(QByteArray("Authorization"),(token));
    getBalanceManager = new QNetworkAccessManager(this);

    connect(getBalanceManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(SendBalance(QNetworkReply*)));
    reply = getBalanceManager->get(request);
}

void Engine::login(short cardNum, short pin)
{
    cardnumber = cardNum;
    QJsonObject jsonObj; //luodaan JSON objekti ja lisätään kortti ja sen pin
    jsonObj.insert("cardNum", cardNum);
    jsonObj.insert("pin", QString::number(pin));

    QNetworkRequest request((base_url+"/login"));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    loginManager = new QNetworkAccessManager(this);
    connect(loginManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(loginResponse(QNetworkReply*)));

    reply = loginManager->post(request, QJsonDocument(jsonObj).toJson());
}

void Engine::withdrawMoney(short amount)
{

    QNetworkRequest request((base_url+"/debit/"+Id+"/"+cardID+"/"+QString::number(amount)));
    request.setRawHeader(QByteArray("Authorization"),(token));

    getBalanceManager = new QNetworkAccessManager(this);
    connect(getBalanceManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(withdrawResult(QNetworkReply*)));
    reply = getBalanceManager->get(request);
}

void Engine::showBalance()
{
    QNetworkRequest request((base_url+"/account/"+Id));
    request.setRawHeader(QByteArray("Authorization"),(token));
    getBalanceManager = new QNetworkAccessManager(this);

    connect(getBalanceManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(getBalance(QNetworkReply*)));
    reply = getBalanceManager->get(request);
}

void Engine::browse_transactions()
{
    QNetworkRequest request((base_url+"/account/"+Id));
    request.setRawHeader(QByteArray("Authorization"),(token));
    getBalanceManager = new QNetworkAccessManager(this);

    connect(getBalanceManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(getBalanceTransactions(QNetworkReply*)));
    reply = getBalanceManager->get(request);
}

void Engine::loginResponse(QNetworkReply *reply)
{
    response_data=reply->readAll();

    if (response_data == "false")
    {      
        emit loginFailed();
    }
    else
    {
       token ="Bearer "+response_data;
       reply->deleteLater();
       getAccountID();  //Haetaan tilin ID ja kortin ID

    }
    loginManager->deleteLater();
}

void Engine::getIdResponse(QNetworkReply *reply)
{
    response_data=reply->readAll();
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
        QJsonArray json_array = json_doc.array();

        foreach (const QJsonValue &value, json_array) {
            QJsonObject json_obj = value.toObject();
            Id+=QString::number(json_obj["CardIdAccount"].toInt());
            cardID+=QString::number(json_obj["idcard"].toInt());
        }
    reply->deleteLater();
    getUserInfo();     //Haetaan kaikki käyttäjän tiedot user-taulusta
    getIdManager->deleteLater();
}

void Engine::getUserResponse(QNetworkReply *reply)
{
    response_data=reply->readAll();
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
     QJsonArray json_array = json_doc.array();
    QString list[4];
     foreach (const QJsonValue &value, json_array) {
        QJsonObject json_obj = value.toObject();
     list[0]+=QString::number(json_obj["iduser"].toInt());
     list[1]+=json_obj["name"].toString();
     list[2]+=json_obj["address"].toString();
     list[3]+=QString::number(json_obj["phoneNum"].toInt());
     }

    emit loginInfo(list[0], list[1], list[2] ,list[3]);
     reply->deleteLater();
     getUserManager->deleteLater();
}

void Engine::getBalance(QNetworkReply *)
{
    response_data=reply->readAll();
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
     QJsonArray json_array = json_doc.array();

     foreach (const QJsonValue &value, json_array) {
        QJsonObject json_obj = value.toObject();
        balance+=QString::number(json_obj["balance"].toInt());
        }
     reply->deleteLater();
     getBalanceManager->deleteLater();
     getFiveTransactions();
}

void Engine::SendBalance(QNetworkReply *)
{
    response_data=reply->readAll();
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
     QJsonArray json_array = json_doc.array();
     QString transactions;

     foreach (const QJsonValue &value, json_array) {
         QJsonObject json_obj = value.toObject();
        transactions+=json_obj["date"].toString()+","+json_obj["transaction"].toString()+","+QString::number(json_obj["sum"].toInt())+"\r";

         }
     emit sendBalance(balance, transactions);
     balance = "";

     getBalanceManager->deleteLater();
     reply->deleteLater();

}

void Engine::withdrawResult(QNetworkReply *)
{
    response_data=reply->readAll();
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
     QJsonObject json_obj = json_doc.object();
    QString result;
        result=QString::number(json_obj["affectedRows"].toInt());

     if (result == "1"){
         emit withdrawResult(true);
     }
     else{
         emit withdrawResult(false);
     }
}

void Engine::SendTransactions(QNetworkReply *)
{
    response_data=reply->readAll();
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
     QJsonArray json_array = json_doc.array();
     QString transactions;

     foreach (const QJsonValue &value, json_array) {
         QJsonObject json_obj = value.toObject();
        transactions+=json_obj["date"].toString()+","+json_obj["transaction"].toString()+","+QString::number(json_obj["sum"].toInt())+"\r";
    }
     emit sendTransactions(balance, transactions);
     balance = "";

     getBalanceManager->deleteLater();
     reply->deleteLater();

}

void Engine::getBalanceTransactions(QNetworkReply *)
{
    response_data=reply->readAll();
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
     QJsonArray json_array = json_doc.array();

     foreach (const QJsonValue &value, json_array) {
        QJsonObject json_obj = value.toObject();
        balance+=QString::number(json_obj["balance"].toInt());
        }
     reply->deleteLater();
     getBalanceManager->deleteLater();
     getTransactions();
}

