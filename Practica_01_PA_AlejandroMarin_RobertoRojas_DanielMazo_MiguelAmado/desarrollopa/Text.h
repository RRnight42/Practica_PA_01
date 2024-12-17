#pragma once
#include <string>
#include "Solid.h"
#include  <GL/glut.h>
class Text : public Solid
{

private:

	string texto;
	float scale;

	

public:

	enum textType { TimesNewRoman10, TimesNewRoman24, Helvetica10, Helvetica12, Helvetica18 };


    textType tipo;
    
	

	Text(string text = "NewText", textType type = TimesNewRoman10 , float scale = 1.0f , Color color = Color(1,1,1,1) ) : Solid(), texto(text), tipo(type) {}


	inline string getText() const { return this->texto; }
	inline textType getType() const { return this->tipo; }
	inline float getScale() const { return this->scale; }


	inline void setScale(const float& scaleSet) { this->scale = scaleSet; }
	inline void setText(const string& text) { this->texto = text; }

	void Render();

	Solid* Clone();
};

