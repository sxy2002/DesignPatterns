#ifndef FLYWITHWINGS_H
#define FLYWITHWINGS_H

#include "flybehavior.h"

class FlyWithWings : public FlyBehavior
{
public:
	FlyWithWings()	{}

	void fly() {
		std::cout << "Fly With Wings" << std::endl;
	}
};

#endif