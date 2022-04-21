#include "rfid125.h"

RFID125::RFID125(QObject *parent): QObject(parent)
{
    port = new QSerialPort(this);
}

RFID125::~RFID125()
{
    delete port;
    port = nullptr;
}

void RFID125::readCardID()
{
    port->setPortName("COM3");
    port->open(QIODevice::ReadOnly);
    qDebug()<<"Insert bankcard";
    connect(port,SIGNAL(readyRead()),this,SLOT(receiveCardID()));
}

void RFID125::receiveCardID()
{
    QByteArray ID=port->read(16).chopped(3).remove(0,3);
    qDebug()<<"Received data:"<<ID.data();
    disconnect(port,SIGNAL(readyRead()),this,SLOT(receiveCardID()));
    emit sendCardID(ID);
}
