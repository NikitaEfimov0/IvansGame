#pragma once
#include "PassableCell.h"
class FinishCell: public PassableCell{
public:
    explicit FinishCell(int x=-1, int y=-1);
};