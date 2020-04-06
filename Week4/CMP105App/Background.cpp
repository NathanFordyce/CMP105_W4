#include "Background.h"

Background::Background()
{

}

Background::~Background()
{

}


void Background::handleInput(float dt)
{
	view = window->getView();

	if (input->isKeyDown(sf::Keyboard::D))
	{
		view.move(1.0f, 0);
	}
	
	else if (input->isKeyDown(sf::Keyboard::A))
	{
		view.move(-1.0f, 0);
	}

	window->setView(view);

}