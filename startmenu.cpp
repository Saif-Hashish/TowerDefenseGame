#include "startmenu.h"
#include "ui_startmenu.h"
#include "help.h"
#include <gamecontroller.h>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QApplication>
#include <gamecontroller.h>





StartMenu::StartMenu(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::StartMenu)
    , map(new Map()) // Instantiate Map object
    , gamecontroller(map) // Instantiate GameController object with Map
    , view(NULL)
{
    ui->setupUi(this);
    ui -> lineEdit -> setReadOnly(true);
    ui -> lineEdit_2 -> setReadOnly(true);


}

StartMenu::~StartMenu()
{
    delete ui;
    delete map; // Delete the map object
    delete view; // Delete the view object

}

void StartMenu::on_startbutton_clicked()
{
    hide();

    view = new QGraphicsView();
    view->setScene(map);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->show();
    view->setFixedSize(1400, 700);
    //view->setAttribute(Qt::WA_AcceptTouchEvents, false);
    view->viewport()->setAttribute(Qt::WidgetAttribute::WA_AcceptTouchEvents, false);

}


void StartMenu::on_helpbutton_clicked()
{
    hide();
    help *helpwindow = new help(this);
    helpwindow -> show();
}




