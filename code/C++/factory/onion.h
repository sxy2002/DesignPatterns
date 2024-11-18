#ifndef ONION_H
#define ONION_H

#include "veggies.h"

class Onion : public Veggies
{
public:
	std::string getName() {
		return "Onion";
	}
};

#endif