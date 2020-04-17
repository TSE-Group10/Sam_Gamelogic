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
	string bR = "bR ", bN = "bN ", bB = "bB ", bQ = "bQ ", bK = "bK ", bB2 = "bB2", bN2 = "bN2", bR2 = "bR2", bP1 = "bP1", bP2 = "bP2", bP3 = "bP3", bP4 = "bP4", bP5 = "bP5", bP6 = "bP6", bP7 = "bP7", bP8 = "bP8";
	string rR = "rR ", rN = "rN ", rB = "rB ", rQ = "rQ ", rK = "rK ", rB2 = "rB2", rN2 = "rN2", rR2 = "rR2", rP1 = "rP1", rP2 = "rP2", rP3 = "rP3", rP4 = "rP4", rP5 = "rP5", rP6 = "rP6", rP7 = "rP7", rP8 = "rP8";

	int RndPiece; //random number generator for the AI

	bool pieceTaken = false;

	void PieceCollection(); //AI input fed into here for piece selection?
};
