#pragma once
#include "Solid.h"

class EmitterConfiguration
{

private:

	int maxParticles;
	int emitterPeriod;
	Solid* particle;

public: 

	EmitterConfiguration(int period  , Solid* particle , int maxParticles = 10) : maxParticles(maxParticles) , emitterPeriod(period) , particle(particle){}

	// metodos acesso
	inline int GetMaxParticles() { return this->maxParticles; }
	inline int GetEmitterPeriod() { return this->emitterPeriod; }
	inline Solid* GetParticle() { return this->particle; }



};

