#include "Const.h"
#include "utils.h"

void initChessBoard(char chessboard[BOARD_SIZE][BOARD_SIZE]) {
	for (int i = 0; i < BOARD_SIZE; i++)
	{
		for (int j = 0; j < BOARD_SIZE; j++)
		{
			//set PAWNS
			if (j == BOARD_SIZE - 2) {
				chessboard[j][i] = BLACK_PAWN;
			}
			else if (j == 1)
			{
				chessboard[j][i] = WHITE_PAWN;
			}
			else {
				chessboard[j][i] = '*';
			}
		}
	}
	const short rookXPosL = 0;
	const short rookXPosR = BOARD_SIZE -1;
	const short knightXPosL = 0;
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