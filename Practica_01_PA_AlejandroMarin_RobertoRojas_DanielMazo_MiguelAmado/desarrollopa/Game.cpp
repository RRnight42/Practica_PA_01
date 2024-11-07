#include "Game.h"
#include <iostream>

void Game::Init()
{
	cout << "[GAME] Init..." << endl;

	EmitterConfiguration config(20, new Sphere(), 150 );
	
	Emitter* emisorParticulas = new Emitter(config);
	
	emisorParticulas->SetPosition(Vector3D(0, 8, 0));

	mainScene.AddGameObject(emisorParticulas);

}

void Game::Render()
{
	this->mainScene.Render();
}

void Game::Update()
{
	//cout << "[GAME] Update..." << endl;
	this->mainScene.Update();
}

void Game::ProcessKeyPressed(unsigned char key, int px, int py)
{
	//this->display1.ProcessKeyPressed(key, px, py);
}

void Game::ProcessMouseClicked(int button, int state, int x, int y)
{
	cout << "[GAME] Click:" << button << endl;
}

void Game::ProcessMouseMovement(int x, int y)
{
	cout << "[GAME] Movement:" << x << ", " << y << endl;
}
