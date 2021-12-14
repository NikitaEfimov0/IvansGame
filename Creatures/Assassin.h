#pragma once
#include "Enemy.h"
#include "Hero.h"
#include "cmath"
/// наносит урон игнорируя защиту, сам брони не имеет, очень мало здоровья///
/// способности: увеличивает урон после каждой атаки, ходит по вертикали ///
/// миссов нет, но шотнуть с кортика может, больше походит на камикадзе, чем на убийцу, постарайся убить его сразу ///
class Assassin: public Enemy{
public:
    Assassin();
    Assassin(int x, int y);
    void fight(Hero* hero) override;
    void enemy_move(int key) override;
};
