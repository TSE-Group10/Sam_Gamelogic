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
					if (boardArray[i][j] == "rR")
					{
						int RndMove = (rand() % 9) + 1;
						//attack
						if (validMove == false)
						{
							ValidMoveEnemy(i + RndMove, j);
						}
						if (validMove == true)
						{
							boardArray[i + RndMove][j] = boardArray[i][j]; 
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}
						if (validMove == false)
						{
							ValidMoveEnemy(i, j + RndMove);
						}
						if (validMove == true)
						{
							boardArray[i][j + RndMove] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}
						if (validMove == false)
						{
							ValidMoveEnemy(i - RndMove, j);
						}
						if (validMove == true)
						{
							boardArray[i - RndMove][j] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}
						if (validMove == false)
						{
							ValidMoveEnemy(i, j - RndMove);
						}
						if (validMove == true)
						{
							boardArray[i][j - RndMove] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}
						//Movement
						if (validMove == false)
						{
							Validmove(i + RndMove, j);
						}
						if (validMove == true)
						{
							boardArray[i + RndMove][j] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}
						if (validMove == false)
						{
							Validmove(i, j + RndMove);
						}
						if (validMove == true)
						{
							boardArray[i][j + RndMove] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}
						if (validMove == false)
						{
							Validmove(i - RndMove, j);
						}
						if (validMove == true)
						{
							boardArray[i - RndMove][j] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}
						if (validMove == false)
						{
							Validmove(i, j - RndMove);
						}
						if (validMove == true)
						{
							boardArray[i][j - RndMove] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
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
					if (boardArray[i][j] == "rN")
					{
						//attack
						if (validMove == false)
						{
							ValidMoveEnemy(i + 2, j + 1);
						}
						if (validMove == true)
						{
							boardArray[i + 2][j + 1] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}
						if (validMove == false)
						{
							ValidMoveEnemy(i - 2, j - 1);
						}
						if (validMove == true)
						{
							boardArray[i - 2][j - 1] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}
						if (validMove == false)
						{
							ValidMoveEnemy(i + 2, j - 1);
						}
						if (validMove == true)
						{
							boardArray[i + 2][j - 1] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}
						if (validMove == false)
						{
							ValidMoveEnemy(i + 2, j - 1);
						}
						if (validMove == true)
						{
							boardArray[i + 2][j - 1] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}
						//move
						if (validMove == false)
						{
							Validmove(i + 2, j + 1);
						}
						if (validMove == true)
						{
							boardArray[i + 2][j + 1] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}
						if (validMove == false)
						{
							Validmove(i - 2, j - 1);
						}
						if (validMove == true)
						{
							boardArray[i - 2][j - 1] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}
						if (validMove == false)
						{
							Validmove(i + 2, j - 1);
						}
						if (validMove == true)
						{
							boardArray[i + 2][j - 1] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}
						if (validMove == false)
						{
							Validmove(i + 2, j - 1);
						}
						if (validMove == true)
						{
							boardArray[i + 2][j - 1] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
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
					if (boardArray[i][j] == "rB")
					{
						int RndMove = (rand() % 9) + 1;
						//attack
						if (validMove == false)
						{
							ValidMoveEnemy(i + RndMove, j + RndMove);
						}
						if (validMove == true)
						{
							boardArray[i + RndMove][j + RndMove] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}
						if (validMove == false)
						{
							ValidMoveEnemy(i - RndMove, j - RndMove);
						}
						if (validMove == true)
						{
							boardArray[i - RndMove][j - RndMove] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}
						//move
						if (validMove == false)
						{
							Validmove(i + RndMove, j + RndMove);
						}
						if (validMove == true)
						{
							boardArray[i + RndMove][j + RndMove] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}
						if (validMove == false)
						{
							Validmove(i - RndMove, j - RndMove);
						}
						if (validMove == true)
						{
							boardArray[i - RndMove][j - RndMove] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
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
					if (boardArray[i][j] == "rQ")
					{
						int RndMove = (rand() % 9) + 1;
						//attack
						if (validMove == false)
						{
							ValidMoveEnemy(i + RndMove, j);
						}
						if (validMove == true)
						{
							boardArray[i + RndMove][j] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}
						if (validMove == false)
						{
							ValidMoveEnemy(i, j + RndMove);
						}
						if (validMove == true)
						{
							boardArray[i][j + RndMove] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}
						if (validMove == false)
						{
							ValidMoveEnemy(i - RndMove, j);
						}
						if (validMove == true)
						{
							boardArray[i - RndMove][j] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}
						if (validMove == false)
						{
							ValidMoveEnemy(i, j - RndMove);
						}
						if (validMove == true)
						{
							boardArray[i][j - RndMove] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}
						if (validMove == false)
						{
							ValidMoveEnemy(i + RndMove, j + RndMove);
						}
						if (validMove == true)
						{
							boardArray[i + RndMove][j + RndMove] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}
						if (validMove == false)
						{
							ValidMoveEnemy(i - RndMove, j - RndMove);
						}
						if (validMove == true)
						{
							boardArray[i - RndMove][j - RndMove] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}
						//move
						if (validMove == false)
						{
							Validmove(i + RndMove, j);
						}
						if (validMove == true)
						{
							boardArray[i + RndMove][j] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}
						if (validMove == false)
						{
							Validmove(i, j + RndMove);
						}
						if (validMove == true)
						{
							boardArray[i][j + RndMove] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}
						if (validMove == false)
						{
							Validmove(i - RndMove, j);
						}
						if (validMove = true)
						{
							boardArray[i - RndMove][j] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}
						if (validMove == false)
						{
							Validmove(i, j - RndMove);
						}
						if (validMove == true)
						{
							boardArray[i][j - RndMove] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}
						if (validMove == false)
						{
							Validmove(i + RndMove, j + RndMove);
						}
						if (validMove == true)
						{
							boardArray[i + RndMove][j + RndMove] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}
						if (validMove == false)
						{
							Validmove(i - RndMove, j - RndMove);
						}
						if (validMove == true)
						{
							boardArray[i - RndMove][j - RndMove] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
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
					if (boardArray[i][j] == "rK")
					{
						//attack
						if (validMove == false)
						{
							ValidMoveEnemy(i + 1, j);
						}
						if (validMove == true)
						{
							boardArray[i + 1][j] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}
						if (validMove == false)
						{
							ValidMoveEnemy(i, j + 1);
						}
						if (validMove == true)
						{
							boardArray[i][j + 1] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}
						if (validMove == false)
						{
							ValidMoveEnemy(i - 1, j);
						}
						if (validMove == true)
						{
							boardArray[i - 1][j] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}
						if (validMove == false)
						{
							ValidMoveEnemy(i, j - 1);
						}
						if (validMove == true)
						{
							boardArray[i][j - 1] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}
						if (validMove == false)
						{
							ValidMoveEnemy(i + 1, j + 1);
						}
						if (validMove == true)
						{
							boardArray[i + 1][j + 1] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}
						if (validMove == false)
						{
							ValidMoveEnemy(i - 1, j - 1);
						}
						if (validMove == true)
						{
							boardArray[i - 1][j - 1] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}
						//move
						if (validMove == false)
						{
							Validmove(i + 1, j);
						}
						if (validMove == true)
						{
							boardArray[i + 1][j] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}
						if (validMove == false)
						{
							Validmove(i, j + 1);
						}
						if (validMove == true)
						{
							boardArray[i][j + 1] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}
						if (validMove == false)
						{
							Validmove(i - 1, j);
						}
						if (validMove == true)
						{
							boardArray[i - 1][j] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}
						if (validMove == false)
						{
							Validmove(i, j - 1);
						}
						if (validMove == true)
						{
							boardArray[i][j - 1] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}
						if (validMove == false)
						{
							Validmove(i + 1, j + 1);
						}
						if (validMove == true)
						{
							boardArray[i + 1][j + 1] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}
						if (validMove == false)
						{
							Validmove(i - 1, j - 1);
						}
						if (validMove == true)
						{
							boardArray[i - 1][j - 1] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
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
					if (boardArray[i][j] == "rB2")
					{
						int RndMove = (rand() % 9) + 1;

						//attack
						if (validMove == false)
						{
							ValidMoveEnemy(i + RndMove, j + RndMove);
						}
						if (validMove == true)
						{
							boardArray[i + RndMove][j + RndMove] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}
						if (validMove == false)
						{
							ValidMoveEnemy(i - RndMove, j - RndMove);
						}
						if (validMove == true)
						{
							boardArray[i - RndMove][j - RndMove] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}
						//move
						if (validMove == false)
						{
							Validmove(i + RndMove, j + RndMove);
						}
						if (validMove == true)
						{
							boardArray[i + RndMove][j + RndMove] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}
						if (validMove == false)
						{
							Validmove(i - RndMove, j - RndMove);
						}
						if (validMove == true)
						{
							boardArray[i - RndMove][j - RndMove] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
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
					if (boardArray[i][j] == "rN2")
					{
						//attack
						if (validMove == false)
						{
							ValidMoveEnemy(i + 2, j + 1);
						}
						if (validMove == true)
						{
							boardArray[i + 2][j + 1] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}
						if (validMove == false)
						{
							ValidMoveEnemy(i - 2, j - 1);
						}
						if (validMove == true)
						{
							boardArray[i - 2][j - 1] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}
						if (validMove == false)
						{
							ValidMoveEnemy(i + 2, j - 1);
						}
						if (validMove == true)
						{
							boardArray[i + 2][j - 1] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}
						if (validMove == false)
						{
							ValidMoveEnemy(i + 2, j - 1);
						}
						if (validMove == true)
						{
							boardArray[i + 2][j - 1] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}
						//move
						if (validMove == false)
						{
							Validmove(i + 2, j + 1);
						}
						if (validMove == true)
						{
							boardArray[i + 2][j + 1] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}
						if (validMove == false)
						{
							Validmove(i - 2, j - 1);
						}
						if (validMove == true)
						{
							boardArray[i - 2][j - 1] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}
						if (validMove == false)
						{
							Validmove(i + 2, j - 1);
						}
						if (validMove == true)
						{
							boardArray[i + 2][j - 1] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}
						if (validMove == false)
						{
							Validmove(i + 2, j - 1);
						}
						if (validMove == true)
						{
							boardArray[i + 2][j - 1] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
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
					if (boardArray[i][j] == "rR2")
					{
						int RndMove = (rand() % 9) + 1;

						//attack
						if (validMove == false)
						{
							ValidMoveEnemy(i + RndMove, j);
						}
						if (validMove == true)
						{
							boardArray[i + RndMove][j] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}
						if (validMove == false)
						{
							ValidMoveEnemy(i, j + RndMove);
						}
						if (validMove == true)
						{
							boardArray[i][j + RndMove] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}
						if (validMove == false)
						{
							ValidMoveEnemy(i - RndMove, j);
						}
						if (validMove == true)
						{
							boardArray[i - RndMove][j] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}
						if (validMove == false)
						{
							ValidMoveEnemy(i, j - RndMove);
						}
						if (validMove == true)
						{
							boardArray[i][j - RndMove] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}
						//Movement
						if (validMove == false)
						{
							Validmove(i + RndMove, j);
						}
						if (validMove == true)
						{
							boardArray[i + RndMove][j] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}
						if (validMove == false)
						{
							Validmove(i, j + RndMove);
						}
						if (validMove == true)
						{
							boardArray[i][j + RndMove] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}
						if (validMove == false)
						{
							Validmove(i - RndMove, j);
						}
						if (validMove == true)
						{
							boardArray[i - RndMove][j] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}
						if (validMove == false)
						{
							Validmove(i, j - RndMove);
						}
						if (validMove == true)
						{
							boardArray[i][j - RndMove] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
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
					if (boardArray[i][j] == "rP1")
					{
						if (validMove == false)
						{
							ValidMoveEnemy(i - 1, j + 1);
						}
						if (validMove == true)
						{
							boardArray[i - 1][j + 1] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}

						if (validMove == false)
						{
							ValidMoveEnemy(i - 1, j - 1);
						}

						if (validMove == true)
						{
							boardArray[i - 1][j - 1] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}

						if (validMove == false)
						{
							Validmove(i - 1, j);
						}

						if (validMove == true)
						{
							boardArray[i - 1][j] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
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
					if (boardArray[i][j] == "rP2")
					{
						if (validMove == false)
						{
							ValidMoveEnemy(i - 1, j + 1);
						}
						if (validMove == true)
						{
							boardArray[i - 1][j + 1] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}
						
						if (validMove == false)
						{
							ValidMoveEnemy(i - 1, j - 1);
						}

						if (validMove == true)
						{
							boardArray[i - 1][j - 1] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}
						
						if (validMove == false)
						{
							Validmove(i - 1, j);
						}

						if (validMove == true)
						{
							boardArray[i - 1][j] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
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
					if (boardArray[i][j] == "rP3")
					{
						if (validMove == false)
						{
							ValidMoveEnemy(i - 1, j + 1);
						}
						if (validMove == true)
						{
							boardArray[i - 1][j + 1] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}

						if (validMove == false)
						{
							ValidMoveEnemy(i - 1, j - 1);
						}

						if (validMove == true)
						{
							boardArray[i - 1][j - 1] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}

						if (validMove == false)
						{
							Validmove(i - 1, j);
						}

						if (validMove == true)
						{
							boardArray[i - 1][j] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
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
					if (boardArray[i][j] == "rP4")
					{
						if (validMove == false)
						{
							ValidMoveEnemy(i - 1, j + 1);
						}
						if (validMove == true)
						{
							boardArray[i - 1][j + 1] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}

						if (validMove == false)
						{
							ValidMoveEnemy(i - 1, j - 1);
						}

						if (validMove == true)
						{
							boardArray[i - 1][j - 1] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}

						if (validMove == false)
						{
							Validmove(i - 1, j);
						}

						if (validMove == true)
						{
							boardArray[i - 1][j] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
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
					if (boardArray[i][j] == "rP5")
					{
						if (validMove == false)
						{
							ValidMoveEnemy(i - 1, j + 1);
						}
						if (validMove == true)
						{
							boardArray[i - 1][j + 1] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}

						if (validMove == false)
						{
							ValidMoveEnemy(i - 1, j - 1);
						}

						if (validMove == true)
						{
							boardArray[i - 1][j - 1] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}

						if (validMove == false)
						{
							Validmove(i - 1, j);
						}

						if (validMove == true)
						{
							boardArray[i - 1][j] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
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
					if (boardArray[i][j] == "rP6")
					{
						if (validMove == false)
						{
							ValidMoveEnemy(i - 1, j + 1);
						}
						if (validMove == true)
						{
							boardArray[i - 1][j + 1] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}

						if (validMove == false)
						{
							ValidMoveEnemy(i - 1, j - 1);
						}

						if (validMove == true)
						{
							boardArray[i - 1][j - 1] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}

						if (validMove == false)
						{
							Validmove(i - 1, j);
						}

						if (validMove == true)
						{
							boardArray[i - 1][j] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
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
					if (boardArray[i][j] == "rP7")
					{
						if (validMove == false)
						{
							ValidMoveEnemy(i - 1, j + 1);
						}
						if (validMove == true)
						{
							boardArray[i - 1][j + 1] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}

						if (validMove == false)
						{
							ValidMoveEnemy(i - 1, j - 1);
						}

						if (validMove == true)
						{
							boardArray[i - 1][j - 1] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}

						if (validMove == false)
						{
							Validmove(i - 1, j);
						}

						if (validMove == true)
						{
							boardArray[i - 1][j] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
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
					if (boardArray[i][j] == "rP8")
					{
						if (validMove == false)
						{
							ValidMoveEnemy(i - 1, j + 1);
						}
						if (validMove == true)
						{
							boardArray[i - 1][j + 1] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}

						if (validMove == false)
						{
							ValidMoveEnemy(i - 1, j - 1);
						}

						if (validMove == true)
						{
							boardArray[i - 1][j - 1] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
						}

						if (validMove == false)
						{
							Validmove(i - 1, j);
						}

						if (validMove == true)
						{
							boardArray[i - 1][j] = boardArray[i][j];
							boardArray[i][j] = " * ";
							pieceTaken = true;
							break;
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
	pieceTaken = false;
}
void pieces::Validmove(int X, int Y)
{
	if (boardArray[X][Y] == " * ")
	{
		validMove = true;
	}
	if (boardArray[X][Y] == "bK")
	{
		//done = true;
	}

}

void pieces::ValidMoveEnemy(int X, int Y)
{
	if (boardArray[X][Y] == "bR" || "bN" || "bB" || "bQ" || "bB2" || "bN2" || "bR2" || "bP1" || "bP2" || "bP3" || "bP4" || "bP5" || "bP6" || "bP7" || "bP8")
	{
		validMove = true;
	}
	if (boardArray[X][Y] == "bK")
	{
		//done = true;
	}

}

