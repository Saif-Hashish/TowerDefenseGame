#include "map.h"
#include <QtWidgets/QGraphicsScene>
#include <QMouseEvent>
#include <QGraphicsRectItem>
#include <QGraphicsProxyWidget>
#include <QFont>
#include <QObject>
#include <shop.h>


//Initialize the map
Map::Map() {
    QGraphicsScene();
    startScene();
}

//Function that starts the scene with all its attribtues
void Map::startScene(){

    //Set a constant scene rectangle to avoid having the scene moving
    this->setSceneRect(0,0,width,height);

    //Initialize the path
    createPath(1, 2.5);

    //Create a background Image
    QPixmap backgroundImage(":/OtherImages/map.png");
    backgroundImage.scaled(this->width, this->height, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    this->setBackgroundBrush(backgroundImage);


    // initialize shop button
    shopbutton = new QPushButton("Shop");


    // add it to the scene
    QGraphicsProxyWidget *shoppushbutton = this->addWidget(shopbutton);

    QFont font("Arial", 20);

    QObject ::connect(shopbutton, &QPushButton::clicked, [=](){

        Shop *shop = new Shop();
        shop->show();

    });

    shoppushbutton->setFont(font);

    // place button in correct position
    shoppushbutton->setGeometry(QRectF(1200,100,200,100));

    //make labels for health, coins and Level
    lblHealth = new QLabel();
    lblScore = new QLabel();
    lblLevel = new QLabel();

    QGraphicsProxyWidget *healthlabel = this->addWidget(lblHealth);
    QGraphicsProxyWidget *coinslabel = this->addWidget(lblScore);
    QGraphicsProxyWidget *levellabel = this->addWidget(lblLevel);

    healthlabel->setFont(font);
    coinslabel->setFont(font);
    levellabel->setFont(font);

    // place labels in correct position
    levellabel->setGeometry(QRectF(700,50,20,10));
    healthlabel->setGeometry(QRectF(5,0,20,10));
    coinslabel->setGeometry(QRectF(5,50,20,10));


    // initialize labels with correct values
    setHealthLabelText("0");
    setLevelLabelText("1");
    setCoinsLabelText("0");

    createTiles();
}

void Map::createTiles(){

    QGraphicsRectItem* rectItem; //rect item to initialize the tiles

    QBrush myBrush(Qt::transparent); //Set all tiles to be transparent
    QBrush pathBrush(QPixmap(":/OtherImages/Sand.png").scaled(60,100)); //Set only the path tiles to have a sand background

    //Create 100x100 tiles
    for(int i = 0; i < width; i+=100){
        for(int j = 0; j < height; j+=100){

            rectItem = new QGraphicsRectItem(0,0,100,100); //create a new tile

            //fix its position
            rectItem->setX(i);
            rectItem->setY(j);

            //set its brush to transparent and visible
            rectItem->setBrush(myBrush);
            rectItem->setVisible(true);

            //Make it selectable to be able to add towers
            rectItem->setFlag(QGraphicsItem::ItemIsSelectable, true);

            tiles.push_back(rectItem); //Add the tile to the tile list
            this->addItem(rectItem); //Add the tile to the map

            for(size_t k = 0; k< path.size(); k++){

                //check if the tile is on the path, if yes...
                if(((i - path[k]->x()) > -100 && (i - path[k]->x()) < 100) && ((j - path[k]->y()) > -100 && (j - path[k]->y()) <100)){
                    //.. make it impossible to put a tower on it and make its background sandy
                    rectItem->setFlag(QGraphicsItem::ItemIsSelectable, false);
                    rectItem->setBrush(pathBrush);
                    break;
                }
            }
        }
    }
}

//Creates a path of tiles on which the enemies will move
void Map::createPath(int level, double enemySpeed){

    //Create the path for level 1
    if(level == 1){

        //The shift points, the enemy will keep moving until it reaches them, then shifts
        double shift1Y = 500;
        double shift1X = 700;
        double shift2Y = 300;
        double shift2X = 400;
        double endpoint = -100; //adjusted to the height of the enemy (100 pixels)

        double indexX = this->width/2;
        double indexY = this->height;

        QPoint* currentPoint;
        while(indexY > shift1Y){
            currentPoint = new QPoint();
            currentPoint->setX(indexX);
            currentPoint->setY(indexY);
            path.push_back(currentPoint);
            indexY-=enemySpeed;
        }
        while(indexX < shift1X){
            currentPoint = new QPoint();
            currentPoint->setX(indexX);
            currentPoint->setY(indexY);
            path.push_back(currentPoint);
            indexX+=enemySpeed;
        }
        while(indexY > shift2Y){
            currentPoint = new QPoint();
            currentPoint->setX(indexX);
            currentPoint->setY(indexY);
            path.push_back(currentPoint);
            indexY-=enemySpeed;
        }
        while(indexX > shift2X){
            currentPoint = new QPoint();
            currentPoint->setX(indexX);
            currentPoint->setY(indexY);
            path.push_back(currentPoint);
            indexX-=enemySpeed;
        }
        while(indexY >= endpoint){
            currentPoint = new QPoint();
            currentPoint->setX(indexX);
            currentPoint->setY(indexY);
            path.push_back(currentPoint);
            indexY-=enemySpeed;
        }

    }
}

void Map::setHealthLabelText(QString text){
    lblHealth->setText("Health: " + text);
}
void Map::setLevelLabelText(QString text){
    lblLevel->setText("Level: " + text);
}
void Map::setCoinsLabelText(QString text){
    lblScore->setText("Coin Balance: " + text);
}

void Map::setEnemySpeed(double numPixelsPerMove){
    enemySpeed = numPixelsPerMove;
}

