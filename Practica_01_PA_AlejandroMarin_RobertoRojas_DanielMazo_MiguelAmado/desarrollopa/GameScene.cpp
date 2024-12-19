#include "GameScene.h"
#include<random>

void GameScene::Init() {

	// configuraciones comunes de todos los niveles
	// dibujar escena y demas tralla



	Sphere* player = new Sphere(0.5f,10,8);

	Cylinder* carretera = new Cylinder(1.5,1.5,10 , 16 ,16);
	Cylinder* sep1 = new Cylinder(1.51, 1.51, 0.3, 16, 16);
	Cylinder* sep2 = new Cylinder(1.51, 1.51, 0.3);
	Cylinder* sep3 = new Cylinder(1.51, 1.51, 0.3);
	Cylinder* sep4 = new Cylinder(1.51, 1.51, 0.3);
	//Cylinder* wall1 = new Cylinder();
	//
	carretera->SetOrientation(Vector3D(0, 90, 0));
	sep1->SetOrientation(Vector3D(0, -90, 0));
	sep2->SetOrientation(Vector3D(0, -90, 0));
	sep3->SetOrientation(Vector3D(0, -90, 0));
	sep4->SetOrientation(Vector3D(0, -90, 0));
	//
	carretera->SetPosition(Vector3D(-5,-2, 15.5));
	sep1->SetPosition(Vector3D(-3, -2, 15.5));
	sep2->SetPosition(Vector3D(-1, -2, 15.5));
	sep3->SetPosition(Vector3D(1, -2, 15.5));
	sep4->SetPosition(Vector3D(3, -2, 15.5));
	player->SetPosition(Vector3D(-0.2,-1.8,16.7));
	//
	carretera->SetOrientationSpeed(Vector3D(0.3,0,0));
	sep1->SetOrientationSpeed(Vector3D(0.3, 0, 0));
	sep2->SetOrientationSpeed(Vector3D(0.3, 0, 0));
	sep3->SetOrientationSpeed(Vector3D(0.3, 0, 0));
	sep4->SetOrientationSpeed(Vector3D(0.3, 0, 0));
	//
	//
	carretera->SetColor(Color(0.3, 0.3, 0.3, 1));
	player->SetColor(Color(0, 0, 1, 1));



	AddGameObject(carretera);
	AddGameObject(sep1);
	AddGameObject(sep2);
	AddGameObject(sep3);
	AddGameObject(sep4);
	AddGameObject(player);

	


	switch (this->getLevel()) {
	
	case Level1:

		//int particleId;
	//	mt19937 generator(static_cast<unsigned int>(time(nullptr)) + particleId);
	//	uniform_real_distribution<float> distribution(1.0f, 1.0f);


	//EmitterConfiguration emConf1 = new EmitterConfiguration( 50 , new Cylinder(), ) ;


		break;
	
	case Level2:
		break;

	case Level3:
		break;

	case Level4:
		break;

	case Level5:
		break;
	
	
	
	
	}







}