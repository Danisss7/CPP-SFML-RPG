#pragma once

#include "GameState.h"
#include "MainMenuState.h"

class Game
{
private:
	//variables
	GraphicsSettings gfxSettings;
	StateData stateData;
	sf::RenderWindow* window;
	sf::Event sfEvent;

	sf::Clock dtClock;
	float dt;

	std::stack<State*> states;

	std::map<std::string, int> supportedKeys;

	float gridSize;

	//initialization
	void initVariables();
	void initGraphicsSettings();
	void initWindow();
	void initKeys();
	void initStateData();
	void initStates();

public:
	//constructors/destructors
	Game();
	virtual ~Game();

	//functions

	//regular functions
	void endApplication();
	
	//uppdate
	void updateDt();
	void updateSFMLEvents();
	void update();

	//render
	void render();

	//core
	void run();
};

