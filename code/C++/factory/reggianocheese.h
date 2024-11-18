#ifndef REGGIANOCHEESE_H
#define REGGIANOCHEESE_H

#include "cheese.h"

class ReggianoCheese : public Cheese
{
public:
	std::string getName() {
		return "Reggiano Cheese";
	}
};

#endif