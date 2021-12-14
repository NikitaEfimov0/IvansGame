//
// Created by Никита Ефимов on 14.12.2021.
//

#ifndef OOPLAB1_OBSERVERFILE_HPP
#define OOPLAB1_OBSERVERFILE_HPP
#include "ObsInterf.hpp"
class ObserverFile:public ObsInterf{
    std::ofstream LogToFile;
public:
    ObserverFile(CellEntity* obj){
        publisher  = obj;
    }

    friend std::fstream& operator<<(const std::ofstream& out, const ObserverFile& obj){
        out<<"x: "<<obj.publisher->get_x()<<" ";
        out<<"y: "<<obj.publisher->get_y()<<" ";
        out<<std::endl;
        return out;
    }

    void update(){
        LogToFile<<this;
    }
};
#endif //OOPLAB1_OBSERVERFILE_HPP
