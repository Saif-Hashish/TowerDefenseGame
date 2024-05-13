#include "shop.h"
#include "ui_shop.h"
#include "QPixmap"

Shop::Shop(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Shop)
{
    ui->setupUi(this);

    //set pictures for every tower
    QPixmap cannonT(":/TowerImages/Cannon1.png");
    QPixmap infernoT(":/TowerImages/inferno1.png");
    QPixmap teslaT(":/TowerImages/Tesla1.png");
    QPixmap XbowT(":/TowerImages/Xbow1.png");

    //get width and height of picture
    int w = ui->cannon->width();
    int h = ui->cannon->height();

    // assign the picture to their slots

    ui->cannon->setPixmap(cannonT.scaled(w,h,Qt::KeepAspectRatio));
    ui->inferno->setPixmap(infernoT.scaled(w,h,Qt::KeepAspectRatio));
    ui->tesla->setPixmap(teslaT.scaled(w,h,Qt::KeepAspectRatio));
    ui->Xbow->setPixmap(XbowT.scaled(w,h,Qt::KeepAspectRatio));



}

Shop::~Shop()
{
    delete ui;
}

void Shop::on_back_clicked()
{
    hide();
}


void Shop::on_cannonbuy_clicked()
{

}


void Shop::on_infernobuy_clicked()
{

}


void Shop::on_xbowbuy_clicked()
{

}


void Shop::on_teslabuy_clicked()
{

}

