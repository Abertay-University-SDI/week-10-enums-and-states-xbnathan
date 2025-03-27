#pragma once
#include "Framework/GameState.h"
#include "Framework/Input.h"
#include <iostream>

class StateManager : public GameState
{
public:

	StateManager();
	~StateManager();

private:

	StateManager* currentState;

	bool inLevel;
	bool inMenu;
};

