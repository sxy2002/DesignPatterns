#ifndef MILK_H
#define MILK_H

#include "condimentdecorator.h"

class Milk : public CondimentDecorator
{
public:
	Milk(Beverage* const b) {
		this->beverage = b;
	}

	std::string getDescription() {
		return this->beverage->getDescription() + ", Milk";
	}

	double cost() {
		return this->beverage->cost() + 0.1;
	}
};

#endif