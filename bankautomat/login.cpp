#include "login.h"
#include "ui_login.h"

Login::Login(QByteArray cardNum, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    qDebug()<< "Login avattu";
    //timer = new QTimer(this);
    //connect(timer, SIGNAL(timeout()),
           // this, SLOT(handleTimeout()));
    //timer->start(10000);
    logCardNum = cardNum;
    //ui->label->setText(logCardNum);
    //pPinDll = new PinDll;
    pApiDll = new Api_dll;

    connect(this, SIGNAL(verifyLoginData_signal(QString, QString)),
            pApiDll, SLOT(Verify_loginData(QString, QString)),Qt::QueuedConnection);
    connect(pApiDll, SIGNAL(sendLoginInfo(QString, QString, QString, QString)),
            this, SLOT(loginInfo(QString, QString, QString, QString)), Qt::QueuedConnection);
    connect(pApiDll, SIGNAL(loginFailed()),
            this, SLOT(loginFailed_slot()), Qt::QueuedConnection);

}


Login::~Login()
{
    qDebug() << "login tuhottu";
    delete ui;
    //delete pApiDll;
    //pApiDll = nullptr;
    //delete timer;
    //timer = nullptr;
}

void Login::loginInfo(QString ID, QString name, QString add, QString pho)
{
    pUser = new User(ID, name, add, pho);
    qDebug()<<"login vastaanotettu";
    emit loginResult(true);
    emit pinCorrect_signal(pUser, pApiDll);
    //delete pPinDll;
    //pPinDll = nullptr;
    //close();
}

void Login::loginFailed_slot()
{
    qDebug()<<"failed";
    emit loginResult(false);
}

void Login::getPinFromDll(QString pin)
{
    qDebug()<<"Pin from dll";
    if(!pin.isEmpty()){
        QString cardstr =QString(logCardNum);
        emit verifyLoginData_signal(cardstr, pin);
    }else{
        emit deletePinUI();
    }
}

void Login::handleTimeout()
{
    close();
}


