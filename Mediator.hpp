//
// Created by Никита Ефимов on 14.12.2021.
//
#include <iostream>
#include "Board/GameGrid.h"
#ifndef OOPLAB1_MEDIATOR_HPP
#define OOPLAB1_MEDIATOR_HPP
#include "View.hpp"
#include "MedInterface.hpp"
class Mediator:public MedInterface{
    GameGrid* game;
    View* view;
public:
    Mediator(){
        game = new GameGrid(20, 16);
        view = new View(game->GetWidth(), game->GetHeight(), game->returnArray());
    };
    void notify(){
        view->Draw();
    }
};
#endif //OOPLAB1_MEDIATOR_HPP
