#ifndef MUSHROOM_H
#define MUSHROOM_H

#include "veggies.h"

class Mushroom : public Veggies
{
public:
	std::string getName() {
		return "Mushroom";
	}
};

#endif
