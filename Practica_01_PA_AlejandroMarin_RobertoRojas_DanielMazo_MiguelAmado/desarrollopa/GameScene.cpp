#include "GameScene.h"


void GameScene::Init() {

	// configuraciones comunes de todos los niveles
	// dibujar escena y demas tralla

	Cylinder* carretera = new Cylinder(1.5,1.5,10);
	Cylinder* sep1 = new Cylinder(1.7, 1.7, 0.3);
	//Cylinder* sep2 = new Cylinder(1.7, 1.7, 0.3);
	//Cylinder* sep3 = new Cylinder(1.7, 1.7, 0.3);
	//Cylinder* sep4 = new Cylinder(1.7, 1.7, 0.3);
	//
	carretera->SetOrientation(Vector3D(0, 90, 0));
	sep1->SetOrientation(Vector3D(0, -90, 0));
	//sep2->SetOrientation(Vector3D(0, -90, 0));
	//sep3->SetOrientation(Vector3D(0, -90, 0));
	//sep4->SetOrientation(Vector3D(0, -90, 0));
	//
	carretera->SetPosition(Vector3D(-5,-2, 15.5));
	sep1->SetPosition(Vector3D(-3, -2, 15.5));
	//sep2->SetPosition(Vector3D(-1, -2, 15.5));
	//sep3->SetPosition(Vector3D(1, -2, 15.5));
	//sep4->SetPosition(Vector3D(3, -2, 15.5));
	//
	carretera->SetOrientationSpeed(Vector3D(0.1,0,0));
	sep1->SetOrientationSpeed(Vector3D(0.1, 0, 0));
	//sep2->SetOrientationSpeed(Vector3D(-1, -2, 15.5));
	//sep3->SetOrientationSpeed(Vector3D(1, -2, 15.5));
	//sep4->SetOrientationSpeed(Vector3D(3, -2, 15.5));
	//
	//
	carretera->SetGravity(false);
	sep1->SetGravity(false);
	//sep2->SetGravity(false);
	//sep3->SetGravity(false);
	//sep4->SetGravity(false);

	AddGameObject(carretera);
	AddGameObject(sep1);
	//AddGameObject(sep2);
	//AddGameObject(sep3);
	//AddGameObject(sep4);


	


	switch (this->getLevel()) {
	
	case Level1:
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