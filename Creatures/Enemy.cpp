#include "Enemy.h"
Enemy::Enemy(){
    x = 0;
    y = 0;
    health = 40;
    armor = 8;
    damage = 15;
    direction = "up";
}

Enemy::Enemy(int i, int j){
    direction = "up";
    x = i;
    y = j;
    health = 40;
    armor = 8;
    damage = 15;
}
