#ifndef WHIP_H
#define WHIP_H

#include "condimentdecorator.h"

class Whip : public CondimentDecorator
{
public:
	Whip(Beverage* const b) {
		this->beverage = b;
	}

	std::string getDescription() {
		return this->beverage->getDescription() + ", Whip";
	}

	double cost() {
		return this->beverage->cost() + 0.1;
	}
};

#endif