#ifndef PINUI_H
#define PINUI_H

#include <QDialog>

namespace Ui {
class PinUi;
}

class PinUi : public QDialog
{
    Q_OBJECT

public:
    explicit PinUi(QWidget *parent = nullptr);
    ~PinUi();



public slots:
    void setLabelClear();



signals:
    void BtnSignal(QString);


private slots:
    void on_BtnOne_clicked();

    void on_BtnTwo_clicked();

    void on_BtnThree_clicked();

    void on_BtnFour_clicked();

    void on_BtnFive_clicked();

    void on_BtnSix_clicked();

    void on_BtnSeven_clicked();

    void on_BtnEight_clicked();

    void on_BtnNine_clicked();

    void on_BtnOk_clicked();

    void on_BtnZero_clicked();

    void on_BtnBack_clicked();

private:
    Ui::PinUi *ui;
    QString value;
};

#endif // PINUI_H
