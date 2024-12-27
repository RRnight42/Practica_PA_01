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

    int carril; 


    const float distanceColission = 0.1;
    const float distanceColissionWideBarrel = 1;
    

public:

    UICanva* uiCanva = nullptr;
    enum PowerUp { None, Ray, Shield, SpeedReduce };

    PowerUp powerUp;
    
    Player() : lives(3), coinsValue(0), powerUp(None) {}

    inline float getDistanceColission() const { return this->distanceColission; }
    inline float getDistanceColissionWide() const { return this->distanceColissionWideBarrel; }

     int getCurrentPowerUp();
     void setPowerUp(const int& pu);

    inline int getCarril() const { return this->carril; }
    inline void setCarril(const int& carrilSet) { this->carril = carrilSet; }

    bool hasPowerUp() const;
    inline int getCoins() const { return coinsValue; }

    int usePowerUp();
    void AddLive();
    void LoseLive();
    void addCoins();
    void setUICanva(UICanva* ui);
    void notifyUICanva();

    void Render();


  
};
