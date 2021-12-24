//
// Created by Никита Ефимов on 24.12.2021.
//

#ifndef OOPLAB1_RULEI_H
#define OOPLAB1_RULEI_H
#include "Rule.h"
template <int health>
class RuleI:Rule{
    int currentHealth;
public:
    void setCurrHealth(int i) {
        currentHealth = i;
        if(currentHealth<health)
            die();
    }
    int returnTempHealth(){return health;}
    void die(){died = !died;}
    bool returnAlife(){return died;}
};
#endif //OOPLAB1_RULEI_H
