#pragma once
#include <vector>
#include <chrono>
#include "Solid.h"
#include "Color.h"

#include <iostream>
#include "EmitterConfiguration.h"

using namespace std;
using namespace chrono;

class Emitter : public Solid
{

private:
	
	EmitterConfiguration conf;
	vector<Solid*> particlesVector; 

	milliseconds initialMilliseconds;
	long lastUpdateTime;


public:

	Emitter(EmitterConfiguration confToSet): conf(confToSet){
	
	
		
		this->initialMilliseconds = duration_cast<milliseconds>(system_clock::now().time_since_epoch());
		this->lastUpdateTime = 0;
	
	}

	Color randomColor(int particleId);
	Vector3D randomSpeed(int particleId);

	void Render();
	void Update(const float& time);

	Solid* Clone();

};

