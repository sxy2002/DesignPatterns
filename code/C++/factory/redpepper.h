#ifndef REDPEPPER_H
#define REDPEPPER_H

#include "veggies.h"

class RedPepper : public Veggies
{
public:
	std::string getName() {
		return "RedPepper";
	}
};

#endif
