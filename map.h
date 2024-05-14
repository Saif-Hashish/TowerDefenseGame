#ifndef MAP_H
#define MAP_H
#include <QGraphicsScene>
#include <QObject>
#include <vector>
#include <QLabel>
#include <QPushButton>

class Map : public QGraphicsScene
{
    Q_OBJECT
private:
    int width = 1400;
    int height = 700;
    double enemySpeed = 2.5;
    int health;

    int Level;

    QPushButton *shopbutton;

    QLabel* lblHealth;
    QLabel* lblLevel;
    QLabel* lblCoins;

    void createPath(int level);
    void createTiles();

    void getPath(double& targetCoordinate, double& currentIndexX, double& currentIndexY,  bool isOnXAxis);
    void getPath(double& targetCoordinate, double& currentIndexX, double& currentIndexY,  bool v2, bool isOnXAxis);
    void findPath(double& enemySpeed, double& targetCoordinate, double &indexX, double &indexY, bool isOnXAxis);

public:
    Map();
    void startScene();

    void setHealthLabelText(int num);
    void setLevelLabelText(int num);
    void setCoinsLabelText(int num);

    int Coins;

    int getcoinbalance();

    void setEnemySpeed(double numPixelsPerMove);

    std::vector<QPoint*> path;
    std::vector<QPoint*> path2;
    std::vector<QGraphicsRectItem*> tiles;
};

#endif // MAP_H
