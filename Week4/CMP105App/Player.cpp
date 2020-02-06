#include "Player.h"
#include "Level.h"

Player::Player()
{

}

Player::~Player()
{

}

void Player::handleInput(float dt)
{
	if (input->isKeyDown(sf::Keyboard::Right))
	{
		input->setKeyUp(sf::Keyboard::Right);
		move(velocity * dt);
	}
	else if (input->isKeyDown(sf::Keyboard::Left))
	{
		input->setKeyUp(sf::Keyboard::Left);
		move(-velocity * dt);
	}


}