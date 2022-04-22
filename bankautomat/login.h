#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <QDebug>
#include <QTimer>

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(int cardNum ,QWidget *parent = nullptr);
    ~Login();

signals:
    void pinCorrect_signal(int);

private slots:
    void on_correctPin_clicked();
    void handleTimeout();
    void on_wrongPin_clicked();

private:
    Ui::Login *ui;
    QTimer *timer;
    int logCardNum;
};

#endif // LOGIN_H
