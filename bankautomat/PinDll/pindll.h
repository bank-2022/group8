#ifndef PINDLL_H
#define PINDLL_H
#include <QObject>
#include "PinDll_global.h"
#include "pinui.h"



class PINDLL_EXPORT PinDll: public QObject
{
    Q_OBJECT

public:
    PinDll();


    const QString &getPinValue() const;
    void setPinValue(const QString &newPinValue);



private:

    PinUi * pPinUi;
    QString Pin;
    QString PinValue;


signals:
    void BtnSignal(QString);
    void PinSignalToExe(QString);
    void setLabelClear();




public slots:
    void CardSlot();
    void PinResult(bool);
    void BtnSlot(QString);


};



#endif // PINDLL_H
