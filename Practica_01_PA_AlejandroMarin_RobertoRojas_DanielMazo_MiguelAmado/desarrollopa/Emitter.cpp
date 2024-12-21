#include "Emitter.h"
#include<random>

void Emitter::Render() {


	for (int idx = 0; idx < this->particlesVector.size(); idx++)
	{
		this->particlesVector[idx]->Render();
	}

}


void Emitter::Update(const float& time)
{
	milliseconds currentTime = duration_cast<milliseconds>(system_clock::now().time_since_epoch());
	long deltaTime = (currentTime.count() - this->initialMilliseconds.count()) - this->lastUpdateTime;

	if (deltaTime > this->nextInterval)
	{
		int burstSize = generateRandom(conf.GetMinBurstSize(), conf.GetMaxBurstSize());

		for (int i = 0; i < burstSize && particlesVector.size() < conf.GetMaxParticles(); i++) {
			int particleID = particlesVector.size();
			Solid* newParticle = conf.GetParticle()->Clone();

			// Generar un desplazamiento solo en el eje Z
			Vector3D basePosition = this->GetPosition();
			Vector3D offset = this->randomPositionOffsetZ(particleID); // Usar el nuevo método
			newParticle->SetPosition(basePosition + offset);

			if (conf.GetIsRandom()) {
				newParticle->SetColor(this->randomColor(particleID));
				newParticle->SetSpeed(this->randomSpeed(particleID));
			}
			else {
				newParticle->SetColor(conf.getColorConf());
				newParticle->SetSpeed(conf.getSpeedConf());
				newParticle->SetOrientation(conf.getOrientationConf());
				newParticle->SetOrientationSpeed(conf.getOrientationSpeedConf());
			}

			particlesVector.push_back(newParticle);
		}

		this->lastUpdateTime = currentTime.count() - this->initialMilliseconds.count();
		this->nextInterval = generateRandom(conf.GetMinInterval(), conf.GetMaxInterval());
	}

	for (int i = 0; i < particlesVector.size(); i++)
	{
		particlesVector[i]->Update(time);
	}


}

Vector3D Emitter::randomPositionOffsetZ(int particleId) {
	mt19937 generator(static_cast<unsigned int>(time(nullptr)) + particleId);
	uniform_real_distribution<float> distribution(-5.0f, 5.0f); 

	float offsetZ = distribution(generator); 

	return Vector3D(0, 0, offsetZ);
}


int Emitter::generateRandom(int min, int max)
{
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dis(min, max);
	return dis(gen);
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

	
	mt19937 generator(static_cast<unsigned int>(time(nullptr)) + particleId);
	uniform_real_distribution<float> distribution(-1.0f, 1.0f);

	
	spdReturn.SetX(distribution(generator));
	spdReturn.SetY(distribution(generator));
	spdReturn.SetZ(distribution(generator));

	return spdReturn * 0.05f;
}

Solid* Emitter::Clone() {

	return new Emitter(*this);

}