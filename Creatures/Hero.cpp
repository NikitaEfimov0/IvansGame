#include "Hero.h"
Hero::Hero(){
    x = 0;
    y = 0;
    health = 80;
    armor = 8;
    damage = 15;
    observers.push_back(new ObserverCons(this));
    observers.push_back(new ObserverFile(this));
}

Hero::Hero(int i, int j){
    x = i;
    y = j;
    health = 80;
    armor = 8;
    damage = 15;
    observers.push_back(new ObserverCons(this));
    observers.push_back(new ObserverFile(this));
}