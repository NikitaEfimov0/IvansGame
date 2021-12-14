#include <iostream>
#include "Board/GameField.h"
#include "Mediator.hpp"

int main() {
    Mediator* med;
    med = new Mediator();
    med->notify();
    return 0;
}
