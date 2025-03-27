#include "Player.h"
#include <iostream>

Player::Player(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	playerSpeed = 100.f;
	playerDir = sf::Vector2f(1, 1);

	setSize(sf::Vector2f(100, 100));
	setPosition(sf::Vector2f(50, 50));

	setFillColor(sf::Color::Green);
}


void Player::handleInput(float dt)
{

	if (input->isKeyDown(sf::Keyboard::W))
	{
		move(0, -(playerSpeed * dt));
	}

	if (input->isKeyDown(sf::Keyboard::S))
	{
		move(0, playerSpeed * dt);
	}

	if (input->isKeyDown(sf::Keyboard::A))
	{
		move(-(playerSpeed * dt), 0);
	}

	if (input->isKeyDown(sf::Keyboard::D))
	{
		move(playerSpeed * dt, 0);
	}
}

void Player::update(float dt)
{
	if (getPosition().x + getGlobalBounds().width > window->getSize().x)
	{
		move(-playerSpeed * dt, 0);
	}

	if (getPosition().x < 0)
	{
		move(playerSpeed * dt, 0);
	}

	if (getPosition().y + getGlobalBounds().height > window->getSize().y)
	{
		move(0, -playerSpeed * dt);
	}

	if (getPosition().y < 0)
	{
		move(0, playerSpeed * dt);
	}
}
