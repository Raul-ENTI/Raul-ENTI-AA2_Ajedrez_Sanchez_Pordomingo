#pragma once
#include "Library.h"

std::vector<char> initPieces();

void initChessBoard(char chessboard[BOARD_SIZE][BOARD_SIZE]);

void initPawns(char chessboard[BOARD_SIZE][BOARD_SIZE]);

void viewChessBoard(char chessboard[BOARD_SIZE][BOARD_SIZE]);

std::vector<Position> initPosPieces(std::vector<char> pieceList);

std::vector<Pieces> initPieceList(std::vector<char> piecesList, std::vector<Position> positionList);

void play(char chessboard[BOARD_SIZE][BOARD_SIZE], std::vector<Position>& listPiecesPos);
