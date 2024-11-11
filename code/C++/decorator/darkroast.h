#ifndef DARKROAST_H
#define DARKROAST_H

#include "component.h"

class DarkRoast : public Component
{
public:
	DarkRoast() {
		this->description = "DarkRoast";
	}

	double cost() {
		return 0.99;
	}
};

#endif