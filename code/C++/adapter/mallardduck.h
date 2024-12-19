#ifndef ADAMYMALLARDDUCK_H
#define ADAMYMALLARDDUCK_H

#include "duck.h"

class MallardDuck : public Duck
{
public:
	void quack() {
		std::cout << "quack" << std::endl;
	}

	void fly() {
		std::cout << "fly" << std::endl;
	}
};

#endif