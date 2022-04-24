#ifndef MAINUI_H
#define MAINUI_H

#include <QDialog>
#include <QTimer>
#include <QDebug>
#include <QCloseEvent>

#include "balance.h"
#include "transactions.h"
#include "withdraw.h"

namespace Ui {
class mainUi;
}

class mainUi : public QDialog
{
    Q_OBJECT

public:
    explicit mainUi(int mainCardNum,QWidget *parent = nullptr);
    ~mainUi();

signals:
    void mainUiClosed_signal();

private slots:
    void handleTimeout();
    void on_signOut_clicked();
    void on_BalanceButton_clicked();
    void on_TransactionsButton_clicked();
    void on_WithdrawButton_clicked();

private:
    Ui::mainUi *ui;
    QTimer *timer;
    Balance *pBalance;
    Transactions *pTransactions;
    Withdraw *pWithdraw;
    void closeEvent(QCloseEvent *);
};

#endif // MAINUI_H
