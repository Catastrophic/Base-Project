#pragma once

class Renderer;
class Game
{
	
	Renderer* MainRenderer = nullptr;
public:
	Game();
	~Game();


	void Initialize();
	void ShutDown();
};

