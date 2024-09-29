#ifndef SQUACK_H
#define SQUACK_H

#include "quackbehavior.h"

class Squack : public QuackBehavior
{
public:
	Squack()	{}

	void quack() {
		std::cout << "Squack" << std::endl;
	}
};

#endif