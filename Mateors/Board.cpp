#include "Board.h"

Board::Board(int width, int height)
{
	this->board.resize(width);
	for (auto& col : this->board) {
		col.resize(height);
		for (auto& cell : col) {
			cell = 0;
		}
	}
}

void Board::draw(int windowWidth, int windowHeight)
{
	int size = 40;
	Vector2 windowCenter = Vector2{(float)windowWidth / 2.0f, (float)windowHeight / 2.0f};
	Vector2 boardPosition = Vector2{ windowCenter.x - (size * this->board.size())/2,windowCenter.y - (size * this->board[0].size())/2};
	
	for (int x = 0; x < this->board.size(); x++) {
		for (int y = 0; y < this->board[x].size(); y++) {
			if ((x+y)%2 == 0) {
				DrawRectangle(x * size+ boardPosition.x, y * size + boardPosition.y, size, size, WHITE);

			}
			else {
				DrawRectangle(x * size+ boardPosition.x, y * size+ boardPosition.y, size, size, Color{220,220,220,255});
			}
		}
	}
}
