#include "Treant.h"
Treant::Treant(){
    x = 0;
    y = 0;
    health = 60;
    armor = 10;
    damage = 0;
}

Treant::Treant(int i, int j){
    x = i;
    y = j;
    health = 60;
    armor = 8;
    damage = 0;
}

void Treant::fight(Hero* hero){
    health -= std::max(hero->get_damage() - armor, 0);
    health += 2;
    hero->set_health(hero->get_health() - 2);
}

void Treant::enemy_move(int key) {
    if(key == 1){
        if(direction == "up") {
            y += 1;
            direction = "right";
        }
        if(direction == "right"){
            x += 1;
            direction = "down";
        }
        if(direction == "down"){
            y -= 1;
            direction = "left";
        }
        if(direction == "left"){
            x -= 1;
            direction = "up";
        }
    }
    else {
        if(direction == "up") {
            direction = "right";
        }
        if(direction == "right"){
            direction = "down";
        }
        if(direction == "down"){
            direction = "left";
        }
        if(direction == "left"){
            direction = "up";
        }
    }
}
