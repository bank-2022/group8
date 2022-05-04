#ifndef TRANSACTIONS_H
#define TRANSACTIONS_H

#include <QDialog>
#include "user.h"

namespace Ui {
class Transactions;
}

class Transactions : public QDialog
{
    Q_OBJECT

public:
    explicit Transactions(User* user, QString balance, QString transactions, QWidget *parent = nullptr);
    ~Transactions();

private:
    Ui::Transactions *ui;
};

#endif // TRANSACTIONS_H
