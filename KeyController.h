//
// Created by Никита Ефимов on 24.12.2021.
//

#ifndef OOPLAB1_KEYCONTROLLER_H
#define OOPLAB1_KEYCONTROLLER_H
#include <iostream>
template <int F, int B, int L, int R>
class KeyController{
public:
    bool returnRight(){
        int tmp;
        std::cin>>tmp;
        if(tmp == R)
            return true;
        return false;
    }
    bool returnLeft(){
        int tmp;
        std::cin>>tmp;
        if(tmp == L)
            return true;
        return false;
    }
    bool returnForward(){
        int tmp;
        std::cin>>tmp;
        if(tmp == F)
            return true;
        return false;
    }
    bool returnBackward(){
        int tmp;
        std::cin>>tmp;
        if(tmp == B)
            return true;
        return false;
    }
};
#endif //OOPLAB1_KEYCONTROLLER_H
