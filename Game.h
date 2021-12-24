//
// Created by Никита Ефимов on 24.12.2021.
//

#ifndef OOPLAB1_GAME_H
#define OOPLAB1_GAME_H
#include "Rules/Rule.h"
#include "Creatures/Creature.h"
#include "MedInterface.hpp"
template <class R>
class Game{
    R r;
    MedInterface* med;
public:
    void setMed(MedInterface* mediator){
        med = mediator;
    }
    void checkRule(Creature* h){
        if(!r.returnAlife())
            r.setCurrHealth(h->get_health());
        else
            med->notify(false);
    }
    void start(Creature* h){h->set_health(r.returnTempHealth());}
};
#endif //OOPLAB1_GAME_H
