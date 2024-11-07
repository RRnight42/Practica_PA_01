#include "Emitter.h"
#include<random>

void Emitter::Render() {


	for (int idx = 0; idx < this->particlesVector.size(); idx++)
	{
		this->particlesVector[idx]->Render();
	}

}


void Emitter::Update() {

	milliseconds currentTime = duration_cast<milliseconds>(system_clock::now().time_since_epoch());
	long deltaTime = (currentTime.count() - this->initialMilliseconds.count()) - this->lastUpdateTime;
	cout << deltaTime << endl;

	if (deltaTime > this->conf.GetEmitterPeriod()){
	
		if (particlesVector.size() < conf.GetMaxParticles()) {
			int particleID = particlesVector.size();
			Solid* newParitcle = conf.GetParticle()->Clone();
			//bolas de colorines
			//newParitcle->SetColor(this->randomColor(particleID));
			// para simular agua :)
			newParitcle->SetColor(Color(0, 0, 1 ,0.4));
			newParitcle->SetPosition(this->GetPosition());
			
			newParitcle->SetSpeed(this->randomSpeed(particleID));
			particlesVector.push_back(newParitcle);
		}		
		this->lastUpdateTime = currentTime.count() - this->initialMilliseconds.count();
	}

	for (int i = 0; i < particlesVector.size(); i++) {

		particlesVector[i]->Update();

	}



}

Color Emitter::randomColor(int particleId) {

	Color colorReturn;

	// Generador de números aleatorios con una semilla basada en particleId
	mt19937 generator(static_cast<unsigned int>(time(nullptr)) + particleId);
	uniform_real_distribution<float> distribution(0.0f, 1.0f);

	float randomValueR = distribution(generator);
	float randomValueG = distribution(generator);
	float randomValueB = distribution(generator);
	float randomValueA = 1.0f;

	colorReturn.SetRed(randomValueR);
	colorReturn.SetGreen(randomValueG);
	colorReturn.SetBlue(randomValueB);
	colorReturn.SetAlpha(randomValueA);

	return colorReturn;

}

Vector3D Emitter::randomSpeed(int particleId) {
	/*
	Vector3D spdReturn;

	srand(static_cast<unsigned int>(time(nullptr)));
	
	int pn;

	for (int i = 0; i < 3; i++) {
	
		pn = rand() % 2;

		float randomValue = (static_cast<float>(rand()) / RAND_MAX);
		
		if (pn == 1) {
		
			randomValue *= -1;
		
		}
	
		switch (i) {
		case 0:
			spdReturn.SetX(randomValue);
			break;
		case 1:
			spdReturn.SetY(randomValue);
			break;
		case 2:
			spdReturn.SetZ(randomValue);
			break;
		default:
			break;
		}
	
	}

	return spdReturn*0.1f;*/

	Vector3D spdReturn;

	// Generador de números aleatorios con una semilla basada en particleId
	mt19937 generator(static_cast<unsigned int>(time(nullptr)) + particleId);
	uniform_real_distribution<float> distribution(-1.0f, 1.0f);

	// Genera los valores aleatorios entre -1 y 1 para cada componente
	spdReturn.SetX(distribution(generator));
	spdReturn.SetY(distribution(generator));
	spdReturn.SetZ(distribution(generator));

	return spdReturn * 0.05f;
}

Solid* Emitter::Clone() {

	return new Emitter(*this);

}