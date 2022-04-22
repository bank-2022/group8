#include "login.h"
#include "ui_login.h"

Login::Login(int cardNum, QWidget *parent) :
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
}

Login::~Login()
{
    qDebug() << "login tuhottu";
    delete ui;

}

void Login::on_correctPin_clicked()
{
    //tarkistetaan korttinumero ja pin
    qDebug() << "Pin oikein";
    emit pinCorrect_signal(logCardNum);
    delete timer;
    timer = nullptr;
    close();
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

