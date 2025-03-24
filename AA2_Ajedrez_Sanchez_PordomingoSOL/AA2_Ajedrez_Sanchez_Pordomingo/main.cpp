#include "Const.h"
#include "Chessboard.h"

int main() {
	char chessboard[BOARD_SIZE][BOARD_SIZE];

	initChessBoard(chessboard);
	viewChessBoard(chessboard);

}