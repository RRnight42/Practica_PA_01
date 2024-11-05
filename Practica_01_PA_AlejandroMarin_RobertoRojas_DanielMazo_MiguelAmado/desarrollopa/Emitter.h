#pragma once
#include <vector>
#include <chrono>
#include "Solid.h"
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
	
		 // particles vector se configura sin argumento
		
		this->initialMilliseconds = duration_cast<milliseconds>(system_clock::now().time_since_epoch());
		this->lastUpdateTime = 0;
	
	}

	

	void Render();
	void Update();

};

