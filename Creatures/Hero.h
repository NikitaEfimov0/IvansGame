#pragma once
#include "Creature.h"
#include "../KeyController.h"
class Hero: public Creature{
    KeyController<119, 115, 97, 100> k;
public:
    Hero();
    Hero(int x, int y);
    void move();
};
