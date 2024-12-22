#pragma once
#include "Solid.h"
#include "Model.h"
#include "Text.h"
#include "ModelLoader.h"
#include "UICanva.h"
#include <vector>

class Player : public Solid
{

private:

    int lives;
    int coinsValue; 



    Text* coinsText; 

    ModelLoader loader;

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

public:

    Player() : coinsValue(0), coinsText(new Text(coinsValue, Text::TimesNewRoman24)) {}

    enum PowerUp { None, Ray, Shield, SpeedReduce };

    PowerUp powerUp;

    inline PowerUp getCurrentPowerUp() { return this->powerUp; }
    inline void setPowerUp(const PowerUp& pu) { this->powerUp = pu; }
    inline int getCoins() const { return coinsValue; }

    void usePowerUp();
    void InitAttributes();
    void LoseLive();

    inline vector<Model*> getPlayerModels();
    
    void UpdateCoinsText() {
        coinsText->setText(coinsValue); 
    }

    void addCoins() {
        coinsValue += 1;
        UpdateCoinsText(); 
    }

    void Render();
};
