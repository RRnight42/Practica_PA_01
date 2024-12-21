#pragma once
#include "Scene.h"
#include "Cylinder.h"
#include "Sphere.h"
#include "Cuboid.h"

#include "Emitter.h"
#include "EmitterConfiguration.h"
#include "ModelLoader.h"
#include "Model.h"

class GameScene : public Scene
{
private:

	

public:
	
	enum Level {Level1 , Level2 , Level3 , Level4, Level5};

	Level level;
	
	inline Level getLevel() const { return this->level;}


	GameScene(Level levelToSet) : level(levelToSet){}

	void Init();


};

