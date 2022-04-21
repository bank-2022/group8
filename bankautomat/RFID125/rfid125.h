#ifndef RFID125_H
#define RFID125_H
#include "RFID125_global.h"
#include <QObject>
#include <QDebug>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>

class RFID125_EXPORT RFID125 : public QObject
{
   Q_OBJECT
public:
    RFID125(QObject * parent = nullptr);
    ~RFID125();
    void readCardID();

signals:
    void sendCardID(QByteArray);

public slots:
    void receiveCardID();

private:
    QSerialPort * port;
    QByteArray ID;
};

#endif // RFID125_H
