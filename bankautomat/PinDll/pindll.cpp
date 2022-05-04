#include "pindll.h"
#include <QDebug>

PinDll::PinDll()
{



}



const QString &PinDll::getPinValue() const
{
    return PinValue;
}

    void PinDll::setPinValue(const QString &newPinValue)
{
    PinValue = newPinValue;

}


    void PinDll::CardSlot()
{
    pPinUi=new PinUi;
    connect(pPinUi,SIGNAL(BtnSignal(QString)),
            this, SLOT(BtnSlot(QString)));
    connect(this, SIGNAL(setLabelClear()),
            pPinUi, SLOT(setLabelClear()));
    pPinUi->exec();
    QString pin = this->getPinValue();
    qDebug()<<pin;
    emit PinSignalToExe(pin);



}
void PinDll::PinResult(bool Results)
{
    if (Results == true){
        qDebug()<<"Oikea Pin";
        PinValue = "";
        delete pPinUi;


    }
    else {
        qDebug()<<"väärä pin";
        PinValue = "";
        emit setLabelClear();
        pPinUi->exec();
        QString pin = this->getPinValue();
        emit PinSignalToExe(pin);
    }

    }

    void PinDll::BtnSlot(QString str)
{
       if (str == "OK"){
           this->setPinValue(PinValue);
           qDebug()<<PinValue;
           pPinUi->close();


       } else if (str == "BACK"){
       PinValue.chop(1);
    }   else {

    PinValue.append(str);

    }

}
