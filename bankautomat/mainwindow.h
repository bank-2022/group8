#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include "login.h"
#include "mainui.h"
#include "rfid125.h"
#include "api_dll.h"
#include "pindll.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void RFID_slot(QByteArray);
    void pinCorrect(User*, Api_dll*);
    void mainUiClosed();
    void deletePinUi();

signals:
    void openPinWindow();

private:
    Ui::MainWindow *ui;
    Login *pLogin;
    mainUi *pmainUi;
    RFID125 *pRFID125;
    PinDll *pPinDll;
    int cardNum;
};
#endif // MAINWINDOW_H
