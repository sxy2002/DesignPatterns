#ifndef HOUSEBLEND_H
#define HOUSEBLEND_H

#include "component.h"

class HouseBlend : public Component
{
public:
	HouseBlend() {
		this->description = "HouseBlend";
	}

	double cost() {
		return 0.89;
	}
};

#endif