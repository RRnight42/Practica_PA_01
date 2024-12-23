#include "GameScene.h"
#include<random>

void GameScene::Init() {

	// configuraciones comunes de todos los niveles
	// dibujar escena y demas tralla


	//player.se
	carretera->SetPosition(Vector3D(0, -4, -60));
	sep1->SetPosition(Vector3D(-1.7, -3.95, -60));
	sep2->SetPosition(Vector3D(-5, -3.95, -60));
	sep3->SetPosition(Vector3D(1.7, -3.95, -60));
	sep4->SetPosition(Vector3D(5, -3.95, -60));
	
	
	carretera->SetColor(Color(0, 0, 0, 1));
	sep1->SetColor(Color(1, 1, 1, 1));
	sep2->SetColor(Color(1, 1, 1, 1));
	sep3->SetColor(Color(1, 1, 1, 1));
	sep4->SetColor(Color(1, 1, 1, 1));
	emitterBarrelC1->SetPosition(Vector3D(-3.45, -2, -40));
	emitterBarrelC2->SetPosition(Vector3D(0, -2, -40));
	emitterBarrelC3->SetPosition(Vector3D(3.45, -2, -40));

	if (this->getLevel() == this->Level1) {

		EmitterConfiguration confBarrelLevel1(new Cylinder(), 4, 1, 2, 3000, 7000, 7000, true, false, Vector3D(0, 0, 0.3), Vector3D(0, 90, 0), Vector3D(0, 0, 1), Color(1, 0, 0, 1));		

		
		emitterBarrelC1->setConfiguration(confBarrelLevel1);
		emitterBarrelC2->setConfiguration(confBarrelLevel1);
		emitterBarrelC3->setConfiguration(confBarrelLevel1);
		
	}else if (this->getLevel() == this->Level2) {

	}else if (this->getLevel() == this->Level3) {

	}else if (this->getLevel() == this->Level4) {

	}else if (this->getLevel() == this->Level5) {

	}
	
	AddGameObject(carretera);
	AddGameObject(sep1);
	AddGameObject(sep2);
	AddGameObject(sep3);
	AddGameObject(sep4);
	AddGameObject(emitterBarrelC1);
	AddGameObject(emitterBarrelC2);
	AddGameObject(emitterBarrelC3);
}