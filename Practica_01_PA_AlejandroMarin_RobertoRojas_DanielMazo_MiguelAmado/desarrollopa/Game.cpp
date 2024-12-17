#include "Game.h"
#include <iostream>

void Game::Init()
{
	cout << "[GAME] Init..." << endl;

	MenuScene* menu = new	MenuScene();
	this->activeScene = menu;
	scenes.push_back(menu);

	for (int i = 0; i < scenes.size(); i++)
		scenes[i]->Init();

	/*
	EmitterConfiguration config(20, new Sphere(), 150 );

	Model* skull = new Model();
	ModelLoader loader;

	
	//loader.LoadModel("skull.obj");
	
	//loader.SetScale(0.03);
	//*skull = loader.GetModel();

	//skull->SetPosition(Vector3D(0.0 , 0.0 , -150.0));
	//skull->SetOrientation(Vector3D(180, 0, 180));

	Emitter* emisorParticulas = new Emitter(config);
	
	emisorParticulas->SetPosition(Vector3D(0, 8, 0));
	emisorParticulas->SetGravity(false);

	
	this->activeScene->AddGameObject(emisorParticulas);
	
*/


}

void Game::Render()
{
	this->activeScene->Render();
	
}

void Game::Update()
{
	milliseconds currentTime = duration_cast<milliseconds>(system_clock::now().time_since_epoch());

	if ((currentTime.count() - this->initialMilliseconds.count() - this->lasUpdatedTime > UPDATE_PERIOD)) {
	this->activeScene->Update(TIME_INCREMENT);
	this->lasUpdatedTime = currentTime.count() - this->initialMilliseconds.count();
	
	}

	
}

void Game::ProcessKeyPressed(unsigned char key, int px, int py)
{
	this->activeScene->ProcessKeyPressed(key, px, py);
}

void Game::ProcessMouseClicked(int button, int state, int x, int y)
{
	cout << "[GAME] Click:" << button << endl;
	this->activeScene->ProcessMouseClicked(button, state, x, y);
}

void Game::ProcessMouseMovement(int x, int y)
{
	cout << "[GAME] Movement:" << x << ", " << y << endl;
	this->activeScene->ProcessMouseMovement(x, y);
}
