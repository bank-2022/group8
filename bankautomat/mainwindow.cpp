#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pRFID125 = new RFID125;

    pRFID125->readCardID();
    connect(pRFID125,SIGNAL(sendCardID(QByteArray)),
            this,SLOT(RFID_slot(QByteArray)), Qt::QueuedConnection);

}

MainWindow::~MainWindow()
{
    delete ui;
    delete pRFID125;
    pRFID125 = nullptr;

}

void MainWindow::RFID_slot(QByteArray num)
{
    qDebug()<< "Toimii";
    pPinDll = new PinDll;
    pLogin = new Login(num); //lähetetään korttinumero
    connect(pLogin, SIGNAL(pinCorrect_signal(User*, Api_dll*)),
            this, SLOT(pinCorrect(User*, Api_dll*)), Qt::QueuedConnection);
    connect(this, SIGNAL(openPinWindow()),
            pPinDll, SLOT(CardSlot()), Qt::QueuedConnection);
    connect(pPinDll, SIGNAL(PinSignalToExe(QString)),
            pLogin, SLOT(getPinFromDll(QString)), Qt::QueuedConnection);
    connect(pLogin, SIGNAL(loginResult(bool)),
            pPinDll, SLOT(PinResult(bool)), Qt::QueuedConnection);
    connect(pLogin, SIGNAL(deletePinUI()),
            this, SLOT(deletePinUi()), Qt::QueuedConnection);
    emit openPinWindow();
    //pLogin->exec();
    //pRFID125->readCardID();
}



void MainWindow::pinCorrect(User * user, Api_dll * api)
{
    qDebug()<<"pin oikein";
    qDebug()<< user->ID;
    delete pPinDll;
    pPinDll = nullptr;
    delete pLogin;
    pLogin = nullptr;
    pmainUi = new mainUi(user, api);
    connect(pmainUi, SIGNAL(mainUiClosed_signal()),
            this, SLOT(mainUiClosed()), Qt::QueuedConnection);
    this->hide();
    pmainUi->exec();
}

void MainWindow::mainUiClosed()
{
    delete pmainUi;
    pmainUi = nullptr;
    this->show();
    pRFID125->readCardID();


}

void MainWindow::deletePinUi()
{
    delete pPinDll;
    delete pLogin;
    pLogin = nullptr;
    pPinDll = nullptr;
    pRFID125->readCardID();
}

