/********************************************************************************
** Form generated from reading UI file 'startmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTMENU_H
#define UI_STARTMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_StartMenu
{
public:
    QPushButton *startbutton;
    QPushButton *helpbutton;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;

    void setupUi(QDialog *StartMenu)
    {
        if (StartMenu->objectName().isEmpty())
            StartMenu->setObjectName("StartMenu");
        StartMenu->resize(489, 376);
        QFont font;
        font.setPointSize(15);
        StartMenu->setFont(font);
        startbutton = new QPushButton(StartMenu);
        startbutton->setObjectName("startbutton");
        startbutton->setGeometry(QRect(160, 190, 161, 51));
        helpbutton = new QPushButton(StartMenu);
        helpbutton->setObjectName("helpbutton");
        helpbutton->setGeometry(QRect(160, 280, 161, 51));
        lineEdit = new QLineEdit(StartMenu);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(160, 10, 161, 61));
        QFont font1;
        font1.setPointSize(40);
        lineEdit->setFont(font1);
        lineEdit_2 = new QLineEdit(StartMenu);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(140, 90, 211, 61));
        lineEdit_2->setFont(font1);

        retranslateUi(StartMenu);

        QMetaObject::connectSlotsByName(StartMenu);
    } // setupUi

    void retranslateUi(QDialog *StartMenu)
    {
        StartMenu->setWindowTitle(QCoreApplication::translate("StartMenu", "Dialog", nullptr));
        startbutton->setText(QCoreApplication::translate("StartMenu", "Start Game", nullptr));
        helpbutton->setText(QCoreApplication::translate("StartMenu", "Help", nullptr));
        lineEdit->setText(QCoreApplication::translate("StartMenu", "Tower ", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("StartMenu", "Defense", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StartMenu: public Ui_StartMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTMENU_H
