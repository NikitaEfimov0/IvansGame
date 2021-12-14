cmake_minimum_required(VERSION 3.19.2)
project(OOPLAB1)

set(CMAKE_CXX_STANDARD 20)

add_executable(OOPLAB1 main.cpp Board/Cell.h Board/Cell.cpp Board/GameGrid.cpp Board/CellEntity.h Board/CellEntity.cpp Board/FinishCell.h Board/FinishCell.cpp Board/StartCell.h Board/StartCell.cpp Board/GameField.h Board/GameField.cpp Board/GameGrid.h Board/GameGrid.cpp Board/PassableCell.h Board/PassableCell.cpp Board/UnpassableCell.h Board/UnpassableCell.cpp Creatures/Creature.h Creatures/Hero.h Creatures/Hero.cpp Creatures/Enemy.h Creatures/Enemy.cpp Creatures/Assassin.h Creatures/Assassin.cpp Creatures/Ogre.h Creatures/Ogre.cpp Creatures/Treant.h Creatures/Treant.cpp Items/Item.h Items/DamageSphere.h Logger/ObsInterf.hpp Logger/ObserverCons.hpp Logger/ObserverFile.hpp)
