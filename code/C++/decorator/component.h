#ifndef COMPONENT_H
#define COMPONENT_H

#include "beverage.h"

class Component : public Beverage
{
public:
	std::string getDescription() {
		return this->description;
	}
};

#endif