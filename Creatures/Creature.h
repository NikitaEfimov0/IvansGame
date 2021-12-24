#pragma once
#include "../Board/CellEntity.h"
#include "../Logger/ObsInterf.hpp"
#include "../Logger/ObserverCons.hpp"
#include "../Logger/ObserverFile.hpp"
#include "../Logger/SaveObject.h"
#include <iostream>
#include <vector>
class Creature: public CellEntity{
protected:
    int health;
    int armor;
    int damage;
    std::vector<ObsInterf*>observers;
public:
    Creature():health(20), armor(5), damage(10){};
    void set_health(int val){
        health = val;
    }
    void set_armor(int val){
        armor = val;
    }
    void set_damage(int val) {
        damage = val;
    }
    void notify();
    int get_health(){return health;}
    int get_armor(){return armor;}
    int get_damage(){return damage;}
    void move();
};
