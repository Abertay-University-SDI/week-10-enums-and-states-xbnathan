#pragma once
#include "Framework/GameObject.h"

class Player : public GameObject
{
public:

	Player(sf::RenderWindow* hwnd, Input* in);

	void handleInput(float dt) override;
	void update(float dt) override;

private:
	sf::Vector2f playerDir;
	float playerSpeed;
};

