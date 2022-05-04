#include "engine.h"
#include <QDebug>

Engine::Engine()
{




}

void Engine::BtnSlot(QString str)
{
    if (str == "OK"){
        emit PinSignal(PinValue);

        qDebug()<<PinValue;

    } else if (str == "BACK"){
      PinValue.chop(1);
    } else {

      PinValue.append(str);


    }

}

const QString &Engine::getPinValue() const
{
    return PinValue;
}

void Engine::setPinValue(const QString &newPinValue)
{
    PinValue = newPinValue;
}
