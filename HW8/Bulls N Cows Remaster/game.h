/*
James Davis
December 8th
CS201
HW8 - Bulls N Cows Redo - game.h
This program will house prototypes for game
*/

#include "Set.h"

#include <vector>
using std::vector;

#ifndef game_h
#define game_h

class Game {
	//Total number of turns before game over
	int turns;
	vector<int> digits;
	Set set;
	bool win;

public:
	Game();

	void match();
	void turn();
	void evaluate(int x);
};

#endif // !game_h