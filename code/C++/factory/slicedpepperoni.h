#ifndef SLICEDPEPPERONI_H
#define SLICEDPEPPERONI_H

#include "pepperoni.h"

class SlicedPepperoni : public Pepperoni
{
public:
	std::string getName() {
		return "Sliced Pepperoni";
	}
};

#endif