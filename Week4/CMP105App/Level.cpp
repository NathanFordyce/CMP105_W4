#include "Level.h"
#include "Enemy.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects
	

	texture.loadFromFile("gfx/Mushroom.png");
	mushroom.setTexture(&texture);
	mushroom.setSize(sf::Vector2f(100, 100));
	mushroom.setPosition(100, 100);
	mushroom.setInput(input);

	
	enemyTexture.loadFromFile("gfx/goomba.png");
	goomba.setTexture(&enemyTexture);
	goomba.setSize(sf::Vector2f(100, 100));
	goomba.setPosition(0, 0);
	
}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	// Close window on Escape pressed.
	if (input->isKeyDown(sf::Keyboard::Escape))
	{
		window->close();
	}

	mushroom.handleInput(dt);
}

// Update game objects
void Level::update(float dt)
{
	goomba.update(dt);
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(mushroom);
	window->draw(goomba);

	endDraw();
}

// clear back buffer
void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}