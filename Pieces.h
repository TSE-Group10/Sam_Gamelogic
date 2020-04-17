#pragma once
#include <string>
#include <cstdlib>

using namespace std;

class pieces
{
private:


public:
	pieces();

	int X, Y;	//Declaration for X and Y Co-ords for peices
	string PlayerRed;	 //Declaration For red and blue
	string PlayerBlue;

	// Declaration for placeholder piece names
	char bR = 'R', bN = 'N', bB = 'B', bQ = 'Q', bK = 'K', bB2 = 'B', bN2 = 'N', bR2 = 'R', bP1 = 'P', bP2 = 'P', bP3 = 'P', bP4 = 'P', bP5 = 'P', bP6 = 'P', bP7 = 'P', bP8 = 'P';
	char rR = 'R', rN = 'N', rB = 'B', rQ = 'Q', rK = 'K', rB2 = 'B', rN2 = 'N', rR2 = 'R', rP1 = 'P', rP2 = 'P', rP3 = 'P', rP4 = 'P', rP5 = 'P', rP6 = 'P', rP7 = 'P', rP8 = 'P';

	int RndPiece; //random number generator for the AI

	bool pieceTaken = false;

	void PieceCollection(); //AI input fed into here for piece selection?
};
