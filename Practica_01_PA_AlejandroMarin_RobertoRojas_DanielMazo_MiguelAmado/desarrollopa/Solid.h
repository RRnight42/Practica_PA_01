#pragma once
#include "Vector3D.h"
#include "Color.h"

class Solid
{
private:
	Vector3D position;
	Vector3D orientation;
	Vector3D speed;
	Vector3D orientationSpeed;
	Color color;
	

public:
	Solid(Vector3D pos = Vector3D() , Vector3D rot = Vector3D() , Vector3D spd = Vector3D(), Vector3D rotSpeed = Vector3D(), Color col = Color()) :
		position(pos),
		orientation(rot),
		speed(spd),
		orientationSpeed(rotSpeed),
		color(col){}

	inline Vector3D GetPosition() { return this->position; }
	inline Vector3D GetOrientation() { return this->orientation; }
	inline Vector3D GetOrientationSpeed() { return this->orientationSpeed; }
	inline Vector3D GetSpeed() { return this->speed; }
	inline Color GetColor() { return this->color; }

	void SetPosition(Vector3D coordsToSet) { this->position = coordsToSet; }
	void SetOrientation(Vector3D orientationToSet) { this->orientation = orientationToSet; }
	void SetOrientationSpeed(Vector3D orientationSpeedToSet) { this->orientationSpeed = orientationSpeedToSet; }
	void SetSpeed(Vector3D speedToSet) { this->speed = speedToSet; }
	void SetColor(Color colorToSet) { this->color = colorToSet; }

	virtual void Render() = 0;
	virtual void Update();

	virtual Solid* Clone() = 0;
};

