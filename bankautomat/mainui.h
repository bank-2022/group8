#ifndef MAINUI_H
#define MAINUI_H

#include <QDialog>
#include <QTimer>
#include <QDebug>
#include <QCloseEvent>

#include "api_dll.h"
#include "balance.h"
#include "transactions.h"
#include "withdraw.h"
#include "user.h"

namespace Ui {
class mainUi;
}

class mainUi : public QDialog
{
    Q_OBJECT

public:
    explicit mainUi(User* user, Api_dll * api,QWidget *parent = nullptr);
    ~mainUi();

signals:
    void mainUiClosed_signal();
    void getTransactions();

public slots:
    void transactions_slot(QString, QString);


private slots:
    void handleTimeout();
    void on_signOut_clicked();
    void on_TransactionsButton_clicked();
    void on_WithdrawButton_clicked();

private:
    Ui::mainUi *ui;
    Api_dll *pApiDllMain;
    QTimer *timer;
    Balance *pBalance;
    Transactions *pTransactions;
    Withdraw *pWithdraw;
    User *userMain;
    void closeEvent(QCloseEvent *);
    QString ID;
    QString name;
    QString add;
    QString pho;
};

#endif // MAINUI_H
