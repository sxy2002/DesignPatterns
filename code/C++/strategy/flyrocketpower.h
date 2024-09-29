#ifndef FLYROCKETPOWER_H
#define FLYROCKETPOWER_H

#include "flybehavior.h"

class FlyRocketPower : public FlyBehavior
{
public:
	FlyRocketPower()	{}

	void fly() {
		std::cout << "Fly Rocket Power" << std::endl;
	}
};

#endif