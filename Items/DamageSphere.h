#pragma once
#include "Item.h"
class DamageSphere: public Item{
    int burst = 5;
public:
    void usage(Hero* hero) override{
        hero->set_damage(hero->get_damage()+burst);
    }
};

