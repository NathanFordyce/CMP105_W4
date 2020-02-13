#pragma once
#include "Framework/GameObject.h"

class Enemy: public GameObject
{
public:
	Enemy(sf::RenderWindow* hwnd);
	~Enemy();

	void update(float dt) override;

	sf::Vector2u pos;

protected:
	sf::RenderWindow* window;
};

