#ifndef EGGPLANT_H
#define EGGPLANT_H

#include "veggies.h"

class Eggplant : public Veggies
{
public:
	std::string getName() {
		return "Eggplant";
	}
};

#endif
