#include "Enemy.h"

Enemy::Enemy()
{

}

Enemy::~Enemy()
{

}

void Enemy::update(float dt)
{
	//sf::Vector2f pos = window->getSize();
	setVelocity(speedX, speedY);
	move(getVelocity() * dt);

	if ((getPosition().y + 100) > 700)
	{
		speedY = -200;
	}
	else if ((getPosition().x + 100) > 1200)
	{
		speedX = -200;
	}
	else if ((getPosition().y) < 0)
	{
		speedY = 200;
	}
	else if ((getPosition().x) < 0)
	{
		speedX = 200;
	}
}