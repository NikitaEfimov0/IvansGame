#pragma once
#include "CellEntity.h"
class Cell {
protected:
    CellEntity entity;

    int x;
    int y;
protected:
    int type;
public:
    explicit Cell(int x=-1, int y=-1);
    int GetX() const;
    int GetY() const;
    int GetType() const;
};