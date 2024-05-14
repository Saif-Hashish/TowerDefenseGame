/********************************************************************************
** Form generated from reading UI file 'shop.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOP_H
#define UI_SHOP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Shop
{
public:
    QPushButton *cannonbuy;
    QLabel *cannon;
    QLabel *inferno;
    QLabel *tesla;
    QLabel *Xbow;
    QPushButton *infernobuy;
    QPushButton *teslabuy;
    QPushButton *xbowbuy;
    QPushButton *back;
    QLineEdit *coinbalance;

    void setupUi(QDialog *Shop)
    {
        if (Shop->objectName().isEmpty())
            Shop->setObjectName("Shop");
        Shop->resize(1046, 903);
        cannonbuy = new QPushButton(Shop);
        cannonbuy->setObjectName("cannonbuy");
        cannonbuy->setGeometry(QRect(220, 350, 141, 51));
        QFont font;
        font.setPointSize(15);
        cannonbuy->setFont(font);
        cannon = new QLabel(Shop);
        cannon->setObjectName("cannon");
        cannon->setGeometry(QRect(190, 80, 261, 191));
        inferno = new QLabel(Shop);
        inferno->setObjectName("inferno");
        inferno->setGeometry(QRect(660, 80, 261, 191));
        tesla = new QLabel(Shop);
        tesla->setObjectName("tesla");
        tesla->setGeometry(QRect(680, 470, 261, 191));
        Xbow = new QLabel(Shop);
        Xbow->setObjectName("Xbow");
        Xbow->setGeometry(QRect(190, 470, 261, 191));
        infernobuy = new QPushButton(Shop);
        infernobuy->setObjectName("infernobuy");
        infernobuy->setGeometry(QRect(690, 350, 141, 51));
        infernobuy->setFont(font);
        teslabuy = new QPushButton(Shop);
        teslabuy->setObjectName("teslabuy");
        teslabuy->setGeometry(QRect(690, 720, 141, 51));
        teslabuy->setFont(font);
        xbowbuy = new QPushButton(Shop);
        xbowbuy->setObjectName("xbowbuy");
        xbowbuy->setGeometry(QRect(220, 720, 141, 51));
        xbowbuy->setFont(font);
        back = new QPushButton(Shop);
        back->setObjectName("back");
        back->setGeometry(QRect(30, 20, 111, 51));
        coinbalance = new QLineEdit(Shop);
        coinbalance->setObjectName("coinbalance");
        coinbalance->setGeometry(QRect(220, 20, 161, 51));

        retranslateUi(Shop);

        QMetaObject::connectSlotsByName(Shop);
    } // setupUi

    void retranslateUi(QDialog *Shop)
    {
        Shop->setWindowTitle(QCoreApplication::translate("Shop", "Dialog", nullptr));
        cannonbuy->setText(QCoreApplication::translate("Shop", "Buy for $500", nullptr));
        cannon->setText(QCoreApplication::translate("Shop", "TextLabel", nullptr));
        inferno->setText(QCoreApplication::translate("Shop", "TextLabel", nullptr));
        tesla->setText(QCoreApplication::translate("Shop", "TextLabel", nullptr));
        Xbow->setText(QCoreApplication::translate("Shop", "TextLabel", nullptr));
        infernobuy->setText(QCoreApplication::translate("Shop", "Buy for $750", nullptr));
        teslabuy->setText(QCoreApplication::translate("Shop", "Buy for $1500", nullptr));
        xbowbuy->setText(QCoreApplication::translate("Shop", "Buy for $1000", nullptr));
        back->setText(QCoreApplication::translate("Shop", "Back to game", nullptr));
        coinbalance->setText(QCoreApplication::translate("Shop", "Coin Balance: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Shop: public Ui_Shop {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOP_H
