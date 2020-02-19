#include "Level.h"
#include "Enemy.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects
	window->setMouseCursorVisible(false);

	backTexture.loadFromFile("gfx/Level1_1.png");
	background.setTexture(&backTexture);
	background.setSize(sf::Vector2f(11038, 675));
	background.setPosition(0, 0);


	texture.loadFromFile("gfx/Mushroom.png");
	mushroom.setTexture(&texture);
	mushroom.setSize(sf::Vector2f(100, 100));
	mushroom.setPosition(100, 100);
	mushroom.setInput(input);

	
	enemyTexture.loadFromFile("gfx/goomba.png");
	goomba.setTexture(&enemyTexture);
	goomba.setSize(sf::Vector2f(100, 100));
	goomba.setPosition(0, 0);

	cursorTexture.loadFromFile("gfx/icon.png");
	cursor.setTexture(&cursorTexture);
	cursor.setSize(sf::Vector2f(50, 50));
	cursor.setPosition(0, 0);
	cursor.setInput(input);


	
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
	cursor.update(dt);
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(background);
	window->draw(mushroom);
	window->draw(goomba);
	window->draw(cursor);

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