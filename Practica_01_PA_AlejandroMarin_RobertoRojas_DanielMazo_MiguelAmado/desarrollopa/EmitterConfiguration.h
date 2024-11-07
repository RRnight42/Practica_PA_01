#pragma once
#include "Solid.h"
#include "Sphere.h"
class EmitterConfiguration
{

private:

	int maxParticles;
	int emitterPeriod;
	Solid* particle;


public: 

	EmitterConfiguration(int period  , Solid* particle = new Sphere() , int maxParticles = 10) : maxParticles(maxParticles), emitterPeriod(period), particle(particle) {}

	// metodos acesso
	inline int GetMaxParticles() { return this->maxParticles; }
	inline int GetEmitterPeriod() { return this->emitterPeriod; }
	inline Solid* GetParticle() { return this->particle; }



};

