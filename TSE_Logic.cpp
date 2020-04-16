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

	//Setting default locations for both red and blue teams on the board.
	GLogic.boardArray[1][1] = pieces.rR;
	GLogic.boardArray[2][1] = pieces.rN;
	GLogic.boardArray[3][1] = pieces.rB;
	GLogic.boardArray[4][1] = pieces.rQ;
	GLogic.boardArray[5][1] = pieces.rK;
	GLogic.boardArray[6][1] = pieces.rB2;
	GLogic.boardArray[7][1] = pieces.rN2;
	GLogic.boardArray[8][1] = pieces.rR2;

	GLogic.boardArray[1][2] = pieces.rP1;
	GLogic.boardArray[2][2] = pieces.rP2;
	GLogic.boardArray[3][2] = pieces.rP3;
	GLogic.boardArray[4][2] = pieces.rP4;
	GLogic.boardArray[5][2] = pieces.rP5;
	GLogic.boardArray[6][2] = pieces.rP6;
	GLogic.boardArray[7][2] = pieces.rP7;
	GLogic.boardArray[8][2] = pieces.rP8;

	GLogic.boardArray[1][7] = pieces.bP1;
	GLogic.boardArray[2][7] = pieces.bP2;
	GLogic.boardArray[3][7] = pieces.bP3;
	GLogic.boardArray[4][7] = pieces.bP4;
	GLogic.boardArray[5][7] = pieces.bP5;
	GLogic.boardArray[6][7] = pieces.bP6;
	GLogic.boardArray[7][7] = pieces.bP7;
	GLogic.boardArray[8][7] = pieces.bP8;

	GLogic.boardArray[1][8] = pieces.bR;
	GLogic.boardArray[2][8] = pieces.bN;
	GLogic.boardArray[3][8] = pieces.bB;
	GLogic.boardArray[4][8] = pieces.bQ;
	GLogic.boardArray[5][8] = pieces.bK;
	GLogic.boardArray[6][8] = pieces.bB2;
	GLogic.boardArray[7][8] = pieces.bN2;
	GLogic.boardArray[8][8] = pieces.bR2;


	while (!GLogic.done)
	{
		
		int X, Y, XNew, YNew;

		cin >> X >> Y >> XNew >> YNew;

		if (GLogic.boardArray[X][Y] = pieces.rR || pieces.rN || pieces.rB || pieces.rQ || pieces.rB2 || pieces.rN2 || pieces.rR2 || pieces.rP1 || pieces.rP2 || pieces.rP3 || pieces.rP4 || pieces.rP5 || pieces.rP6 || pieces.rP7 || pieces.rP8);
		{
			if (GLogic.boardArray[XNew][YNew] = pieces.rK)
			{
				GLogic.done = true;
			}
		GLogic.boardArray[X][Y] = GLogic.boardArray[XNew][YNew];
		GLogic.boardArray[X][Y] = NULL;
		}

		//player timer will sit here

        GLogic.PlayerTurn= false;

        //once player turn has been taken AI will take control.
        if (!GLogic.PlayerTurn)
        {
			pieces.PieceCollection();
        }
    }

    return 0;
}


