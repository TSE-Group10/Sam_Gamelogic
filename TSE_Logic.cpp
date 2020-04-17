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


	for (int i = 1; i < width; i++)
	{
		for (int j = 1; j < height; j++)
		{
			GLogic.boardArray[i][j] = " * ";
		}
	}

	//Setting default locations for both red and blue teams on the board.
	GLogic.boardArray[8][1] = pieces.rR;
	GLogic.boardArray[8][2] = pieces.rN;
	GLogic.boardArray[8][3] = pieces.rB;
	GLogic.boardArray[8][4] = pieces.rQ;
	GLogic.boardArray[8][5] = pieces.rK;
	GLogic.boardArray[8][6] = pieces.rB2;
	GLogic.boardArray[8][7] = pieces.rN2;
	GLogic.boardArray[8][8] = pieces.rR2;

	GLogic.boardArray[7][1] = pieces.rP1;
	GLogic.boardArray[7][2] = pieces.rP2;
	GLogic.boardArray[7][3] = pieces.rP3;
	GLogic.boardArray[7][4] = pieces.rP4;
	GLogic.boardArray[7][5] = pieces.rP5;
	GLogic.boardArray[7][6] = pieces.rP6;
	GLogic.boardArray[7][7] = pieces.rP7;
	GLogic.boardArray[7][8] = pieces.rP8;

	GLogic.boardArray[2][1] = pieces.bP1;
	GLogic.boardArray[2][2] = pieces.bP2;
	GLogic.boardArray[2][3] = pieces.bP3;
	GLogic.boardArray[2][4] = pieces.bP4;
	GLogic.boardArray[2][5] = pieces.bP5;
	GLogic.boardArray[2][6] = pieces.bP6;
	GLogic.boardArray[2][7] = pieces.bP7;
	GLogic.boardArray[2][8] = pieces.bP8;

	GLogic.boardArray[1][1] = pieces.bR;
	GLogic.boardArray[1][2] = pieces.bN;
	GLogic.boardArray[1][3] = pieces.bB;
	GLogic.boardArray[1][4] = pieces.bQ;
	GLogic.boardArray[1][5] = pieces.bK;
	GLogic.boardArray[1][6] = pieces.bB2;
	GLogic.boardArray[1][7] = pieces.bN2;
	GLogic.boardArray[1][8] = pieces.bR2;

	//Outputting default board state
	for (int i = 1; i < height; ++i)
	{
		for (int j = 1; j < width; ++j)
		{
			std::cout << GLogic.boardArray[i][j] << ' ';
		}
		std::cout << std::endl;
	}

	//game loop.
	while (!GLogic.done)
	{
		int X, Y, XNew, YNew;
		//reads in user prompts converts to variable using blank spaces as a break
		cin >> Y >> X >> YNew >> XNew;
		//checks if the player selects one of their pieces
		if (GLogic.boardArray[Y][X] == "bR" || "bN" || "bB" || "bQ" || "bK" || "bB2" || "bN2" || "bR2" || "bP1" || "bP2" || "bP3" || "bP4" || "bP5" || "bP6" || "bP7" || "bP8")
		{
			if (GLogic.boardArray[XNew][YNew] == "rK")//if new location is enemy king game ends
			{
				GLogic.done = true;
			}
			GLogic.boardArray[YNew][XNew] = GLogic.boardArray[Y][X]; //fill new location with old locations piece
			GLogic.boardArray[Y][X] = " * "; //empty last positions piece
		}
		// outputting results of player turn
		for (int i = 1; i < height; ++i)
		{
			for (int j = 1; j < width; ++j)
			{
				std::cout << GLogic.boardArray[i][j] << ' ';
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
				std::cout << GLogic.boardArray[i][j] << ' ';
			}
			std::cout << std::endl;
		}
	}

	//return 0;
}


