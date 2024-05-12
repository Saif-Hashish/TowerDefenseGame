/********************************************************************************
** Form generated from reading UI file 'help.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELP_H
#define UI_HELP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_help
{
public:
    QPushButton *backbutton;
    QPushButton *Nextbutton;
    QLineEdit *objective;
    QTextEdit *textEdit;

    void setupUi(QDialog *help)
    {
        if (help->objectName().isEmpty())
            help->setObjectName("help");
        help->resize(641, 463);
        backbutton = new QPushButton(help);
        backbutton->setObjectName("backbutton");
        backbutton->setGeometry(QRect(10, 10, 91, 51));
        QFont font;
        font.setPointSize(15);
        backbutton->setFont(font);
        Nextbutton = new QPushButton(help);
        Nextbutton->setObjectName("Nextbutton");
        Nextbutton->setGeometry(QRect(490, 380, 121, 61));
        Nextbutton->setFont(font);
        objective = new QLineEdit(help);
        objective->setObjectName("objective");
        objective->setGeometry(QRect(170, 70, 261, 61));
        QFont font1;
        font1.setPointSize(25);
        objective->setFont(font1);
        textEdit = new QTextEdit(help);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(120, 170, 381, 151));
        textEdit->setFont(font);

        retranslateUi(help);

        QMetaObject::connectSlotsByName(help);
    } // setupUi

    void retranslateUi(QDialog *help)
    {
        help->setWindowTitle(QCoreApplication::translate("help", "Dialog", nullptr));
        backbutton->setText(QCoreApplication::translate("help", "Back", nullptr));
        Nextbutton->setText(QCoreApplication::translate("help", "Next", nullptr));
        objective->setText(QCoreApplication::translate("help", "Game Objective:", nullptr));
        textEdit->setHtml(QCoreApplication::translate("help", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:15pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">The game starts by balloons spawning at the start of the map, you need to stop the ballon from reaching the other side by constructing towers.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt;\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class help: public Ui_help {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELP_H
