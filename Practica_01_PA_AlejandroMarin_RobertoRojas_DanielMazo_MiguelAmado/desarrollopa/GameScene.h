#pragma once
#include "Scene.h"
#include "Cylinder.h"
#include "Sphere.h"
#include "Cuboid.h"
#include "Text.h"
#include "Emitter.h"
#include "EmitterConfiguration.h"
#include "ModelLoader.h"
#include "Model.h"

class GameScene : public Scene
{
private:

	Cuboid* carretera = new Cuboid(10, 2, 150);
	Cuboid* sep1 = new Cuboid(0.5, 2, 160);
	Cuboid* sep2 = new Cuboid(0.5, 2, 160);
	Cuboid* sep3 = new Cuboid(0.5, 2, 160);
	Cuboid* sep4 = new Cuboid(0.5, 2, 160);
	
	Emitter* emitterBarrelC1 = new Emitter();
	Emitter* emitterBarrelC2 = new Emitter();
	Emitter* emitterBarrelC3 = new Emitter();


public:
	
	enum Level {Level1 , Level2 , Level3 , Level4, Level5};

	Level level;
	
	inline Level getLevel() const { return this->level;}


	GameScene(Level levelToSet) : level(levelToSet){}

	void Init();


};

