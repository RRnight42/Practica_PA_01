#pragma once
#include "Model.h"
class PowerUp : public Model
{

private:

	enum PowerUpType {Ray , Shield , Speed};

	PowerUpType typePowerUp;

public :

	inline PowerUpType getPowerUpType() { return this->typePowerUp; };

};

