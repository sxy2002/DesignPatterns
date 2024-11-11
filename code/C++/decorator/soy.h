#ifndef SOY_H
#define SOY_H

#include "condimentdecorator.h"

class Soy : public CondimentDecorator
{
public:
	Soy(Beverage* const b) {
		this->beverage = b;
	}

	std::string getDescription() override {
		return this->beverage->getDescription() + ", Soy";
	}

	double cost() {
		double cost = 0.0;
		if (this->beverage->getSize() == TALL)
			cost = 0.1;
		else if (this->beverage->getSize() == GRANDE)
			cost = 0.15;
		else
			cost = 0.2;
		return this->beverage->cost() + cost;
	}
};

#endif
