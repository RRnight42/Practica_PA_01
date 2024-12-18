#pragma once
#include "Scene.h"


class GameScene : public Scene
{
private:

	enum Level {Level1 , Level2 , Level3 , Level4, Level5};

	Level level;

public:
	
	inline Level getLevel() const { return this->level; }


	GameScene(Level levelToSet) : level(levelToSet){}

	void Init();


};

