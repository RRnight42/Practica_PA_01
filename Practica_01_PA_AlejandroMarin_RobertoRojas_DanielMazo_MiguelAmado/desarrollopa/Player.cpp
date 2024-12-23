#include "Player.h"

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

	this->powerUp = None;
    return 0;
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