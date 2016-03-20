#pragma once

class Renderer;
class Game
{
	
	Renderer* MainRenderer = nullptr;

	void Initialize();
	void ShutDown();


public:
	Game();
	~Game();
};

