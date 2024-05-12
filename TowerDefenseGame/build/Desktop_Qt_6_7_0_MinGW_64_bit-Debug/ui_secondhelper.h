/********************************************************************************
** Form generated from reading UI file 'secondhelper.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDHELPER_H
#define UI_SECONDHELPER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_secondhelper
{
public:
    QPushButton *Back;
    QPushButton *next;
    QTextEdit *textEdit;
    QLineEdit *objective;

    void setupUi(QDialog *secondhelper)
    {
        if (secondhelper->objectName().isEmpty())
            secondhelper->setObjectName("secondhelper");
        secondhelper->resize(633, 422);
        Back = new QPushButton(secondhelper);
        Back->setObjectName("Back");
        Back->setGeometry(QRect(10, 10, 101, 51));
        QFont font;
        font.setPointSize(15);
        Back->setFont(font);
        next = new QPushButton(secondhelper);
        next->setObjectName("next");
        next->setGeometry(QRect(490, 350, 131, 61));
        next->setFont(font);
        textEdit = new QTextEdit(secondhelper);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(140, 150, 341, 141));
        objective = new QLineEdit(secondhelper);
        objective->setObjectName("objective");
        objective->setGeometry(QRect(170, 70, 261, 61));
        QFont font1;
        font1.setPointSize(25);
        objective->setFont(font1);

        retranslateUi(secondhelper);

        QMetaObject::connectSlotsByName(secondhelper);
    } // setupUi

    void retranslateUi(QDialog *secondhelper)
    {
        secondhelper->setWindowTitle(QCoreApplication::translate("secondhelper", "Dialog", nullptr));
        Back->setText(QCoreApplication::translate("secondhelper", "Back", nullptr));
        next->setText(QCoreApplication::translate("secondhelper", "Next", nullptr));
        textEdit->setHtml(QCoreApplication::translate("secondhelper", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt;\">Earn coins by destroying balloons before they reach the other side. Use these coins to add more towers.</span></p></body></html>", nullptr));
        objective->setText(QCoreApplication::translate("secondhelper", "Game Objective:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class secondhelper: public Ui_secondhelper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDHELPER_H
