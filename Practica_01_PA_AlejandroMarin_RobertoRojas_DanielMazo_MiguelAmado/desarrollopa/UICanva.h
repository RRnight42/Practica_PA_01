#pragma once
#include "Model.h"
class UICanva
{

private:

    Model* player = new Model();

    Model* heart1 = new Model();
    Model* heart2 = new Model();
    Model* heart3 = new Model();

    Model* rayPowerUpUI = new Model();
    Model* shieldPowerUpUI = new Model();
    Model* speedPowerUpUI = new Model();
    Model* nonActivePowerUps = nullptr;

    Model* coinUI = new Model();


    vector<Model*> PlayerElements;
};

