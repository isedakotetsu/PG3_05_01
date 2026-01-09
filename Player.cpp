#include "Player.h"
#include "Novice.h"

void Player::Initialize()
{

	pos_ = { 50.0f,50.0f };
	radius_ = 30.f;
	speed_ = 5.0f;

}

void Player::Update()
{
}

void Player::Draw()
{
	Novice::DrawEllipse(
		static_cast<int>(pos_.x),
		static_cast<int>(pos_.y),
		static_cast<int>(radius_),
		static_cast<int>(radius_),
		0.0f, WHITE, kFillModeSolid);

}

void Player::moveRight()
{
	pos_.x += speed_;
}

void Player::moveLeft()
{
	pos_.x -= speed_;
}
