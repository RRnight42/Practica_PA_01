#pragma once
#include <vector>
#include "Solid.h"
#include "Camera.h"

using namespace std;

class Scene
{
private:
	vector<Solid*> gameObjects;
	Camera camera;

	
public:

	Scene()
	{
		this->camera.SetPosition(Vector3D(0, 0, 20));
	}

	virtual void AddGameObject(Solid* gameObject);

	inline Camera GetCamera() const { return this->camera; }

	virtual void Init();
	virtual void Render();
	virtual void Update();
		
	virtual void ProcessKeyPressed(unsigned char key, int px, int py);
 	virtual void ProcessMouseMovement(int x, int y);
    virtual void ProcessMouseClicked(int button, int state, int x, int y);
};

