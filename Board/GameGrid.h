#pragma once
#include "StartCell.h"
#include "FinishCell.h"
#include "UnpassableCell.h"
class GameGrid{
private:
    StartCell start;
    FinishCell finish;
    int height;
    int width;
    Cell** grid;
public:
    explicit GameGrid(int height, int width);
    GameGrid();
    GameGrid(const GameGrid& gr);
    GameGrid& operator=(const GameGrid& gr);
    GameGrid(GameGrid &&gr);
    GameGrid& operator=(GameGrid &&gr);
    int GetWidth();
    int GetHeight();
    Cell** returnArray(){return grid;}
    ~GameGrid();
};