#pragma once
struct Vector2
{
	float x;
	float y;
};

class Player
{
public:

	void Initialize();
	void Update();
	void Draw();

	void moveRight();
	void moveLeft();


private:

	Vector2 pos_;

	float radius_;
	float speed_;

};