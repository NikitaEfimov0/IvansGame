#pragma once
class CellEntity{
protected:
    int x;
    int y;
public:
    void set_x(int val){
        x = val;
    }
    void set_y(int val){
        y = val;
    }
    int get_x(){return x;}
    int get_y(){return y;}
};
