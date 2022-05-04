#include "pinui.h"
#include "ui_pinui.h"

PinUi::PinUi(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PinUi)
{

    ui->setupUi(this);

}

PinUi::~PinUi()
{
    delete ui;

}

void PinUi::setLabelClear()
{
    ui->PinValue->clear();
    value = "";
    ui->label->setText("Väärä Pin");
}


void PinUi::on_BtnOne_clicked()
{
     emit BtnSignal("1");
    value = ui->PinValue->text();
    value.append("1");
    ui->PinValue->setText(value);


}


void PinUi::on_BtnTwo_clicked()
{
    emit BtnSignal("2");
    value = ui->PinValue->text();
    value.append("2");
    ui->PinValue->setText(value);

}


void PinUi::on_BtnThree_clicked()
{
    emit BtnSignal("3");
    value = ui->PinValue->text();
    value.append("3");
    ui->PinValue->setText(value);

}


void PinUi::on_BtnFour_clicked()
{
    emit BtnSignal("4");
    value = ui->PinValue->text();
    value.append("4");
    ui->PinValue->setText(value);

}


void PinUi::on_BtnFive_clicked()
{
    emit BtnSignal("5");
    value = ui->PinValue->text();
    value.append("5");
    ui->PinValue->setText(value);

}


void PinUi::on_BtnSix_clicked()
{
    emit BtnSignal("6");
    value = ui->PinValue->text();
    value.append("6");
    ui->PinValue->setText(value);

}


void PinUi::on_BtnSeven_clicked()
{
    emit BtnSignal("7");
    value = ui->PinValue->text();
    value.append("7");
    ui->PinValue->setText(value);

}


void PinUi::on_BtnEight_clicked()
{
    emit BtnSignal("8");
    value = ui->PinValue->text();
    value.append("8");
    ui->PinValue->setText(value);

}


void PinUi::on_BtnNine_clicked()
{
    emit BtnSignal("9");
    value = ui->PinValue->text();
    value.append("9");
    ui->PinValue->setText(value);

}


void PinUi::on_BtnOk_clicked()
{
    emit BtnSignal("OK");


}


void PinUi::on_BtnZero_clicked()
{
    emit BtnSignal("0");
    value = ui->PinValue->text();
    value.append("0");
    ui->PinValue->setText(value);

}


void PinUi::on_BtnBack_clicked()
{
    emit BtnSignal("BACK");
    value = ui->PinValue->text();
    value.chop(1);
    ui->PinValue->setText(value);

}

