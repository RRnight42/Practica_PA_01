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

void Player::setPowerUp(const int& newPowerUp) {
    if (this->powerUp == Player::None) {
        this->powerUp = static_cast<Player::PowerUp>(newPowerUp);
        
    }
    else {
    
    
    }
  
}

int Player::getCurrentPowerUp() {


    return this->powerUp;

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
