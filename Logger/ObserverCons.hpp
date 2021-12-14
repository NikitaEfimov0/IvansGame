//
// Created by Никита Ефимов on 14.12.2021.
//

#ifndef OOPLAB1_OBSERVERCONS_HPP
#define OOPLAB1_OBSERVERCONS_HPP
#include "ObsInterf.hpp"
class ObserverCons:public ObsInterf{
public:
    ObserverCons(CellEntity* obj){
        publisher = obj;
    }
    friend std::ostream& operator<<(const std::ostream& out, const ObserverCons& obj ){
        out<<"x: "<<obj.publisher->get_x()<<" y: "<<obj.publisher->get_y()<<std::endl;
        return out;
    }
    void update(){
        std::cout<<this;
    }
};

#endif //OOPLAB1_OBSERVERCONS_HPP
