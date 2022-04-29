#include "transactions.h"
#include "ui_transactions.h"

Transactions::Transactions(User *user, QString balance, QString transactions, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Transactions)
{
    ui->setupUi(this);
    ui->UserData->setText(user->name + "\n" + user->add + "\n"+ user->pho);
    ui->TransactionsView->setText(transactions);
    ui->Balance->setText("Saldo " + balance);
}

Transactions::~Transactions()
{
    delete ui;
}
