#include <iostream>
#include "roll.h"
#include "shooter.h"
#include <vector>

using std::cout;
using std::cin;
using std::vector;

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

//class Craps interface
class Craps
{
public:
	void play_game();
	friend std::ostream& operator<< (std::ostream &out, Craps&);
	friend std::istream& operator>> (std::istream &in, Craps&);

private:
	vector<Roll> rolls;
	vector<Shooter> shooters;
};

#endif