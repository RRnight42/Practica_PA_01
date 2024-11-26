#include "Solid.h"

void Solid::Update()
{
	this->orientation = this->orientation + this->orientationSpeed;

    if (this->GetGravity()) {
    
        this->speed = this->speed + Vector3D(0, -0.0098f, 0);
    
    }
    // Actualizar la posición con la velocidad
    this->position = this->position + this->speed;
}

