//
// Created by Никита Ефимов on 14.12.2021.
//

#ifndef OOPLAB1_ARMORSPHERE_HPP
#define OOPLAB1_ARMORSPHERE_HPP
#include "Item.h"
class ArmorSphere:public Item{
    int burst = 3;
public:
    void usage(Hero* hero){
        hero->set_armor(hero->get_armor()+burst);
    }
};
#endif //OOPLAB1_ARMORSPHERE_HPP
