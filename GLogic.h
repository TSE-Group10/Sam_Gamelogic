#pragma once
#include <string>

class GLogic
{
private:


public:
	GLogic();

	std::string boardArray[10][10];

	bool done = false; //Game loop variable
	bool PlayerTurn = true; //Check for player turn variable
	bool validMove = false; //checking to make sure moves are valid

	void Validmove(int X, int Y);
	void ValidMoveEnemy(int X, int Y);
};
