#ifndef ENGINE_H
#define ENGINE_H
#include <QObject>

class Engine:public QObject
{
    Q_OBJECT

public:
    Engine();

    const QString &getPinValue() const;
    void setPinValue(const QString &newPinValue);

public slots:
    void BtnSlot(QString);


private:
     QString PinValue;

signals:
     void PinSignal(QString);





};

#endif // ENGINE_H
