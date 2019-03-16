#ifndef SHOOTER_H
#define SHOOTER_H
#include "roll.h"

//class Shooter interface
class Shooter
{
public:
	Roll shoot(Die& d1, Die& d2);
};
#endif