/********************************************************************************
** Form generated from reading UI file 'pinui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PINUI_H
#define UI_PINUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PinUi
{
public:
    QLabel *label;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *BtnNine;
    QPushButton *BtnFive;
    QPushButton *BtnBack;
    QPushButton *BtnZero;
    QPushButton *BtnOne;
    QPushButton *BtnTwo;
    QPushButton *BtnEight;
    QPushButton *BtnThree;
    QPushButton *BtnSix;
    QPushButton *BtnSeven;
    QPushButton *BtnOk;
    QPushButton *BtnFour;
    QLabel *PinValue;

    void setupUi(QDialog *PinUi)
    {
        if (PinUi->objectName().isEmpty())
            PinUi->setObjectName(QString::fromUtf8("PinUi"));
        PinUi->resize(478, 300);
        label = new QLabel(PinUi);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(200, 20, 81, 16));
        QFont font;
        font.setPointSize(10);
        font.setBold(false);
        font.setWeight(50);
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setFrameShape(QFrame::NoFrame);
        gridLayoutWidget = new QWidget(PinUi);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(60, 50, 351, 171));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        BtnNine = new QPushButton(gridLayoutWidget);
        BtnNine->setObjectName(QString::fromUtf8("BtnNine"));

        gridLayout->addWidget(BtnNine, 2, 2, 1, 1);

        BtnFive = new QPushButton(gridLayoutWidget);
        BtnFive->setObjectName(QString::fromUtf8("BtnFive"));

        gridLayout->addWidget(BtnFive, 1, 1, 1, 1);

        BtnBack = new QPushButton(gridLayoutWidget);
        BtnBack->setObjectName(QString::fromUtf8("BtnBack"));

        gridLayout->addWidget(BtnBack, 3, 2, 1, 1);

        BtnZero = new QPushButton(gridLayoutWidget);
        BtnZero->setObjectName(QString::fromUtf8("BtnZero"));

        gridLayout->addWidget(BtnZero, 3, 1, 1, 1);

        BtnOne = new QPushButton(gridLayoutWidget);
        BtnOne->setObjectName(QString::fromUtf8("BtnOne"));

        gridLayout->addWidget(BtnOne, 0, 0, 1, 1);

        BtnTwo = new QPushButton(gridLayoutWidget);
        BtnTwo->setObjectName(QString::fromUtf8("BtnTwo"));

        gridLayout->addWidget(BtnTwo, 0, 1, 1, 1);

        BtnEight = new QPushButton(gridLayoutWidget);
        BtnEight->setObjectName(QString::fromUtf8("BtnEight"));

        gridLayout->addWidget(BtnEight, 2, 1, 1, 1);

        BtnThree = new QPushButton(gridLayoutWidget);
        BtnThree->setObjectName(QString::fromUtf8("BtnThree"));

        gridLayout->addWidget(BtnThree, 0, 2, 1, 1);

        BtnSix = new QPushButton(gridLayoutWidget);
        BtnSix->setObjectName(QString::fromUtf8("BtnSix"));

        gridLayout->addWidget(BtnSix, 1, 2, 1, 1);

        BtnSeven = new QPushButton(gridLayoutWidget);
        BtnSeven->setObjectName(QString::fromUtf8("BtnSeven"));

        gridLayout->addWidget(BtnSeven, 2, 0, 1, 1);

        BtnOk = new QPushButton(gridLayoutWidget);
        BtnOk->setObjectName(QString::fromUtf8("BtnOk"));

        gridLayout->addWidget(BtnOk, 3, 0, 1, 1);

        BtnFour = new QPushButton(gridLayoutWidget);
        BtnFour->setObjectName(QString::fromUtf8("BtnFour"));

        gridLayout->addWidget(BtnFour, 1, 0, 1, 1);

        PinValue = new QLabel(gridLayoutWidget);
        PinValue->setObjectName(QString::fromUtf8("PinValue"));
        QFont font1;
        font1.setPointSize(10);
        PinValue->setFont(font1);
        PinValue->setLayoutDirection(Qt::LeftToRight);
        PinValue->setFrameShape(QFrame::WinPanel);
        PinValue->setFrameShadow(QFrame::Plain);

        gridLayout->addWidget(PinValue, 4, 1, 1, 1);


        retranslateUi(PinUi);

        QMetaObject::connectSlotsByName(PinUi);
    } // setupUi

    void retranslateUi(QDialog *PinUi)
    {
        PinUi->setWindowTitle(QCoreApplication::translate("PinUi", "Dialog", nullptr));
        label->setText(QString());
        BtnNine->setText(QCoreApplication::translate("PinUi", "9", nullptr));
        BtnFive->setText(QCoreApplication::translate("PinUi", "5", nullptr));
        BtnBack->setText(QCoreApplication::translate("PinUi", "<-", nullptr));
        BtnZero->setText(QCoreApplication::translate("PinUi", "0", nullptr));
        BtnOne->setText(QCoreApplication::translate("PinUi", "1", nullptr));
        BtnTwo->setText(QCoreApplication::translate("PinUi", "2", nullptr));
        BtnEight->setText(QCoreApplication::translate("PinUi", "8", nullptr));
        BtnThree->setText(QCoreApplication::translate("PinUi", "3", nullptr));
        BtnSix->setText(QCoreApplication::translate("PinUi", "6", nullptr));
        BtnSeven->setText(QCoreApplication::translate("PinUi", "7", nullptr));
        BtnOk->setText(QCoreApplication::translate("PinUi", "OK", nullptr));
        BtnFour->setText(QCoreApplication::translate("PinUi", "4", nullptr));
        PinValue->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PinUi: public Ui_PinUi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PINUI_H
