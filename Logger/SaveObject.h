//
// Created by Никита Ефимов on 24.12.2021.
//

#ifndef OOPLAB1_SAVEOBJECT_H
#define OOPLAB1_SAVEOBJECT_H
#include "../Creatures/Creature.h"
#include "ObsInterf.hpp"
#include "nlohmann/json.hpp"
#include <fstream>
#include <iostream>
using json = nlohmann::json;
class SaveObject:public ObsInterf{
protected:
    json s;
    json l;
    json tmp;
    std::ifstream LoadFromfile;
    std::ofstream SaveToFile;
public:
    SaveObject(CellEntity* obj){
        publisher = obj;
    }
    SaveObject(){
    }
    bool is_empty(std::ifstream& pFile)
    {
        return pFile.peek() == std::ifstream::traits_type::eof();
    }
    //void update(){std::cout<<2;};
    virtual void load(){};
    virtual json tmpLoad(){return nullptr;}
};
#endif //OOPLAB1_SAVEOBJECT_H
