#include "Cell.h"

Cell::Cell(int x, int y){
    this->x = x;
    this->y = y;
}
int Cell::GetX() const{
    return this->x;
}
int Cell::GetY() const {
    return this->y;
}
int Cell::GetType() const {
    return this->type;
}
