#pragma once
#include "Framework/BaseLevel.h"
#include "StateManager.h"

class Menu : public BaseLevel
{
public:

	//Menu();
	Menu(sf::RenderWindow* hwnd, Input* in, GameState* gs);
	~Menu();

	void handleInput(float dt);
	void update(float dt);
	void render();

	/*void resize(unsigned int x, unsigned int y);*/
private:

	GameState* currentState;

	bool inMenu;

	sf::RectangleShape menuBG;

	sf::Text gameName, beginGameText;
	sf::Font gameFont;
};

