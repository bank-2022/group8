#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;

}


void MainWindow::on_pushButton_clicked()
{
    pLogin = new Login(ui->cardNum->text().toInt()); //lähetetään korttinumero
    connect(pLogin, SIGNAL(pinCorrect_signal(int)),
            this, SLOT(pinCorrect(int)), Qt::QueuedConnection);
    pLogin->exec();
}

void MainWindow::pinCorrect(int num)
{
    delete pLogin;
    pLogin = nullptr;
    pmainUi = new mainUi(num);
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

}

