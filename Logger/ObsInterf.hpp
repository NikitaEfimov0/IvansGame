//
// Created by Никита Ефимов on 14.12.2021.
//

#ifndef OOPLAB1_OBSINTERF_HPP
#define OOPLAB1_OBSINTERF_HPP
#include "../Board/CellEntity.h"
#include <iostream>
#include <fstream>
class ObsInterf{
protected:
    CellEntity* publisher;
public:
    virtual void update() = 0;

};
#endif //OOPLAB1_OBSINTERF_HPP
