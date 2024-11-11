#ifndef MOCHA_H
#define MOCHA_H

#include "condimentdecorator.h"

class Mocha : public CondimentDecorator
{
public:
	Mocha(Beverage* const b) {
		this->beverage = b;
	}

	std::string getDescription() {
		return this->beverage->getDescription() + ", Mocha";
	}

	double cost() {
		return this->beverage->cost() + 0.2;
	}
};

#endif