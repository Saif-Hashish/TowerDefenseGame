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
    int level;
    double enemySpeed = 2.5;

    void createPath(int level, double enemySpeed);
    void createTiles();

    QPushButton *shopbutton;

    QLabel* lblHealth;
    QLabel* lblLevel;
    QLabel* lblScore;
public:
    Map();
    void startScene();

    void setHealthLabelText(QString text);
    void setLevelLabelText(QString text);
    void setCoinsLabelText(QString text);

    void setEnemySpeed(double numPixelsPerMove);

    std::vector<QPoint*> path;
    std::vector<QGraphicsRectItem*> tiles;
};

#endif // MAP_H
