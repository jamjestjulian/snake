#pragma once
#include "Player.h"
#include "Board.h"
class Game
{

	Player player;
	Board board;
public:
	Game(int width, int height);
	void update(float delta);
	void draw(int windowWidth, int windowHeight);


};