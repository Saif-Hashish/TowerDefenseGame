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
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Shop
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *Shop)
    {
        if (Shop->objectName().isEmpty())
            Shop->setObjectName("Shop");
        Shop->resize(947, 583);
        pushButton = new QPushButton(Shop);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(90, 230, 121, 51));
        QFont font;
        font.setPointSize(15);
        pushButton->setFont(font);
        label = new QLabel(Shop);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 20, 261, 191));
        label_2 = new QLabel(Shop);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(330, 20, 261, 191));
        label_3 = new QLabel(Shop);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(620, 20, 261, 191));
        label_4 = new QLabel(Shop);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 290, 261, 191));
        pushButton_2 = new QPushButton(Shop);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(400, 230, 121, 51));
        pushButton_2->setFont(font);
        pushButton_3 = new QPushButton(Shop);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(690, 230, 121, 51));
        pushButton_3->setFont(font);
        pushButton_4 = new QPushButton(Shop);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(90, 510, 121, 51));
        pushButton_4->setFont(font);

        retranslateUi(Shop);

        QMetaObject::connectSlotsByName(Shop);
    } // setupUi

    void retranslateUi(QDialog *Shop)
    {
        Shop->setWindowTitle(QCoreApplication::translate("Shop", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Shop", "Buy", nullptr));
        label->setText(QCoreApplication::translate("Shop", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("Shop", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("Shop", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("Shop", "TextLabel", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Shop", "Buy", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Shop", "Buy", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Shop", "Buy", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Shop: public Ui_Shop {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOP_H
