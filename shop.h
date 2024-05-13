#ifndef SHOP_H
#define SHOP_H

#include <QDialog>

namespace Ui {
class Shop;
}

class Shop : public QDialog
{
    Q_OBJECT

public:
    explicit Shop(QWidget *parent = nullptr);
    ~Shop();

private slots:
    void on_back_clicked();

    void on_cannonbuy_clicked();

    void on_infernobuy_clicked();

    void on_xbowbuy_clicked();

    void on_teslabuy_clicked();

private:
    Ui::Shop *ui;
};

#endif // SHOP_H
