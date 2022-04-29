#ifndef WITHDRAW_H
#define WITHDRAW_H

#include <QDialog>
#include "api_dll.h"


namespace Ui {
class Withdraw;
}

class Withdraw : public QDialog
{
    Q_OBJECT

public:
    explicit Withdraw(Api_dll* api,QWidget *parent = nullptr);
    ~Withdraw();

signals:
    void withdraw_signal(short);

public slots:
    void withdraw_slot(bool);

private slots:
    void on_TwentyButton_clicked();

    void on_FortyBtn_clicked();

    void on_SixtyBtn_clicked();

    void on_HundredBtn_clicked();

    void on_TwoHundredBtn_clicked();

    void on_FiveHundredBtn_clicked();

private:
    Ui::Withdraw *ui;
    Api_dll *pApiDllWithdraw;
};

#endif // WITHDRAW_H
