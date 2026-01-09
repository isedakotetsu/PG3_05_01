#include "GameScene.h"

void GameScene::Initialize()
{

	inputHandler_ = new InputHandler();


	//Assign command
	inputHandler_->AssignMoveLeftCommand2PressKeyA();
	inputHandler_->AssignMoveRightCommand2PressKeyD();

	player_ = new Player();

	player_->Initialize();
}

void GameScene::Update()
{

	ICommand_ = inputHandler_->HandleInput();

	if (ICommand_)
	{
		ICommand_->Exec(*player_);
	}

	player_->Update();

}

void GameScene::Draw()
{

	player_->Draw();

}

GameScene::GameScene()
{
}