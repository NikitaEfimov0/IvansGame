#pragma once
#include "Enemy.h"
#include "Hero.h"
#include "cmath"
/// имеет приличный урон, мало брони, много здоровья ///
/// способности: обычный крепкий крип, ходит по горизонтали ///
/// тиму не мутит и hand of midas не собирает, но помощи от него не жди ///
class Ogre: public Enemy{
public:
    Ogre();
    Ogre(int x, int y);
    void fight(Hero* hero) override;
    void enemy_move(int key) override;
};
