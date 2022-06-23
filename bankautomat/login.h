#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <QDebug>
#include <QTimer>
#include "api_dll.h"
#include "user.h"
#include "pindll.h"


namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QByteArray cardNum ,QWidget *parent = nullptr);
    ~Login();

signals:
    void pinCorrect_signal(User*, Api_dll*);
    void verifyLoginData_signal(QString, QString);
    void loginResult(bool);
    void deletePinUI();

public slots:
    void loginInfo(QString ID, QString name, QString add, QString pho);
    void loginFailed_slot();
    void getPinFromDll(QString);

private slots:
    void handleTimeout();


private:
    Ui::Login *ui;
    QTimer *timer;
    QByteArray logCardNum;
    Api_dll *pApiDll;
    PinDll *pPinDll;
    short pin;
    User *pUser;
};

#endif // LOGIN_H
