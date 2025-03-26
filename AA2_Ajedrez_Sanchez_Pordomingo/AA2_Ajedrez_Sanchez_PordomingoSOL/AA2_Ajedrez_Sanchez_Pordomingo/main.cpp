#include "Library.h"

int main() {
	char chessboard[BOARD_SIZE][BOARD_SIZE];
	std::vector<char> pieceList = initPieces();
	std::vector<Position> initialPos = initPosPieces(pieceList);
	std::vector<Pieces> listPiecePos = initPieceList(pieceList, initialPos);

	initChessBoard(chessboard);
	
	initPawns(chessboard);
	viewChessBoard(chessboard);

	play(chessboard, listPiecePos);
}