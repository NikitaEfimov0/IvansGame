//
// Created by Никита Ефимов on 14.12.2021.
//
#include <iostream>
#include "Board/GameGrid.h"
#ifndef OOPLAB1_MEDIATOR_HPP
#define OOPLAB1_MEDIATOR_HPP
#include "View.hpp"
#include "MedInterface.hpp"
#include "Rules/RuleI.h"
#include "Game.h"
class Mediator:public MedInterface{
    GameGrid* gameField;
    View* view;
    Game<RuleI<100>> game;
public:
    Mediator(){
        game.setMed(this);
        gameField = new GameGrid(20, 16);
        view = new View(gameField->GetWidth(), gameField->GetHeight(), gameField->returnArray());
    };
    void notify(){
        try {
            view->Draw();
        }catch (...){
            std::cout<<"Some error, please restart the game";
        }
    }
    void notify(bool t){
        throw std::runtime_error("Hero died!");
    }
};
#endif //OOPLAB1_MEDIATOR_HPP
