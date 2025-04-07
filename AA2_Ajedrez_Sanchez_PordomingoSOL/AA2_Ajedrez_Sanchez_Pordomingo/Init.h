#pragma once
#include "Library.h"
#include "utils.h"
#include "Const.h"

std::vector<char> initPieces();

void initChessBoard(char chessboard[BOARD_SIZE][BOARD_SIZE]);

void viewChessBoard(char chessboard[BOARD_SIZE][BOARD_SIZE]);

std::vector<Position> initPosPieces(std::vector<char> pieceList);

Pieces initPieceList(std::vector<char> piecesList, std::vector<Position> positionList);

