#pragma once
#include <chrono>
#include "Scene.h"
#include "Cylinder.h"
#include "Sphere.h"
#include "Cuboid.h"
#include "Text.h"
#include "Emitter.h"
#include "EmitterConfiguration.h"
#include "ModelLoader.h"
#include "Model.h"
#include "Player.h"
#include  "PowerUp.h"
#include "UICanva.h"

using namespace std;

class GameScene : public Scene
{
private:

	ModelLoader loader; 

	Player* player = new Player();


	Sphere* shield = new Sphere(2, 15, 10);

	Cuboid* carretera = new Cuboid(10, 2, 150);
	Cuboid* sep1 = new Cuboid(0.5, 2, 160);
	Cuboid* sep2 = new Cuboid(0.5, 2, 160);
	Cuboid* sep3 = new Cuboid(0.5, 2, 160);
	Cuboid* sep4 = new Cuboid(0.5, 2, 160);
	
	Emitter* emitterBarrelC1 = new Emitter();
	Emitter* emitterBarrelC2 = new Emitter();
	Emitter* emitterBarrelC3 = new Emitter();

	Emitter* emitterWideBarrel1 = new Emitter();
	Emitter* emitterWideBarrel2 = new Emitter();

	Emitter* emitterPowerUp1 = new Emitter();
	Emitter* emitterPowerUp2 = new Emitter();
	Emitter* emitterPowerUp3 = new Emitter();

	UICanva* canva = new UICanva();


	// powerups 

	vector<Emitter*> barrelEmitters;
	vector <Emitter*> powerUpEmitters;


	bool shieldEffect = false;
	bool speedEffect = false;
	const float reduce = 0.5;
	chrono::steady_clock::time_point timePowerUp;


public:
	
	enum Level {Level1 , Level2 , Level3 , Level4, Level5};

	Level level;
	
	inline Level getLevel() const { return this->level;}


	GameScene(Level levelToSet) : level(levelToSet){}

	void usePowerUpPlayer();
	void recogerPowerUp(const int& nuevoPowerUp);



	void Init();

	// player 
	
	void powerUpCollisions();

	
	//void barrelCollisions();  //proximamente


	//powerups

	void activateRay();
	void activateShield();
	void activateSpeedReduce(const float& speedFactor);
	
	void resetTimeEffects();
	//inputs

	void ProcessKeyPressed(unsigned char key, int px, int py);


	void Update(const float& time);
};

