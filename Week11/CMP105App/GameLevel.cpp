#include "GameLevel.h"
#include <iostream>

GameLevel::GameLevel(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	player = new Player(window, input);

	levelBG.setFillColor(sf::Color::White);
	levelBG.setSize(sf::Vector2f(window->getSize().x, window->getSize().y));
}

GameLevel::~GameLevel()
{
}

void GameLevel::handleInput(float dt)
{
	player->handleInput(dt);
}

void GameLevel::update(float dt)
{
	levelBG.setSize(sf::Vector2f(window->getSize().x, window->getSize().y));

	player->update(dt);
}

void GameLevel::render()
{
	beginDraw();

	window->draw(levelBG);
	window->draw(*player);

	endDraw();
}
