#include "pch.h"

#include <iostream>
#include <string>
#include <vector>
#include <ctime>

#include "Pieces.h"
#include "GLogic.h"


int main()
{
	pieces pieces;
	GLogic GLogic;

	int width = 9, height = 9;

	int X, Y, XNew, YNew;

	for (int i = 1; i < width; i++)
	{
		for (int j = 1; j < height; j++)
		{
			pieces.boardArray[i][j] = " * ";
		}
	}

	//Setting default locations for both red and blue teams on the board.
	pieces.boardArray[8][1] = pieces.rR;
	pieces.boardArray[8][2] = pieces.rN;
	pieces.boardArray[8][3] = pieces.rB;
	pieces.boardArray[8][4] = pieces.rQ;
	pieces.boardArray[8][5] = pieces.rK;
	pieces.boardArray[8][6] = pieces.rB2;
	pieces.boardArray[8][7] = pieces.rN2;
	pieces.boardArray[8][8] = pieces.rR2;

	pieces.boardArray[7][1] = pieces.rP1;
	pieces.boardArray[7][2] = pieces.rP2;
	pieces.boardArray[7][3] = pieces.rP3;
	pieces.boardArray[7][4] = pieces.rP4;
	pieces.boardArray[7][5] = pieces.rP5;
	pieces.boardArray[7][6] = pieces.rP6;
	pieces.boardArray[7][7] = pieces.rP7;
	pieces.boardArray[7][8] = pieces.rP8;

	pieces.boardArray[2][1] = pieces.bP1;
	pieces.boardArray[2][2] = pieces.bP2;
	pieces.boardArray[2][3] = pieces.bP3;
	pieces.boardArray[2][4] = pieces.bP4;
	pieces.boardArray[2][5] = pieces.bP5;
	pieces.boardArray[2][6] = pieces.bP6;
	pieces.boardArray[2][7] = pieces.bP7;
	pieces.boardArray[2][8] = pieces.bP8;

	pieces.boardArray[1][1] = pieces.bR;
	pieces.boardArray[1][2] = pieces.bN;
	pieces.boardArray[1][3] = pieces.bB;
	pieces.boardArray[1][4] = pieces.bQ;
	pieces.boardArray[1][5] = pieces.bK;
	pieces.boardArray[1][6] = pieces.bB2;
	pieces.boardArray[1][7] = pieces.bN2;
	pieces.boardArray[1][8] = pieces.bR2;

	//Outputting default board state
	for (int i = 1; i < height; ++i)
	{
		for (int j = 1; j < width; ++j)
		{
			std::cout << pieces.boardArray[i][j] << ' ';
		}
		std::cout << std::endl;
	}

	//game loop.
	while (!pieces.done)
	{
		//reads in user prompts converts to variable using blank spaces as a break
		cin >> Y >> X >> YNew >> XNew;
		//checks if the player selects one of their pieces
		if (pieces.boardArray[Y][X] == "bR" || "bN" || "bB" || "bQ" || "bK" || "bB2" || "bN2" || "bR2" || "bP1" || "bP2" || "bP3" || "bP4" || "bP5" || "bP6" || "bP7" || "bP8")
		{
			if (pieces.boardArray[XNew][YNew] == "rK")//if new location is enemy king game ends
			{
				//pieces.done = true;
			}
			pieces.boardArray[YNew][XNew] = pieces.boardArray[Y][X]; //fill new location with old locations piece
			pieces.boardArray[Y][X] = " * "; //empty last positions piece
		}
		// outputting results of player turn
		for (int i = 1; i < height; ++i)
		{
			for (int j = 1; j < width; ++j)
			{
				std::cout << pieces.boardArray[i][j] << ' ';
			}
			std::cout << std::endl;
		}

		// AI then takes it's turn

		pieces.PieceCollection();

		//outputting results of AI's turn
		std::cout << "AI turn" << std::endl;

		for (int i = 1; i < height; ++i)
		{
			for (int j = 1; j < width; ++j)
			{
				std::cout << pieces.boardArray[i][j] << ' ';
			}
			std::cout << std::endl;
		}
	}

	//return 0;
}


