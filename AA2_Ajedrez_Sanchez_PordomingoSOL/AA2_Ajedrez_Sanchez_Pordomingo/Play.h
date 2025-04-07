#pragma once
#include "Library.h"
#include "utils.h"

bool comprobarJaqueMate(std::vector<Position>& listPiecesPos);

void play(char chessboard[BOARD_SIZE][BOARD_SIZE], std::vector<Pieces>& listPiecesPos);