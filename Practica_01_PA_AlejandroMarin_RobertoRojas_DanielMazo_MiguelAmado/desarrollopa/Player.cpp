#include "Player.h"

void Player::Render() {

    Model::Render();

   

}


void Player::AddLive() {


    if (lives == 3){
    
    }else{
    this->lives += 1;
   
    }
}


void Player::LoseLive() {

    this->lives -= 1;
    
}

void Player::addCoins() {
    this->coinsValue += 1;

}


int Player::usePowerUp() {

    int power;

    switch (this->powerUp) {


    case None:
        power = 0;
        break;
    case Ray:
        power = 1;
        break;
    case Shield:
        power = 2;
        break;
    case SpeedReduce:
        power = 3;
        break;
    default:
        power = 0;

    }
	this->powerUp = None;
    return power;
}

bool Player::setPowerUp(const Player::PowerUp& newPowerUp) {
    if (this->powerUp == Player::None) {
        this->powerUp = newPowerUp;
        return true; 
    }
    return false;
}

inline int Player::getCurrentPowerUp() const {


    switch (this->powerUp) {
    
    
    case None:
        return 0;
        break;
    case Ray:
        return 1;
        break;
    case Shield:
        return 2;
        break;
    case SpeedReduce:
        return 3;
        break;
    default:
        return 0;
    
    }

}
void Player::setUICanva(UICanva* ui) {
    this->uiCanva = ui;
}

void Player::notifyUICanva() {
    if (uiCanva != nullptr) {
        uiCanva->UpdateHeartsUI(this->lives);
        uiCanva->UpdateCoinsText(this->coinsValue);
        uiCanva->SetActivePowerUpUI(this->powerUp);
    }
}

bool Player::hasPowerUp() const {
    return this->powerUp != None;
}
