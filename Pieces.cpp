#include "pch.h"

#include "Pieces.h"
#include <string>
#include <cstdlib>

#include "GLogic.h"

using namespace std;


pieces::pieces()
{
}

void pieces::PieceCollection()
{

	GLogic GLogic;
	//Select piece from the 16 AI pieces.
	while (!pieceTaken)
	{
		RndPiece = (rand() % 16) + 1;

		switch (RndPiece)
		{
		case 1 ://Rook1
			for (int i = 1; i < 9; i++)
			{
				for (int j = 1; j < 9; j++)
				{
					if (GLogic.boardArray[i][j] == "rR")
					{
						int RndMove = (rand() % 9) + 1;
						//attack
						if (GLogic.validMove == false)
						{
							GLogic.ValidMoveEnemy(i + RndMove, j);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i + RndMove][j] = GLogic.boardArray[i][j]; 
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.ValidMoveEnemy(i, j + RndMove);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i][j + RndMove] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.ValidMoveEnemy(i - RndMove, j);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i - RndMove][j] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.ValidMoveEnemy(i, j - RndMove);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i][j - RndMove] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						//Movement
						if (GLogic.validMove == false)
						{
							GLogic.Validmove(i + RndMove, j);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i + RndMove][j] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.Validmove(i, j + RndMove);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i][j + RndMove] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.Validmove(i - RndMove, j);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i - RndMove][j] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.Validmove(i, j - RndMove);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i][j - RndMove] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
					}
				}
			}

			break;
		case 2 : //Knight1
			for (int i = 1; i < 9; i++)
			{
				for (int j = 1; j < 9; j++)
				{
					if (GLogic.boardArray[i][j] == "rN")
					{
						//attack
						if (GLogic.validMove == false)
						{
							GLogic.ValidMoveEnemy(i + 2, j + 1);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i + 2][j + 1] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.ValidMoveEnemy(i - 2, j - 1);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i - 2][j - 1] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.ValidMoveEnemy(i + 2, j - 1);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i + 2][j - 1] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.ValidMoveEnemy(i + 2, j - 1);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i + 2][j - 1] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						//move
						if (GLogic.validMove == false)
						{
							GLogic.Validmove(i + 2, j + 1);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i + 2][j + 1] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.Validmove(i - 2, j - 1);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i - 2][j - 1] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.Validmove(i + 2, j - 1);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i + 2][j - 1] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.Validmove(i + 2, j - 1);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i + 2][j - 1] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
					}
				}
			}
			break;
		case 3: //Bishop1
			for (int i = 1; i < 9; i++)
			{
				for (int j = 1; j < 9; j++)
				{
					if (GLogic.boardArray[i][j] == "rB")
					{
						int RndMove = (rand() % 9) + 1;
						//attack
						if (GLogic.validMove == false)
						{
							GLogic.ValidMoveEnemy(i + RndMove, j + RndMove);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i + RndMove][j + RndMove] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.ValidMoveEnemy(i - RndMove, j - RndMove);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i - RndMove][j - RndMove] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						//move
						if (GLogic.validMove == false)
						{
							GLogic.Validmove(i + RndMove, j + RndMove);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i + RndMove][j + RndMove] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.Validmove(i - RndMove, j - RndMove);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i - RndMove][j - RndMove] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
					}
				}
			}
			break;
		case 4://Queen
			for (int i = 1; i < 9; i++)
			{
				for (int j = 1; j < 9; j++)
				{
					if (GLogic.boardArray[i][j] == "rQ")
					{
						int RndMove = (rand() % 9) + 1;
						//attack
						if (GLogic.validMove == false)
						{
							GLogic.ValidMoveEnemy(i + RndMove, j);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i + RndMove][j] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.ValidMoveEnemy(i, j + RndMove);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i][j + RndMove] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.ValidMoveEnemy(i - RndMove, j);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i - RndMove][j] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.ValidMoveEnemy(i, j - RndMove);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i][j - RndMove] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.ValidMoveEnemy(i + RndMove, j + RndMove);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i + RndMove][j + RndMove] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.ValidMoveEnemy(i - RndMove, j - RndMove);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i - RndMove][j - RndMove] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						//move
						if (GLogic.validMove == false)
						{
							GLogic.Validmove(i + RndMove, j);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i + RndMove][j] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.Validmove(i, j + RndMove);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i][j + RndMove] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.Validmove(i - RndMove, j);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i - RndMove][j] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.Validmove(i, j - RndMove);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i][j - RndMove] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.Validmove(i + RndMove, j + RndMove);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i + RndMove][j + RndMove] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.Validmove(i - RndMove, j - RndMove);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i - RndMove][j - RndMove] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
					}
				}
			}
			break;
		case 5://King
			for (int i = 1; i < 9; i++)
			{
				for (int j = 1; j < 9; j++)
				{
					if (GLogic.boardArray[i][j] == "rK")
					{
						//attack
						if (GLogic.validMove == false)
						{
							GLogic.ValidMoveEnemy(i + 1, j);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i + 1][j] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.ValidMoveEnemy(i, j + 1);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i][j + 1] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.ValidMoveEnemy(i - 1, j);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i - 1][j] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.ValidMoveEnemy(i, j - 1);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i][j - 1] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.ValidMoveEnemy(i + 1, j + 1);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i + 1][j + 1] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.ValidMoveEnemy(i - 1, j - 1);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i - 1][j - 1] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						//move
						if (GLogic.validMove == false)
						{
							GLogic.Validmove(i + 1, j);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i + 1][j] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.Validmove(i, j + 1);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i][j + 1] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.Validmove(i - 1, j);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i - 1][j] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.Validmove(i, j - 1);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i][j - 1] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.Validmove(i + 1, j + 1);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i + 1][j + 1] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.Validmove(i - 1, j - 1);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i - 1][j - 1] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
					}
				}
			}
			break;
		case 6://Bishop2
			for (int i = 1; i < 9; i++)
			{
				for (int j = 1; j < 9; j++)
				{
					if (GLogic.boardArray[i][j] == "rB2")
					{
						int RndMove = (rand() % 9) + 1;

						//attack
						if (GLogic.validMove == false)
						{
							GLogic.ValidMoveEnemy(i + RndMove, j + RndMove);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i + RndMove][j + RndMove] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.ValidMoveEnemy(i - RndMove, j - RndMove);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i - RndMove][j - RndMove] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						//move
						if (GLogic.validMove == false)
						{
							GLogic.Validmove(i + RndMove, j + RndMove);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i + RndMove][j + RndMove] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.Validmove(i - RndMove, j - RndMove);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i - RndMove][j - RndMove] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
					}
				}
			}
			break;
		case 7://Knight2
			for (int i = 1; i < 9; i++)
			{
				for (int j = 1; j < 9; j++)
				{
					if (GLogic.boardArray[i][j] == "rN2")
					{
						//attack
						if (GLogic.validMove == false)
						{
							GLogic.ValidMoveEnemy(i + 2, j + 1);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i + 2][j + 1] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.ValidMoveEnemy(i - 2, j - 1);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i - 2][j - 1] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.ValidMoveEnemy(i + 2, j - 1);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i + 2][j - 1] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.ValidMoveEnemy(i + 2, j - 1);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i + 2][j - 1] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						//move
						if (GLogic.validMove == false)
						{
							GLogic.Validmove(i + 2, j + 1);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i + 2][j + 1] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.Validmove(i - 2, j - 1);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i - 2][j - 1] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.Validmove(i + 2, j - 1);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i + 2][j - 1] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.Validmove(i + 2, j - 1);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i + 2][j - 1] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
					}
				}
			}
			break;
		case 8://Rook2
			for (int i = 1; i < 9; i++)
			{
				for (int j = 1; j < 9; j++)
				{
					if (GLogic.boardArray[i][j] == "rR2")
					{
						int RndMove = (rand() % 9) + 1;

						//attack
						if (GLogic.validMove == false)
						{
							GLogic.ValidMoveEnemy(i + RndMove, j);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i + RndMove][j] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.ValidMoveEnemy(i, j + RndMove);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i][j + RndMove] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.ValidMoveEnemy(i - RndMove, j);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i - RndMove][j] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.ValidMoveEnemy(i, j - RndMove);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i][j - RndMove] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						//Movement
						if (GLogic.validMove == false)
						{
							GLogic.Validmove(i + RndMove, j);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i + RndMove][j] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.Validmove(i, j + RndMove);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i][j + RndMove] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.Validmove(i - RndMove, j);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i - RndMove][j] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.Validmove(i, j - RndMove);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i][j - RndMove] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
					}
				}
			}
			break;
			//Moves for pawns 1-9 repeated
		case 9:
			for (int i = 1; i < 9; i++)
			{
				for (int j = 1; j < 9; j++)
				{
					if (GLogic.boardArray[i][j] == "rP1")
					{
						if (GLogic.validMove == false)
						{
							GLogic.ValidMoveEnemy(i + 1, j + 1);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i + 1][j + 1] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] =  " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.ValidMoveEnemy(i + 1, j - 1);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i + 1][j - 1] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.Validmove(i + 1, j);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i + 1][j] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
					}
				}
			}
			break;
		case 10:
			for (int i = 1; i < 9; i++)
			{
				for (int j = 1; j < 9; j++)
				{
					if (GLogic.boardArray[i][j] == "rP2")
					{
						if (GLogic.validMove == false)
						{
							GLogic.ValidMoveEnemy(i + 1, j + 1);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i + 1][j + 1] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						
						if (GLogic.validMove == false)
						{
							GLogic.ValidMoveEnemy(i + 1, j - 1);
						}

						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i + 1][j - 1] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						
						if (GLogic.validMove == false)
						{
							GLogic.Validmove(i + 1, j);
						}

						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i + 1][j] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
					}
				}
			}
			break;
		case 11:
			for (int i = 1; i < 9; i++)
			{
				for (int j = 1; j < 9; j++)
				{
					if (GLogic.boardArray[i][j] == "rP3")
					{
						if (GLogic.validMove == false)
						{
							GLogic.ValidMoveEnemy(i + 1, j + 1);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i + 1][j + 1] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.ValidMoveEnemy(i + 1, j - 1);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i + 1][j - 1] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.Validmove(i + 1, j);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i + 1][j] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
					}
				}
			}
			break;
		case 12:
			for (int i = 1; i < 9; i++)
			{
				for (int j = 1; j < 9; j++)
				{
					if (GLogic.boardArray[i][j] == "rP4")
					{
						if (GLogic.validMove == false)
						{
							GLogic.ValidMoveEnemy(i + 1, j + 1);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i + 1][j + 1] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.ValidMoveEnemy(i + 1, j - 1);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i + 1][j - 1] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.Validmove(i + 1, j);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i + 1][j] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
					}
				}
			}
			break;
		case 13:
			for (int i = 1; i < 9; i++)
			{
				for (int j = 1; j < 9; j++)
				{
					if (GLogic.boardArray[i][j] == "rP5")
					{
						if (GLogic.validMove == false)
						{
							GLogic.ValidMoveEnemy(i + 1, j + 1);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i + 1][j + 1] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.ValidMoveEnemy(i + 1, j - 1);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i + 1][j - 1] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.Validmove(i + 1, j);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i + 1][j] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
					}
				}
			}
			break;
		case 14:
			for (int i = 1; i < 9; i++)
			{
				for (int j = 1; j < 9; j++)
				{
					if (GLogic.boardArray[i][j] == "rP6")
					{
						if (GLogic.validMove == false)
						{
							GLogic.ValidMoveEnemy(i + 1, j + 1);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i + 1][j + 1] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.ValidMoveEnemy(i + 1, j - 1);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i + 1][j - 1] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.Validmove(i + 1, j);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i + 1][j] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
					}
				}
			}
			break;
		case 15:
			for (int i = 1; i < 9; i++)
			{
				for (int j = 1; j < 9; j++)
				{
					if (GLogic.boardArray[i][j] == "rP7")
					{
						if (GLogic.validMove == false)
						{
							GLogic.ValidMoveEnemy(i + 1, j + 1);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i + 1][j + 1] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.ValidMoveEnemy(i + 1, j - 1);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i + 1][j - 1] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.Validmove(i + 1, j);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i + 1][j] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
					}
				}
			}
			break;
		case 16:
			for (int i = 1; i < 9; i++)
			{
				for (int j = 1; j < 9; j++)
				{
					if (GLogic.boardArray[i][j] == "rP8")
					{
						if (GLogic.validMove == false)
						{
							GLogic.ValidMoveEnemy(i + 1, j + 1);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i + 1][j + 1] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.ValidMoveEnemy(i + 1, j - 1);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i + 1][j - 1] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
						if (GLogic.validMove == false)
						{
							GLogic.Validmove(i + 1, j);
						}
						if (GLogic.validMove == true)
						{
							GLogic.boardArray[i + 1][j] = GLogic.boardArray[i][j];
							GLogic.boardArray[j][i] = " * ";
							pieceTaken = true;
						}
					}
				}
			}
			break;
		default:
			printf("gameover");
			break;
		}
	}

}


