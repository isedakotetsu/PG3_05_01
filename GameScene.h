#pragma once
#include "IScene.h"
#include "InputHandler.h"
#include "Command.h"
#include "Player.h"

class GameScene : public IScene
{
private:

	InputHandler* inputHandler_ = nullptr;
	ICommand* ICommand_ = nullptr;
	Player* player_;

public:
	GameScene();

	void Initialize() override;
	void Update()override;
	void Draw()override;

};
