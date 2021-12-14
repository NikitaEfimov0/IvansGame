#include "Assassin.h"
Assassin::Assassin(){
    x = 0;
    y = 0;
    health = 10;
    armor = 0;
    damage = 20;
    direction = "up";
}

Assassin::Assassin(int i, int j){
    x = i;
    y = j;
    health = 10;
    armor = 0;
    damage = 20;
    direction = "up";
}

void Assassin::fight(Hero* hero){
    health -= std::max(hero->get_damage() - armor, 0);
    hero->set_health(hero->get_health() - damage);
    damage += 5;
}

void Assassin::enemy_move(int key) {
    if(key == 1){
        if(direction == "up"){
            y += 1;
        }
        if(direction == "down"){
            y -= 1;
        }
    }
    else {
        if (direction == "up") {
            direction = "down";
        }
        if (direction == "down") {
            direction = "up";
        }
    }
}
