#pragma once
#include "Scene.h"
#include "Text.h"
#include "Model.h"
#include "ModelLoader.h"




class LoseScene : public Scene
{
	

private : 

	Text* textoPerder = new Text("Vaya, has perdido" , Text::Helvetica18 , 2.0f , Color(0,0,0,1));
	Text* reinicio = new Text("¿Volver a empezar?", Text::Helvetica10 , 1.5f, Color(1,0.5,0,1));

	Model* donkyLose = new Model();

	Model* barrels[];
	

public:


	LoseScene() {
	
	
	
	
	}


	void Init();
};

