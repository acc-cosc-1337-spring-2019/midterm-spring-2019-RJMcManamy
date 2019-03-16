#include "shooter.h"

//class Shooter implementation

Roll Shooter::shoot(Die & d1, Die & d2)
{
	Roll shoot(d1, d2);
	shoot.roll();
	return shoot;
}
