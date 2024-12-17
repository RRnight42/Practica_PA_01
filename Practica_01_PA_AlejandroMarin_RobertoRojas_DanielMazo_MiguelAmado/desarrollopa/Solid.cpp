#include "Solid.h"

void Solid::Update(const float& time)
{
	this->orientation = this->orientation + this->orientationSpeed * time;

    if (this->GetGravity()) {
    
        this->speed = this->speed + Vector3D(0, -0.0098f, 0) * time;
    
    }
    // Actualizar la posición con la velocidad
    this->position = this->position + this->speed * time;
}

