#include "GameScene.h"
#include<random>

void GameScene::Init() {

	// configuraciones comunes de todos los niveles
	// dibujar escena y demas tralla
	

	Cuboid* carretera = new Cuboid(10, 2, 150);
	Cuboid* sep1 = new Cuboid(0.5, 2, 160);
	Cuboid* sep2 = new Cuboid(0.5, 2, 160);
	Cuboid* sep3 = new Cuboid(0.5, 2, 160);
	Cuboid* sep4 = new Cuboid(0.5, 2, 160);

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


	if (this->getLevel() == this->Level1) {
		EmitterConfiguration con1(new Cylinder(), 30, 1, 3, 3000, 5000, false, Vector3D(0, 0, 0.1), Vector3D(0, 90, 0), Vector3D(0, 0, 1), Color(1, 0, 0, 1));
		Emitter* c1 = new Emitter(con1, 150000);
		EmitterConfiguration con2(new Cylinder(), 30, 1, 3, 3000, 5000, false, Vector3D(0, 0, 0.1), Vector3D(0, 90, 0), Vector3D(0, 0, 1), Color(1, 0, 0, 1));
		Emitter* c2 = new Emitter(con2, 150000);
		EmitterConfiguration con3(new Cylinder(), 30, 1, 3, 3000, 5000, false, Vector3D(0, 0, 0.1), Vector3D(0, 90, 0), Vector3D(0, 0, 1), Color(1, 0, 0, 1));
		Emitter* c3 = new Emitter(con3, 150000);
		c1->SetPosition(Vector3D(-3.45, -2, -40));
		c2->SetPosition(Vector3D(0, -2, -40));
		c3->SetPosition(Vector3D(3.45, -2, -40));
		AddGameObject(c1);
		AddGameObject(c2);
		AddGameObject(c3);
	}else if (this->getLevel() == this->Level2) {

	}else if (this->getLevel() == this->Level3) {

	}else if (this->getLevel() == this->Level4) {

	}else if (this->getLevel() == this->Level2) {

	}
	
	AddGameObject(carretera);
	AddGameObject(sep1);
	AddGameObject(sep2);
	AddGameObject(sep3);
	AddGameObject(sep4);
	
}