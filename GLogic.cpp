#include "pch.h"

#include "GLogic.h"
#include "Pieces.h"
#include <cstdlib>

GLogic::GLogic()
{



}

void GLogic::Validmove(int X, int Y)
{
	pieces pieces;

	if (boardArray[X][Y] = NULL)
	validMove = true;
	if (boardArray[X][Y] = pieces.bK)
		done = true;

}

void GLogic::ValidMoveEnemy(int X, int Y)
{
	pieces pieces;

	if (boardArray[X][Y] = pieces.bR || pieces.bN || pieces.bB || pieces.bQ || pieces.bB2 || pieces.bN2 || pieces.bR2 || pieces.bP1 || pieces.bP2 || pieces.bP3 || pieces.bP4 || pieces.bP5 || pieces.bP6 || pieces.bP7 || pieces.bP8)
	validMove = true;
	if (boardArray[X][Y] = pieces.bK)
		done = true;

}


