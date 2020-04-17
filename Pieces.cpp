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
		case '1'://Rook1
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					if (GLogic.boardArray[i][j] = rR)
					{
						int RndMove = (rand() % 8) + 1;
						//attack
						if (GLogic.validMove = false)
						{
							GLogic.ValidMoveEnemy(i + RndMove, j);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i + RndMove][j];
						}
						if (GLogic.validMove = false)
						{
							GLogic.ValidMoveEnemy(i, j + RndMove);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i][j + RndMove];
						}
						if (GLogic.validMove = false)
						{
							GLogic.ValidMoveEnemy(i - RndMove, j);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i - RndMove][j];
						}
						if (GLogic.validMove = false)
						{
							GLogic.ValidMoveEnemy(i, j - RndMove);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i][j - RndMove];
						}
						//Movement
						if (GLogic.validMove = false)
						{
							GLogic.Validmove(i + RndMove, j);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i + RndMove][j];
						}
						if (GLogic.validMove = false)
						{
							GLogic.Validmove(i, j + RndMove);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i][j + RndMove];
						}
						if (GLogic.validMove = false)
						{
							GLogic.Validmove(i - RndMove, j);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i - RndMove][j];
						}
						if (GLogic.validMove = false)
						{
							GLogic.Validmove(i, j - RndMove);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i][j - RndMove];
						}
					}
				}
			}

			break;
		case '2': //Knight1
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					if (GLogic.boardArray[i][j] = rN)
					{
						//attack
						if (GLogic.validMove = false)
						{
							GLogic.ValidMoveEnemy(i + 2, j + 1);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i + 2][j + 1];
						}
						if (GLogic.validMove = false)
						{
							GLogic.ValidMoveEnemy(i - 2, j - 1);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i - 2][j - 1];
						}
						if (GLogic.validMove = false)
						{
							GLogic.ValidMoveEnemy(i + 2, j - 1);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i + 2][j - 1];
						}
						if (GLogic.validMove = false)
						{
							GLogic.ValidMoveEnemy(i + 2, j - 1);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i + 2][j - 1];
						}
						//move
						if (GLogic.validMove = false)
						{
							GLogic.Validmove(i + 2, j + 1);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i + 2][j + 1];
						}
						if (GLogic.validMove = false)
						{
							GLogic.Validmove(i - 2, j - 1);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i - 2][j - 1];
						}
						if (GLogic.validMove = false)
						{
							GLogic.Validmove(i + 2, j - 1);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i + 2][j - 1];
						}
						if (GLogic.validMove = false)
						{
							GLogic.Validmove(i + 2, j - 1);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i + 2][j - 1];
						}

					};
				};
			};
			break;
		case '3': //Bishop1
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					if (GLogic.boardArray[i][j] = rB)
					{
						int RndMove = (rand() % 8) + 1;
						//attack
						if (GLogic.validMove = false)
						{
							GLogic.ValidMoveEnemy(i + RndMove, j + RndMove);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i + RndMove][j + RndMove];
						}
						if (GLogic.validMove = false)
						{
							GLogic.ValidMoveEnemy(i - RndMove, j - RndMove);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i - RndMove][j - RndMove];
						}
						//move
						if (GLogic.validMove = false)
						{
							GLogic.Validmove(i + RndMove, j + RndMove);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i + RndMove][j + RndMove];
						}
						if (GLogic.validMove = false)
						{
							GLogic.Validmove(i - RndMove, j - RndMove);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i - RndMove][j - RndMove];
						}
					};
				};
			};
			break;
		case '4'://Queen
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					if (GLogic.boardArray[i][j] = rQ)
					{
						int RndMove = (rand() % 8) + 1;
						//attack
						if (GLogic.validMove = false)
						{
							GLogic.ValidMoveEnemy(i + RndMove, j);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i + RndMove][j];
						}
						if (GLogic.validMove = false)
						{
							GLogic.ValidMoveEnemy(i, j + RndMove);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i][j + RndMove];
						}
						if (GLogic.validMove = false)
						{
							GLogic.ValidMoveEnemy(i - RndMove, j);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i - RndMove][j];
						}
						if (GLogic.validMove = false)
						{
							GLogic.ValidMoveEnemy(i, j - RndMove);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i][j - RndMove];
						}
						if (GLogic.validMove = false)
						{
							GLogic.ValidMoveEnemy(i + RndMove, j + RndMove);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i + RndMove][j + RndMove];
						}
						if (GLogic.validMove = false)
						{
							GLogic.ValidMoveEnemy(i - RndMove, j - RndMove);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i - RndMove][j - RndMove];
						}
						//move
						if (GLogic.validMove = false)
						{
							GLogic.Validmove(i + RndMove, j);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i + RndMove][j];
						}
						if (GLogic.validMove = false)
						{
							GLogic.Validmove(i, j + RndMove);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i][j + RndMove];
						}
						if (GLogic.validMove = false)
						{
							GLogic.Validmove(i - RndMove, j);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i - RndMove][j];
						}
						if (GLogic.validMove = false)
						{
							GLogic.Validmove(i, j - RndMove);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i][j - RndMove];
						}
						if (GLogic.validMove = false)
						{
							GLogic.Validmove(i + RndMove, j + RndMove);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i + RndMove][j + RndMove];
						}
						if (GLogic.validMove = false)
						{
							GLogic.Validmove(i - RndMove, j - RndMove);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i - RndMove][j - RndMove];
						}
					};
				}
			}
			break;
		case '5'://King
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					if (GLogic.boardArray[i][j] = rK)
					{
						//attack
						if (GLogic.validMove = false)
						{
							GLogic.ValidMoveEnemy(i + 1, j);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i + 1][j];
						}
						if (GLogic.validMove = false)
						{
							GLogic.ValidMoveEnemy(i, j + 1);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i][j + 1];
						}
						if (GLogic.validMove = false)
						{
							GLogic.ValidMoveEnemy(i - 1, j);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i - 1][j];
						}
						if (GLogic.validMove = false)
						{
							GLogic.ValidMoveEnemy(i, j - 1);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i][j - 1];
						}
						if (GLogic.validMove = false)
						{
							GLogic.ValidMoveEnemy(i + 1, j + 1);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i + 1][j + 1];
						}
						if (GLogic.validMove = false)
						{
							GLogic.ValidMoveEnemy(i - 1, j - 1);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i - 1][j - 1];
						}
						//move
						if (GLogic.validMove = false)
						{
							GLogic.Validmove(i + 1, j);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i + 1][j];
						}
						if (GLogic.validMove = false)
						{
							GLogic.Validmove(i, j + 1);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i][j + 1];
						}
						if (GLogic.validMove = false)
						{
							GLogic.Validmove(i - 1, j);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i - 1][j];
						}
						if (GLogic.validMove = false)
						{
							GLogic.Validmove(i, j - 1);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i][j - 1];
						}
						if (GLogic.validMove = false)
						{
							GLogic.Validmove(i + 1, j + 1);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i + 1][j + 1];
						}
						if (GLogic.validMove = false)
						{
							GLogic.Validmove(i - 1, j - 1);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i - 1][j - 1];
						}
					};
				}
			}
			break;
		case '6'://Bishop2
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					if (GLogic.boardArray[i][j] = rB2)
					{
						int RndMove = (rand() % 8) + 1;

						//attack
						if (GLogic.validMove = false)
						{
							GLogic.ValidMoveEnemy(i + RndMove, j + RndMove);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i + RndMove][j + RndMove];
						}
						if (GLogic.validMove = false)
						{
							GLogic.ValidMoveEnemy(i - RndMove, j - RndMove);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i - RndMove][j - RndMove];
						}
						//move
						if (GLogic.validMove = false)
						{
							GLogic.Validmove(i + RndMove, j + RndMove);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i + RndMove][j + RndMove];
						}
						if (GLogic.validMove = false)
						{
							GLogic.Validmove(i - RndMove, j - RndMove);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i - RndMove][j - RndMove];
						}
					};
				}
			}
			break;
		case '7'://Knight2
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					if (GLogic.boardArray[i][j] = rN2)
					{
						//attack
						if (GLogic.validMove = false)
						{
							GLogic.ValidMoveEnemy(i + 2, j + 1);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i + 2][j + 1];
						}
						if (GLogic.validMove = false)
						{
							GLogic.ValidMoveEnemy(i - 2, j - 1);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i - 2][j - 1];
						}
						if (GLogic.validMove = false)
						{
							GLogic.ValidMoveEnemy(i + 2, j - 1);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i + 2][j - 1];
						}
						if (GLogic.validMove = false)
						{
							GLogic.ValidMoveEnemy(i + 2, j - 1);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i + 2][j - 1];
						}
						//move
						if (GLogic.validMove = false)
						{
							GLogic.Validmove(i + 2, j + 1);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i + 2][j + 1];
						}
						if (GLogic.validMove = false)
						{
							GLogic.Validmove(i - 2, j - 1);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i - 2][j - 1];
						}
						if (GLogic.validMove = false)
						{
							GLogic.Validmove(i + 2, j - 1);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i + 2][j - 1];
						}
						if (GLogic.validMove = false)
						{
							GLogic.Validmove(i + 2, j - 1);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i + 2][j - 1];
						}
					};
				}
			}
			break;
		case '8'://Rook2
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					if (GLogic.boardArray[i][j] = rR2)
					{
						int RndMove = (rand() % 8) + 1;

						//attack
						if (GLogic.validMove = false)
						{
							GLogic.ValidMoveEnemy(i + RndMove, j);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i + RndMove][j];
						}
						if (GLogic.validMove = false)
						{
							GLogic.ValidMoveEnemy(i, j + RndMove);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i][j + RndMove];
						}
						if (GLogic.validMove = false)
						{
							GLogic.ValidMoveEnemy(i - RndMove, j);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i - RndMove][j];
						}
						if (GLogic.validMove = false)
						{
							GLogic.ValidMoveEnemy(i, j - RndMove);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i][j - RndMove];
						}
						//Movement
						if (GLogic.validMove = false)
						{
							GLogic.Validmove(i + RndMove, j);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i + RndMove][j];
						}
						if (GLogic.validMove = false)
						{
							GLogic.Validmove(i, j + RndMove);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i][j + RndMove];
						}
						if (GLogic.validMove = false)
						{
							GLogic.Validmove(i - RndMove, j);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i - RndMove][j];
						}
						if (GLogic.validMove = false)
						{
							GLogic.Validmove(i, j - RndMove);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i][j - RndMove];
						}
					};
				}
			}
			break;
			//Moves for pawns 1-8 repeated
		case '9':
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					if (GLogic.boardArray[i][j] = rP1)
					{
						if (GLogic.validMove = false)
						{
							GLogic.ValidMoveEnemy(i + 1, j + 1);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i + 1][j + 1];
						}
						if (GLogic.validMove = false)
						{
							GLogic.ValidMoveEnemy(i + 1, j - 1);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i + 1][j - 1];
						}
						if (GLogic.validMove = false)
						{
							GLogic.Validmove(i + 1, j);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i + 1][j];
						}
					};
				}
			}
			break;
		case '10':
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					if (GLogic.boardArray[i][j] = rP2)
					{
						if (GLogic.validMove = false)
						{
							GLogic.ValidMoveEnemy(i + 1, j + 1);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i + 1][j + 1];
						}
						if (GLogic.validMove = false)
						{
							GLogic.ValidMoveEnemy(i + 1, j - 1);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i + 1][j - 1];
						}
						if (GLogic.validMove = false)
						{
							GLogic.Validmove(i + 1, j);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i + 1][j];
						}
					};
				}
			}
			break;
		case '11':
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					if (GLogic.boardArray[i][j] = rP3)
					{
						if (GLogic.validMove = false)
						{
							GLogic.ValidMoveEnemy(i + 1, j + 1);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i + 1][j + 1];
						}
						if (GLogic.validMove = false)
						{
							GLogic.ValidMoveEnemy(i + 1, j - 1);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i + 1][j - 1];
						}
						if (GLogic.validMove = false)
						{
							GLogic.Validmove(i + 1, j);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i + 1][j];
						}
					};
				}
			}
			break;
		case '12':
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					if (GLogic.boardArray[i][j] = rP4)
					{
						if (GLogic.validMove = false)
						{
							GLogic.ValidMoveEnemy(i + 1, j + 1);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i + 1][j + 1];
						}
						if (GLogic.validMove = false)
						{
							GLogic.ValidMoveEnemy(i + 1, j - 1);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i + 1][j - 1];
						}
						if (GLogic.validMove = false)
						{
							GLogic.Validmove(i + 1, j);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i + 1][j];
						}
					};
				}
			}
			break;
		case '13':
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					if (GLogic.boardArray[i][j] = rP5)
					{
						if (GLogic.validMove = false)
						{
							GLogic.ValidMoveEnemy(i + 1, j + 1);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i + 1][j + 1];
						}
						if (GLogic.validMove = false)
						{
							GLogic.ValidMoveEnemy(i + 1, j - 1);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i + 1][j - 1];
						}
						if (GLogic.validMove = false)
						{
							GLogic.Validmove(i + 1, j);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i + 1][j];
						}
					};
				}
			}
			break;
		case '14':
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					if (GLogic.boardArray[i][j] = rP6)
					{
						if (GLogic.validMove = false)
						{
							GLogic.ValidMoveEnemy(i + 1, j + 1);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i + 1][j + 1];
						}
						if (GLogic.validMove = false)
						{
							GLogic.ValidMoveEnemy(i + 1, j - 1);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i + 1][j - 1];
						}
						if (GLogic.validMove = false)
						{
							GLogic.Validmove(i + 1, j);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i + 1][j];
						}
					};
				}
			}
			break;
		case '15':
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					if (GLogic.boardArray[i][j] = rP7)
					{
						if (GLogic.validMove = false)
						{
							GLogic.ValidMoveEnemy(i + 1, j + 1);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i + 1][j + 1];
						}
						if (GLogic.validMove = false)
						{
							GLogic.ValidMoveEnemy(i + 1, j - 1);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i + 1][j - 1];
						}
						if (GLogic.validMove = false)
						{
							GLogic.Validmove(i + 1, j);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i + 1][j];
						}
					};
				}
			}
			break;
		case '16':
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					if (GLogic.boardArray[i][j] = rP8)
					{
						if (GLogic.validMove = false)
						{
							GLogic.ValidMoveEnemy(i + 1, j + 1);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i + 1][j + 1];
						}
						if (GLogic.validMove = false)
						{
							GLogic.ValidMoveEnemy(i + 1, j - 1);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i + 1][j - 1];
						}
						if (GLogic.validMove = false)
						{
							GLogic.Validmove(i + 1, j);
						}
						if (GLogic.validMove = true)
						{
							GLogic.boardArray[i + 1][j];
						}
					};
				}
			}
			break;
		}
	}

}


