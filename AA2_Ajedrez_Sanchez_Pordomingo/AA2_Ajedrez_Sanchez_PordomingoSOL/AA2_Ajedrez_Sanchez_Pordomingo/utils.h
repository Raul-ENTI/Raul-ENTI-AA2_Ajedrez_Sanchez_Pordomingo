#pragma once
#include "Library.h"
struct Position
{
	int x;
	int y;
};

struct Pieces {
	char piece;
	std::vector<Position> pos;
};