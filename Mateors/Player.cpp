#include "Player.h"
Texture2D Player::head;
Texture2D Player :: body;
Texture2D Player::body_curved;
Texture2D Player::tail;
Player::Player() {
	this->init();
}
void Player::init() {

	this->segments.clear();
	this->segments.push_back(Vector2{ 4,3 });
	this->segments.push_back(Vector2{ 3,3 });
	this->segments.push_back(Vector2{ 2,3 });
}
void Player::update(float delta) {



}
void Player::draw(int windowWidth, int windowHeight) {
	int size = 40;
	int rotation=0;
	rotation += (this->segments[0].x-this->segments[1].x)*-90;
	Vector2 windowCenter = Vector2{ (float)windowWidth / 2.0f, (float)windowHeight / 2.0f };
	Vector2 boardPosition = Vector2{ windowCenter.x - (size * this->boardSize.x) / 2,windowCenter.y - (size * this->boardSize.y) / 2 };
	//drawing snake
	DrawTexturePro(Player::head, Rectangle{ 0,0,(float)head.width,(float)head.height }, Rectangle{ this->segments[0].x * size + boardPosition.x - (size / 2) ,this->segments[0].y * size + boardPosition.y - (size / 2),(float)head.width,(float)head.height}, Vector2{head.width / 2.0f,head.height / 2.0f}, rotation, WHITE);
	for (int i = 1; i < this->segments.size()-1;i++) {
		DrawTexturePro(body, Rectangle{ 0,0,(float)body.width,(float)body.height }, Rectangle{ this->segments[i].x * size + boardPosition.x - (size / 2),this->segments[i].y * size + boardPosition.y - (size / 2),(float)body.width,(float)body.height}, Vector2{body.width / 2.0f,body.height / 2.0f}, 180, WHITE);
		
				

	}
	DrawTexturePro(Player::tail, Rectangle{ 0,0,(float)tail.width,(float)tail.height }, Rectangle{ this->segments[this->segments.size()-1].x * size + boardPosition.x - (size / 2) ,this->segments[this->segments.size() - 1].y * size + boardPosition.y - (size / 2) ,(float)tail.width,(float)tail.height}, Vector2{tail.width / 2.0f,tail.height / 2.0f}, 180, WHITE);
}
//DrawTexturePro(head, Rectangle{ 0,0,(float)head.width,(float)head.height }, Rectangle{ 100,100,(float)head.width,(float)head.height }, Vector2{ head.width / 2.0f,head.height / 2.0f }, 180, WHITE);
//DrawTexturePro(tail, Rectangle{ 0,0,(float)tail.width,(float)tail.height }, Rectangle{ 500,100,(float)tail.width,(float)tail.height }, Vector2{ tail.width / 2.0f,tail.height / 2.0f }, 180, WHITE);
//DrawTexturePro(body, Rectangle{ 0,0,(float)body.width,(float)body.height }, Rectangle{ 200,100,(float)body.width,(float)body.height }, Vector2{ body.width / 2.0f,body.height / 2.0f }, 180, WHITE);
//DrawTexturePro(body_curved, Rectangle{ 0,0,(float)body_curved.width,(float)body_curved.height }, Rectangle{ 300,100,(float)body_curved.width,(float)body_curved.height }, Vector2{ body_curved.width / 2.0f,body_curved.height / 2.0f }, 180, WHITE);
