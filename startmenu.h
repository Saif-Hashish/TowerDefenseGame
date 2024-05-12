#ifndef STARTMENU_H
#define STARTMENU_H

#include <QDialog>
#include "map.h"
#include "gamecontroller.h"


namespace Ui {
class StartMenu;
}

class StartMenu : public QDialog
{
    Q_OBJECT

public:
    explicit StartMenu(QWidget *parent = nullptr);
    ~StartMenu();

private slots:
    void on_startbutton_clicked();

    void on_helpbutton_clicked();




private:
    Ui::StartMenu *ui;

    Map* map;

    GameController gamecontroller;

    QGraphicsView* view ;

};

#endif // STARTMENU_H
