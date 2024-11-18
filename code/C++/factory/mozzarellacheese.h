#ifndef MOZZARELLACHEESE_H
#define MOZZARELLACHEESE_H

#include "cheese.h"

class MozzarellaCheese : public Cheese
{
public:
	std::string getName() {
		return "Mozzarella Cheese";
	}
};

#endif