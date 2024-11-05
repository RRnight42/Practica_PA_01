#include "Emitter.h"

void Emitter::Render() {


	for (int idx = 0; idx < this->particlesVector.size(); idx++)
	{
		this->particlesVector[idx]->Render();
	}

}


void Emitter::Update() {

	milliseconds currentTime = duration_cast<milliseconds>(system_clock::now().time_since_epoch());

	if ((currentTime.count() - this->initialMilliseconds.count()) - this->lastUpdateTime > this->conf.GetEmitterPeriod()){
	
		particlesVector.push_back(conf.GetParticle()->Clone());
	
	}

	this->lastUpdateTime = currentTime.count() - this->initialMilliseconds.count();

}
