#pragma once
#include "Framework/BaseLevel.h"
#include "Player.h"

class GameLevel : BaseLevel
{
public:

	GameLevel(sf::RenderWindow* hwnd, Input* in);
	~GameLevel();

	void handleInput(float dt);
	void update(float dt);
	void render();

private:
	sf::RectangleShape levelBG;
	Player* player;
};

