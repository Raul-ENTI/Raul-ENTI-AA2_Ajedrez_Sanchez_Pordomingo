#include "Library.h"

bool comprobarJaqueMate(std::vector<Position>& listPiecesPos) {

}

void play(char chessboard[BOARD_SIZE][BOARD_SIZE], std::vector<Position>& listPiecesPos) {
	while (!comprobarJaqueMate(listPiecesPos))
	{
		for (int i = 0; i < Jugadores; i++)
		{
			//Logica de turnos
		}
	}
}