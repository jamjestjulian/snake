#pragma once
#include <vector>
#include "raylib.h"
class Player
{
public:
	Player();
	std::vector<Vector2> segments;
	void init();
	void update(float delta);
	void draw(int windowWidth, int windowHeight);
	Vector2 boardSize = Vector2{ 10,10 };
	static Texture2D head;
	static Texture2D body;
	static Texture2D tail;
	static Texture2D body_curved;
};

