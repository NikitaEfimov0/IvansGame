#pragma once
#include "GameGrid.h"
class GameField{
private:
    GameGrid grid;
public:
    explicit GameField(int height, int width);
};