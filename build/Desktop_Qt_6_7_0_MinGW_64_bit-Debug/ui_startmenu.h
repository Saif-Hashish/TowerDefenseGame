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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_StartMenu
{
public:
    QPushButton *startbutton;
    QPushButton *helpbutton;
    QLabel *label;

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
        label = new QLabel(StartMenu);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 50, 211, 81));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Harlow Solid Italic")});
        font1.setPointSize(22);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(StartMenu);

        QMetaObject::connectSlotsByName(StartMenu);
    } // setupUi

    void retranslateUi(QDialog *StartMenu)
    {
        StartMenu->setWindowTitle(QCoreApplication::translate("StartMenu", "Dialog", nullptr));
        startbutton->setText(QCoreApplication::translate("StartMenu", "Start Game", nullptr));
        helpbutton->setText(QCoreApplication::translate("StartMenu", "Help", nullptr));
        label->setText(QCoreApplication::translate("StartMenu", "Tower Defense", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StartMenu: public Ui_StartMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTMENU_H
