#pragma once
#include "Model.h"
#include "ModelLoader.h"
#include <cstdlib> // Para rand() y srand()
#include <ctime>   // Para time()

class PowerUp : public Model {

    
private:
    int type;           
   

public:
    
    PowerUp(ModelLoader& modelLoader){
        
        srand(static_cast<unsigned>(time(0))); 
        this->type = (rand() % 3 + 1); 

        
        switch (this->type) {
        case 1:
            modelLoader.LoadModel("path_to_ray_model.obj");
            this->SetModel(modelLoader.GetModel());
            this->PaintColor(Color(1, 1, 0, 1));
            break;
        case 2:
            modelLoader.LoadModel("path_to_shield_model.obj");
            this->SetModel(modelLoader.GetModel());
            this->PaintColor(Color(0.5, 0.5, 0.7, 1));
            break;
        case 3:
            modelLoader.LoadModel("path_to_speed_reduce_model.obj");
            this->SetModel(modelLoader.GetModel());
            this->PaintColor(Color(0, 0, 1, 1));
            break;
        }
    }

    inline int GetType() const { return this->type; }
};


