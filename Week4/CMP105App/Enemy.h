#pragma once
#include "Framework/GameObject.h"


class Enemy: public GameObject
{
public:
	Enemy();
	~Enemy();

	void update(float dt) override;
	void setWindow(sf::RenderWindow* hwnd) { window = hwnd; };

	sf::RenderWindow* window;

	float speedX = 200;
	float speedY = 200;

};

