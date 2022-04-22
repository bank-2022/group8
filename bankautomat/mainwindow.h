#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include "login.h"
#include "mainui.h"

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
    void pinCorrect(int);
    void mainUiClosed();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    Login *pLogin;
    mainUi *pmainUi;
    int cardNum;
};
#endif // MAINWINDOW_H
