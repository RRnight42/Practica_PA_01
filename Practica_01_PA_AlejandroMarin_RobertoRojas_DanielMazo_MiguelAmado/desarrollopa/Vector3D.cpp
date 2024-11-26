#include "Vector3D.h"
#include <iostream>;
#include <cstdlib>;
#include <ctime>;




Vector3D Vector3D::Add(Vector3D& other)
{
	return Vector3D(
		this->GetX() + other.GetX(),
		this->GetY() + other.GetY(),
		this->GetZ() + other.GetZ());
}



Vector3D Vector3D::Product(float a)
{
	return Vector3D(
		this->GetX() * a,
		this->GetY() * a,
		this->GetZ() * a);
}

Vector3D Vector3D::Division(const float value) {


	Vector3D newVector(this->GetX() / value, this->GetY() / value, this->GetZ() / value);
	return newVector;
}



Vector3D Vector3D :: operator+(const Vector3D& vector)  {

	float x = this->GetX() + vector.GetX();
	float y = this->GetY() + vector.GetY();
	float z = this->GetZ() + vector.GetZ();

	return Vector3D(x, y, z);

}
Vector3D Vector3D :: operator-(const Vector3D& vector) {

	float x = this->GetX() - vector.GetX();
	float y = this->GetY() - vector.GetY();
	float z = this->GetZ() - vector.GetZ();

	return Vector3D(x, y, z);
}
Vector3D Vector3D :: operator*(const float value) {

	float x = this->GetX() * value;
	float y = this->GetY() * value;
	float z = this->GetZ() * value;

	return Vector3D(x, y, z);
}

Vector3D Vector3D::operator/(const float value)
{
	return Vector3D(this->GetX() / value, this->GetY() / value, this->GetZ() / value);
}

float Vector3D::operator*(const Vector3D& vector)
{
	float x = this->GetX() * vector.GetX();
	float y = this->GetY() * vector.GetY();
	float z = this->GetZ() * vector.GetZ();

	return (x + y + z);
}

float& Vector3D :: operator[](const int& axis) {

	if (axis > 2 || axis < 0) {
		throw out_of_range("Axis no encontrado");
	}

	if (axis == 0) return x;
	if (axis == 1) return y;
	if (axis == 2) return z;


};


