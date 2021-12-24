//
// Created by Никита Ефимов on 24.12.2021.
//

#ifndef OOPLAB1_HEROSAVE_H
#define OOPLAB1_HEROSAVE_H
#include "Logger/SaveObject.h"
class HeroSave:public SaveObject{
public:
    HeroSave(CellEntity* obj){
        publisher = obj;
    }
    void update(int where){
        if(where)
            load();
        else {
            SaveToFile.open("Data/heroHis.json");
            s["x"] = observable->return_x();
            s["y"] = observable->return_y();
            s["health"] = observable->return_health();
            s["score"] = observable->returnKills();
            SaveToFile << s;
            SaveToFile.close();
        }
    }
    virtual void load(){
        LoadFromfile.open("Data/heroHis.json");
        if(!is_empty(LoadFromfile)) {
            l = l.parse(LoadFromfile);
            observable->set_x(l["x"]);
            observable->set_y(l["y"]);
            observable->set_health(l["health"]);
            observable->set_score(l["score"]);
            LoadFromfile.close();
        }
        else
            throw std::exception();

    }
};
#endif //OOPLAB1_HEROSAVE_H
