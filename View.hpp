//
// Created by Никита Ефимов on 14.12.2021.
//

#ifndef OOPLAB1_VIEW_HPP
#define OOPLAB1_VIEW_HPP
#include "Board/GameGrid.h"
#include <iostream>
class View{
    int w, h;
    Cell** array;
public:
    View(int x, int y, Cell** arr){
     w = x;
     h= y;
     array = arr;
    }

    void Draw(){
        for(int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++){
                if(array[i][j].GetType() == 0)
                    std::cout<<" X ";
                if(array[i][j].GetType() == 1)
                    std::cout<<"   ";
                if(array[i][j].GetType() == 2)
                    std::cout<<"{ }";
                if(array[i][j].GetType() == 3)
                    std::cout <<"|_|";
            }
            std::cout<<std::endl;
        }
    }
};
#endif //OOPLAB1_VIEW_HPP
