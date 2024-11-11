#ifndef ESPRESSO_H
#define ESPRESSO_H

#include "component.h"

class Espresso : public Component
{
public:
	Espresso() {
		this->description = "Espresso";
	}

	double cost() {
		return 1.05;
	}
};

#endif