#include "Solid.h"

void Solid::Update()
{
	this->orientation = this->orientation + this->orientationSpeed;
    Vector3D gravity(0.0f, -0.0098f, 0.0f);  

    this->speed = this->speed + gravity; 

    // Actualizar la posición con la velocidad
    this->position = this->position + this->speed;
}

