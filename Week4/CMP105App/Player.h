#pragma once
#include "Framework/GameObject.h"

class Player: public GameObject
{
public:

	Player();
	~Player();

	void handleInput(float dt) override;

	//sf::Vector2f coord;

	float speedX;
	float speedY;
};

