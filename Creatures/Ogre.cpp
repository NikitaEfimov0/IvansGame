#include "Ogre.h"
Ogre::Ogre(){
    x = 0;
    y = 0;
    health = 40;
    armor = 3;
    damage = 10;
    direction = "right";
}

Ogre::Ogre(int i, int j){
    x = i;
    y = j;
    health = 40;
    armor = 3;
    damage = 10;
    direction = "right";
}

void Ogre::fight(Hero* hero){
    health -= std::max(hero->get_damage() - armor, 0);
    hero->set_health(hero->get_health() - std::max(damage - hero->get_armor(), 0));
}

void Ogre::enemy_move(int key) {
    if(key == 1){
        if(direction == "right"){
            x += 1;
        }
        if(direction == "left"){
            x -= 1;
        }
    }
    else {
        if (direction == "right") {
            direction = "left";
        }
        if (direction == "left") {
            direction = "right";
        }
    }
}