#ifndef DECAF_H
#define DECAF_H

#include "component.h"

class Decaf : public Component
{
public:
	Decaf() {
		this->description = "Decaf";
	}

	double cost() {
		return 1.99;
	}
};

#endif