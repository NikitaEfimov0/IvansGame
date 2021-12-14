#include "GameGrid.h"
#include <cstdlib>
GameGrid::GameGrid(int height, int width){
    this->height = height;
    this->width = width;
    this->grid = new Cell*[this->height];
    int x_start = std::rand()%(this->width/4) + 1;
    int y_start = std::rand()%(this->height/4) + 1;
    int x_finish = std::rand()%(this->width/4) + this->width*3/4 - 1;
    int y_finish = std::rand()%(this->height/4)  + this->height*3/4 - 1;
    for (int i = 0; i < this->height; ++i){
        this->grid[i] = new Cell[this->width];
        for (int j = 0; j < this->height; ++j){
            if(j == x_start && i == y_start){
                this->start = StartCell(i, j);
                this->grid[i][j] = this->start;
            }
            else if(j == x_finish && i == y_finish){
                this->finish = FinishCell(i, j);
                this->grid[i][j] = this->finish;
            }
            else if(std::rand()%4 == 0){
                this->grid[i][j] = UnpassableCell(i, j);
            }
            else{
                this->grid[i][j] = PassableCell(i, j);
            }
        }
    }
}
GameGrid::GameGrid(){
    this->height = 0;
    this-> width = 0;
    this->grid = nullptr;
}
GameGrid::GameGrid(const GameGrid& gr){
    this->grid = new Cell*[gr.height];
    for (int i = 0; i < gr.height; ++i) {
        this->grid[i] = new Cell[gr.width];
        for (int j = 0; j < gr.width; ++j) {
            this->grid[i][j] = gr.grid[i][j];
        }
    }
    height = gr.height;
    width = gr.width;
}
GameGrid& GameGrid::operator=(const GameGrid& gr){
    if (&gr == this)
        return *this;
    for (int i = 0; i < this->height; ++i) {
        delete[] this->grid[i];
    }
    delete[] this->grid;
    this->grid = new Cell*[gr.height];
    for (int i = 0; i < gr.height; ++i) {
        this->grid[i] = new Cell[gr.width];
        for (int j = 0; j < gr.width; ++j) {
            this->grid[i][j] = gr.grid[i][j];
        }
    }
    height = gr.height;
    width = gr.width;
    return *this;
}
GameGrid::GameGrid(GameGrid &&gr): grid(gr.grid), height(gr.height), width(gr.width)  {
    gr.grid = nullptr;
    gr.height = 0;
    gr.width = 0;
}
GameGrid& GameGrid::operator=(GameGrid &&gr){
    if (&gr == this)
        return *this;
    for (int i = 0; i < this->height; ++i) {
        delete[] this->grid[i];
    }
    delete[] this->grid;
    this->grid = gr.grid;
    this->height = gr.height;
    this->width = gr.width;
    gr.grid = nullptr;
    gr.height = 0;
    gr.width = 0;
    return *this;
}
int GameGrid::GetWidth(){
    return this->width;
}
int GameGrid::GetHeight(){
    return this->height;
}
GameGrid::~GameGrid() {
    for (int i = 0; i < height; ++i) {
        delete[] grid[i];
    }
    delete[] grid;
}
