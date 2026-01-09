#include "Command.h"
#include "Player.h"

ICommand::~ICommand()
{
}

void MoveRightCommand::Exec(Player& player)
{
	player.moveRight();
}

void MoveLeftCommand::Exec(Player& player)
{
	player.moveLeft();
}
