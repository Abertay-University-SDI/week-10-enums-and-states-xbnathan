#include "Menu.h"

Menu::Menu(sf::RenderWindow* hwnd, Input* in, GameState* gs)
{
	currentState = gs;
	window = hwnd;
	input = in;

	//currentState = new GameState();
	//currentState = 0;

	menuBG.setFillColor(sf::Color::Yellow);
	menuBG.setSize(sf::Vector2f(window->getSize().x, window->getSize().y));

	gameFont.loadFromFile("font/arial.ttf");

	if (!gameFont.loadFromFile("font/arial.ttf"))
	{
		std::cout << "Failed to load font - arial.ttf" << std::endl;
	}

	gameName.setFont(gameFont);
	beginGameText.setFont(gameFont);

	gameName.setFillColor(sf::Color::Black);
	beginGameText.setFillColor(sf::Color::Black);

	gameName.setString("Generic Name");
	beginGameText.setString("Press enter to start game");

	gameName.setPosition((window->getSize().x / 4) - gameName.getGlobalBounds().width, 0);
	beginGameText.setPosition((window->getSize().x / 4) - gameName.getGlobalBounds().width, window->getSize().y / 4);

	gameName.setCharacterSize(window->getSize().x / 20);
	beginGameText.setCharacterSize(window->getSize().x / 25);
}

Menu::~Menu()
{
}

void Menu::handleInput(float dt)
{
	if (input->isPressed(sf::Keyboard::Enter) && inMenu == false)
	{
		currentState->setCurrentState(State::LEVEL);
		inMenu = true;

		std::cout << "now in level" << std::endl;
	}	
}

void Menu::update(float dt)
{
	menuBG.setSize(sf::Vector2f(window->getSize().x, window->getSize().y));

	gameName.setPosition((window->getSize().x / 2) - beginGameText.getGlobalBounds().width, 0);
	beginGameText.setPosition((window->getSize().x / 2) - beginGameText.getGlobalBounds().width, window->getSize().y / 4);

	gameName.setCharacterSize(window->getSize().x / 20);
	beginGameText.setCharacterSize(window->getSize().x / 25);
}

void Menu::render()
{
	beginDraw();

	window->draw(menuBG);
	window->draw(gameName);
	window->draw(beginGameText);

	endDraw();
}

//void Menu::resize(unsigned int x, unsigned int y)
//{
//	menuBG.setSize(sf::Vector2f(x, y));
//}
