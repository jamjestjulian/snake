#include "Game.h"
Game::Game(int width, int height) {
	this->board = Board(width, height);
	
}




void Game::update(float delta)
{
}

void Game::draw(int windowWidth,int windowHeight)
{
	this->board.draw(windowWidth,windowHeight);
	this->player.draw(windowWidth, windowHeight);
}
