#include "mainui.h"
#include "ui_mainui.h"

mainUi::mainUi(int mainCardNum, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mainUi)
{
    qDebug()<< "Pääkäyttöliittymä avattu";
    ui->setupUi(this);
    ui->cardNum->setText(QString::number(mainCardNum));
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()),
            this, SLOT(handleTimeout()));
    timer->setInterval(10000);
    timer->start();

    pBalance = new Balance(this);
    pTransactions = new Transactions(this);
    pWithdraw = new Withdraw(this);
}

mainUi::~mainUi()
{
    qDebug() << "Pääkäyttöliittymä tuhottu";
    delete ui;
    delete timer;
    timer = nullptr;
}

void mainUi::handleTimeout()
{
    //emit mainUiClosed_signal();
    //timer->stop();
    this->close();
}

void mainUi::on_signOut_clicked()
{
    //emit mainUiClosed_signal();
    close();
}

void mainUi::closeEvent(QCloseEvent *event)
{
    timer->stop();
    emit mainUiClosed_signal();
    qDebug()<< "Pääkäyttöliittymä close event";
    event->accept();
}


void mainUi::on_BalanceButton_clicked()
{
    timer->stop();
    pBalance->exec();
    timer->start();
}


void mainUi::on_TransactionsButton_clicked()
{
    timer->stop();
    pTransactions->exec();
    timer->start();
}


void mainUi::on_WithdrawButton_clicked()
{
    timer->stop();
    pWithdraw->exec();
    timer->start();
}

