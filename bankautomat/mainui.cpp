#include "mainui.h"
#include "ui_mainui.h"

mainUi::mainUi(User *user, Api_dll *api, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mainUi)
{
    qDebug()<< "Pääkäyttöliittymä avattu";
    ui->setupUi(this);

    userMain = user;
    ID = user->ID;
    name = user->name;
    add = user->add;
    pho = user->pho;

    ui->UserData->setText(user->name);
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()),
            this, SLOT(handleTimeout()));
    timer->setInterval(30000);
    timer->start();
    pApiDllMain = api;
    connect(this, SIGNAL(getTransactions()),
            pApiDllMain, SLOT(browse_transactions()),Qt::QueuedConnection);
    connect(pApiDllMain,SIGNAL(sendTransactionsToExe(QString, QString)),
            this, SLOT(transactions_slot(QString, QString)),Qt::QueuedConnection);
    pWithdraw = new Withdraw(pApiDllMain,this);
}



mainUi::~mainUi()
{
    qDebug() << "Pääkäyttöliittymä tuhottu";
    delete ui;
    delete userMain;
    userMain = nullptr;
    delete pApiDllMain;
    pApiDllMain = nullptr;
    delete timer;
    timer = nullptr;
}

void mainUi::transactions_slot(QString balance, QString transactions)
{
    qDebug()<< "transactions slot";
    pTransactions = new Transactions(userMain, balance, transactions, this);
    pTransactions->exec();
    timer->start();
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


void mainUi::on_TransactionsButton_clicked()
{
    timer->stop();   
    emit getTransactions();
    //pTransactions->exec();
}


void mainUi::on_WithdrawButton_clicked()
{
    timer->stop();
    pWithdraw->exec();
    timer->start();
}

