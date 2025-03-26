#include "Library.h"

std::vector<char> initPieces() {
	std::vector<char> pieceList;
	char blackPieces[TOTAL_PIECES / 2] = { BLACK_ROOK, BLACK_KNIGHT, BLACK_BISHOP, BLACK_QUEEN, BLACK_KING, BLACK_BISHOP, BLACK_KNIGHT, BLACK_ROOK,BLACK_PAWN,BLACK_PAWN, BLACK_PAWN, BLACK_PAWN, BLACK_PAWN, BLACK_PAWN, BLACK_PAWN, BLACK_PAWN };
	char whitePieces[TOTAL_PIECES / 2] = { WHITE_ROOK, WHITE_KNIGHT, WHITE_BISHOP,  WHITE_KING, WHITE_QUEEN, WHITE_BISHOP, WHITE_KNIGHT, WHITE_ROOK,WHITE_PAWN,WHITE_PAWN, WHITE_PAWN, WHITE_PAWN, WHITE_PAWN, WHITE_PAWN, WHITE_PAWN, WHITE_PAWN };
	for (size_t i = 0; i < TOTAL_PIECES / 2; i++)
	{
		pieceList.push_back(blackPieces[i]);
	}

	for (size_t i = 0; i < TOTAL_PIECES / 2; i++)
	{
		pieceList.push_back(whitePieces[i]);
	}
	return pieceList;
}
void initChessBoard(char chessboard[BOARD_SIZE][BOARD_SIZE]) {
	for (int i = 0; i < BOARD_SIZE; i++)
	{
		for (int j = 0; j < BOARD_SIZE; j++)
		{
			if ((i + j) % 2 == 0)
			{
				chessboard[i][j] = WHITE_SQUARES;
			}
			else
			{
				chessboard[i][j] = BLACK_SQUARES;
			}
		}
	}
}

std::vector<Position> initPosPieces(std::vector<char> pieceList) {

}

std::vector<Pieces> initPieceList(std::vector<char> piecesList, std::vector<Position> positionList) {

}

void initPawns(char chessboard[BOARD_SIZE][BOARD_SIZE]) {
	for (int i = 0; i < BOARD_SIZE; i++)
	{
		for (int j = 0; j < BOARD_SIZE; j++)
		{
			//set PAWNS
			if (j == BOARD_SIZE - 2) {
				chessboard[j][i] = WHITE_PAWN;
			}
			else if (j == 1)
			{
				chessboard[j][i] = BLACK_PAWN;
			}
		}
	}
	const short rookXPosL = 0;
	const short rookXPosR = BOARD_SIZE -1;
	const short knightXPosL = 1;
	const short knightXPosR = BOARD_SIZE - 2;
	const short bishopXPosL = 2;
	const short bishopXPosR = BOARD_SIZE - 3;

	chessboard[0][rookXPosL] = BLACK_ROOK;
	chessboard[0][rookXPosR] = BLACK_ROOK;
	chessboard[0][knightXPosL] = BLACK_KNIGHT;
	chessboard[0][knightXPosR] = BLACK_KNIGHT;
	chessboard[0][bishopXPosL] = BLACK_BISHOP;
	chessboard[0][bishopXPosR] = BLACK_BISHOP;


		//chessboard[0][] =

	
}

void viewChessBoard(char chessboard[BOARD_SIZE][BOARD_SIZE]) {
	std::cout << ' ' << ' ';
	for (int i = 0; i < BOARD_SIZE; i++)
	{
		std::cout << i + 1 << ' ' ;
	}
	std::cout << std::endl;
	for (int i = 0; i < BOARD_SIZE; i++)
	{
		std::cout << BOARD_SIZE - i << ' ';
		for (int j = 0; j < BOARD_SIZE; j++)
		{
			std::cout << chessboard[i][j] << ' ';
		}
		std::cout << std::endl;
	}
}