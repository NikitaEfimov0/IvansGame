//
// Created by Никита Ефимов on 14.12.2021.
//

#ifndef OOPLAB1_HEALTHSPHERE_HPP
#define OOPLAB1_HEALTHSPHERE_HPP
#include "Item.h"
class HealthSphere:public Item{
    int burst = 6;
public:
    void usage(Hero* hero){
        hero->set_health(hero->get_health()+burst);
    }
};
#endif //OOPLAB1_HEALTHSPHERE_HPP
