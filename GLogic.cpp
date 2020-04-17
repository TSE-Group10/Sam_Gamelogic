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

	if (boardArray[X][Y] == " * ")
	validMove = true;
	if (boardArray[X][Y] == pieces.bK)
		done = true;

}

void GLogic::ValidMoveEnemy(int Y, int X)
{
	pieces pieces;

	if (boardArray[X][X] == "bR" || "bN" || "bB" || "bQ"  || "bB2" || "bN2" || "bR2" || "bP1" || "bP2" || "bP3" || "bP4" || "bP5" || "bP6" || "bP7" || "bP8")
	validMove = true;
	if (boardArray[X][X] == "bK")
		done = true;

}


