#include "help.h"
#include "ui_help.h"
#include "startmenu.h"
#include "secondhelper.h"

help::help(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::help)
{
    ui->setupUi(this);
    ui -> objective -> setReadOnly(true);
    ui -> textEdit -> setReadOnly(true);
}

help::~help()
{
    delete ui;
}

void help::on_backbutton_clicked()
{
    hide();
    StartMenu *startwindow = new StartMenu(this);
    startwindow -> show();
}


void help::on_Nextbutton_clicked()
{
    hide();
    secondhelper *helpwindow = new secondhelper(this);
    helpwindow-> show();
}

