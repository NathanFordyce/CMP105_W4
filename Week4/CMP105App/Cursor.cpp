#include "Cursor.h"

Cursor::Cursor()
{

}

Cursor::~Cursor()
{

}

void Cursor::update(float dt)
{
	mouseX = input->getMouseX();
	mouseY = input->getMouseY();

	setPosition(mouseX, mouseY);
}