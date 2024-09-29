#ifndef FLYNOWAY_H
#define FLYNOWAY_H

#include "flybehavior.h"

class FlyNoWay : public FlyBehavior
{
public:
	FlyNoWay()	{}

	void fly() {
		std::cout << "Fly No Way" << std::endl;
	}
};

#endif