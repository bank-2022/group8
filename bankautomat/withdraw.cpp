#include "withdraw.h"
#include "ui_withdraw.h"

Withdraw::Withdraw(Api_dll * api, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Withdraw)
{
    ui->setupUi(this);
    pApiDllWithdraw = api;
    connect(this, SIGNAL(withdraw_signal(short)),
            pApiDllWithdraw, SLOT(withdrawMoney(short)), Qt::QueuedConnection);
    connect(pApiDllWithdraw, SIGNAL(sendWithdrawResult(bool)),
            this, SLOT(withdraw_slot(bool)), Qt::QueuedConnection);
}

Withdraw::~Withdraw()
{
    delete ui;
}

void Withdraw::withdraw_slot(bool result)
{
    if(result){
        ui->Result->setText("Nosto onnistui");
    }else{
        ui->Result->setText("Massit ei riitä");
    }
    close();
}

void Withdraw::on_TwentyButton_clicked()
{
    emit withdraw_signal(20);
}


void Withdraw::on_FortyBtn_clicked()
{
    emit withdraw_signal(40);

}


void Withdraw::on_SixtyBtn_clicked()
{
    emit withdraw_signal(60);

}


void Withdraw::on_HundredBtn_clicked()
{
    emit withdraw_signal(100);

}


void Withdraw::on_TwoHundredBtn_clicked()
{
    emit withdraw_signal(200);

}


void Withdraw::on_FiveHundredBtn_clicked()
{
    emit withdraw_signal(500);

}

