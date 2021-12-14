#pragma once
#include "Cell.h"
class UnpassableCell: public Cell{
public:
    explicit UnpassableCell(int x=-1, int y=-1);
};