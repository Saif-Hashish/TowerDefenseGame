#include "gamecontroller.h"
#include <QMouseEvent>
#include <iostream>

GameController::GameController(Map* map)
    : QObject(),
    currentWaveIndex(0),
    totalWaves(2),
    numEnemiesPerWave(10),
    waveInterval(5000),
    waveDuration(10000),
    playerHealth(100) // Initialize playerHealth with an initial value
{
    this->map = map;

    waveTimer = new QTimer(this);
    connect(waveTimer, &QTimer::timeout, this, &GameController::startWaves);
    waveTimer->start(waveInterval);

    connect(this, &GameController::playerLost, this, &GameController::handlePlayerLost);

    QTimer* checkIfAddTowerTimer = new QTimer(this);
    connect(checkIfAddTowerTimer, &QTimer::timeout, this, &GameController::handleTileSelected);
    checkIfAddTowerTimer->start(10);
}

void GameController::setTotalWaves(int totalWaves)
{
    this->totalWaves = totalWaves;
}

void GameController::spawnWave()
{
    if (currentWaveIndex >= totalWaves) {
        waveTimer->stop();
        return;
    }

    for (int i = 0; i < numEnemiesPerWave; i++) {
        QTimer::singleShot(i * (waveDuration / numEnemiesPerWave), this, &GameController::spawnEnemy);
    }

    currentWaveIndex++;
}

void GameController::startWaves()
{
    spawnWave();
    waveTimer->start(waveInterval + waveDuration);
}

void GameController::spawnEnemy()
{
    Enemy *enemy = new Enemy(map);
    enemies.append(enemy);

    connect(enemy, &Enemy::enemyDestroyed, this, &GameController::handleEnemyDestroyed);
    connect(enemy, &Enemy::enemyDissapeared, this, &GameController::handleEnemyDissapeared);

    for(int i =0 ; i< towers.size(); i++){
        towers[i]->setEnemies(enemies);
    }
}

void GameController::handleEnemyDestroyed(Enemy* destroyedEnemy) {
    if (destroyedEnemy) {
        enemies.removeOne(destroyedEnemy);

        for(int i =0 ; i< towers.size(); i++){
            towers[i]->setEnemies(enemies);
        }

        for(int i = 0; i < towers.size(); i++){
            for(int j = 0; j < towers[i]->bullets.size(); j++){
                Bullet* b = towers[i]->bullets[j];
                if(b->getEnemy() == destroyedEnemy){
                    if(towers[i]->scene() == b->scene()){
                        towers[i]->bullets.removeOne(b);
                        delete b;
                    }
                }
            }
        }
        delete destroyedEnemy;
    }
}

void GameController::handleEnemyDissapeared(Enemy* enemy){
    enemies.removeOne(enemy);
    for(int i =0 ; i< towers.size(); i++){
        towers[i]->setEnemies(enemies);
    }
    playerHealth -= enemy->getHealth();
    if(playerHealth <= 0){
        emit playerLost();
    }
    delete enemy;
}

void GameController::handlePlayerLost(){
    std::cout << "player lost... " << std::endl;
}

void GameController::handleTileSelected(){
    for(QGraphicsRectItem* tile: map->tiles){
        if(tile->isSelected()){
            CannonTower* newCannon = new CannonTower(map, tile->x(),tile->y());
            towers.append(newCannon);
            tile->setFlag(QGraphicsItem::ItemIsSelectable, false);
        }
    }
}
