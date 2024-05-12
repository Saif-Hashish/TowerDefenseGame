/********************************************************************************
** Form generated from reading UI file 'thirdhelp.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THIRDHELP_H
#define UI_THIRDHELP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_thirdhelp
{
public:
    QPushButton *backbutton;
    QPushButton *proceed;
    QTextEdit *textEdit;
    QLineEdit *objective;

    void setupUi(QDialog *thirdhelp)
    {
        if (thirdhelp->objectName().isEmpty())
            thirdhelp->setObjectName("thirdhelp");
        thirdhelp->resize(662, 492);
        backbutton = new QPushButton(thirdhelp);
        backbutton->setObjectName("backbutton");
        backbutton->setGeometry(QRect(10, 10, 101, 41));
        QFont font;
        font.setPointSize(15);
        backbutton->setFont(font);
        proceed = new QPushButton(thirdhelp);
        proceed->setObjectName("proceed");
        proceed->setGeometry(QRect(440, 420, 191, 51));
        proceed->setFont(font);
        textEdit = new QTextEdit(thirdhelp);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(170, 180, 321, 181));
        objective = new QLineEdit(thirdhelp);
        objective->setObjectName("objective");
        objective->setGeometry(QRect(190, 60, 261, 61));
        QFont font1;
        font1.setPointSize(25);
        objective->setFont(font1);

        retranslateUi(thirdhelp);

        QMetaObject::connectSlotsByName(thirdhelp);
    } // setupUi

    void retranslateUi(QDialog *thirdhelp)
    {
        thirdhelp->setWindowTitle(QCoreApplication::translate("thirdhelp", "Dialog", nullptr));
        backbutton->setText(QCoreApplication::translate("thirdhelp", "Back", nullptr));
        proceed->setText(QCoreApplication::translate("thirdhelp", "Proceed to game", nullptr));
        textEdit->setHtml(QCoreApplication::translate("thirdhelp", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt;\">Becareful you only have 100 health. Each balloon that makes it out the other side takes 10 health points away.</span></p></body></html>", nullptr));
        objective->setText(QCoreApplication::translate("thirdhelp", "Game Objective:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class thirdhelp: public Ui_thirdhelp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THIRDHELP_H
