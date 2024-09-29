#ifndef MUTEQUACK_H
#define MUTEQUACK_H

#include "quackbehavior.h"

class MuteQuack : public QuackBehavior
{
public:
	MuteQuack()	{}

	void quack() {
		std::cout << "Mute Quack" << std::endl;
	}
};

#endif