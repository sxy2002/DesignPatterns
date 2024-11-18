#ifndef GARLIC_H
#define GARLIC_H

#include "veggies.h"

class Garlic : public Veggies
{
public:
	std::string getName() {
		return "Garlic";
	}
};

#endif