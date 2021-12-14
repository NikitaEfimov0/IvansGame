#pragma once
#include "Creature.h"
#include "Hero.h"
#include <string>
class Enemy: public Creature{
protected:
    std::string direction;
public:
    Enemy();
    Enemy(int x, int y);
    void set_direction(std::string val){
        direction = val;
    }
    std::string get_direction(){return direction;}
    virtual void fight(Hero* hero) = 0;
    virtual void enemy_move(int key) = 0;
};
