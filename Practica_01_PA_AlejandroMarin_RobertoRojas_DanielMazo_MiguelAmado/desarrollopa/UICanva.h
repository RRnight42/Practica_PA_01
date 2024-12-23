#pragma once
#include "Model.h"
#include "Solid.h"
#include "ModelLoader.h"
#include "Text.h"

class UICanva : public Solid
{
   

private:

    ModelLoader loader;

    Text* coinsText;

    Model* heart1 = new Model();
    Model* heart2 = new Model();
    Model* heart3 = new Model();

    Model* rayPowerUpUI = new Model();
    Model* shieldPowerUpUI = new Model();
    Model* speedPowerUpUI = new Model();

    Model* activePowerUp = nullptr;

    Model* coinUI = new Model();

    int powerUi;

public:
   

    UICanva() : coinsText(new Text( int(0) , Text::TimesNewRoman24)) , activePowerUp(nullptr) , powerUi(0){}

    void UpdateCoinsText(const int& coinsValue) { this->coinsText->setText(coinsValue); }
    void InitUI();
    void UpdateHeartsUI(const int& currentLive);
    inline void SetActivePowerUpUI(const int& power);
    
    void Render();
    Solid* Clone();

};

