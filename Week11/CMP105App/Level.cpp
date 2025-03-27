#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in, GameState* gs, AudioManager* aud)
{
	window = hwnd;
	input = in;
	gameState = gs;
	audio = aud;

	gameManager = new GameState();
	

	// initialise game objects
	audio->addMusic("sfx/cantina.ogg", "cantina");
}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
}

// Update game objects
void Level::update(float dt)
{
	/*switch (gameManager->getCurrentState())
	{
	case State::MENU:
	{
		menu->handleInput(dt);
		menu->update(dt);
		menu->render();
	break;
	}
	case State::LEVEL:
	
		level->handleInput(dt);
		level->update(dt);
		level->render();
	break;
	}*/
}

// Render level
void Level::render()
{
	beginDraw();

	endDraw();
}

