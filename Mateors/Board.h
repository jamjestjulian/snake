#pragma once
#include <vector>
#include "raylib.h"
class Board
{
	public:
	std::vector<std::vector<int>>board;
	Board(int width, int height);
	Board() {}
	void draw(int windowWidth,int windowHeight);


};

