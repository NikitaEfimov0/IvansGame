#pragma once
#include "../Board/CellEntity.h"
#include "../Creatures/Hero.h"
class Item: public CellEntity{
public:
    virtual void usage(Hero* hero) = 0;
};
