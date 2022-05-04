#include "login.h"
#include "ui_login.h"

Login::Login(QByteArray cardNum, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    qDebug()<< "Login avattu";
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()),
            this, SLOT(handleTimeout()));
    timer->start(10000);
    logCardNum = cardNum;
    ui->label->setText(logCardNum);

    pApiDll = new Api_dll;
    connect(this, SIGNAL(verifyLoginData_signal(QString,short)),
            pApiDll, SLOT(Verify_loginData(QString,short)),Qt::QueuedConnection);
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
    delete timer;
    timer = nullptr;
}

void Login::loginInfo(QString ID, QString name, QString add, QString pho)
{
    pUser = new User(ID, name, add, pho);
    qDebug()<<"login vastaanotettu";
    emit pinCorrect_signal(pUser, pApiDll);
    close();
}

void Login::loginFailed_slot()
{
    qDebug()<<"failed";
}

void Login::on_correctPin_clicked()
{
    timer->stop();
    pin = ui->Pin->text().toShort();
    QString cardstr =QString(logCardNum);
    emit verifyLoginData_signal(cardstr, pin);
}

void Login::handleTimeout()
{
    close();
}


void Login::on_wrongPin_clicked()
{
    ui->label->setText("Väärä pin");
    timer->stop();
}

