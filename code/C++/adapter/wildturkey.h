#ifndef ADAMYWILDTURKEY_H
#define ADAMYWILDTURKEY_H

#include "turkey.h"

class WildTurkey : public Turkey
{
public:
	void gobble() {
		std::cout << "gobble" << std::endl;
	}

	void fly() {
		std::cout << "short fly" << std::endl;
	}
};

#endif