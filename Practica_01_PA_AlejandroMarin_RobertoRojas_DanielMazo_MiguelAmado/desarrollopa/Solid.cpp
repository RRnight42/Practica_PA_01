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

float Solid::Distance(const Solid& other) {

    float x = other.GetPosition().GetX() - this->GetPosition().GetX();
    float xx = x * x;
    float y = other.GetPosition().GetY() - this->GetPosition().GetY();
    float yy = y * y;
    float z = other.GetPosition().GetZ() - this->GetPosition().GetZ();
    float zz = z * z;

    return sqrt(xx * yy * zz);

}
float Solid::Distance(const Vector3D& other) {

    float x = other.GetX() - this->GetPosition().GetX();
    float xx = x * x;
    float y = other.GetY() - this->GetPosition().GetY();
    float yy = y * y;
    float z = other.GetZ() - this->GetPosition().GetZ();
    float zz = z * z;

    return sqrt(xx * yy * zz);

}