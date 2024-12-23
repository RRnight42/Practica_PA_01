#pragma once
#include "Solid.h"
#include "Model.h"
#include "Text.h"
#include "UICanva.h"
#include <vector>

class Player : public Model
{

private:

    int lives;
    int coinsValue; 


public:


    enum PowerUp { None, Ray, Shield, SpeedReduce };

    PowerUp powerUp;
    
    Player() : lives(3) ,coinsValue(0), powerUp(None)  {}

    inline int getCurrentPowerUp() const;
    inline void setPowerUp(const PowerUp& pu) { this->powerUp = pu; }
    inline int getCoins() const { return coinsValue; }

    int usePowerUp();
    void AddLive();
    void LoseLive();
    void addCoins();

  
};
