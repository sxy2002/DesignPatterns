#ifndef THINCRUSTDOUGH_H
#define THINCRUSTDOUGH_H

#include "dough.h"

class ThinCrustDough : public Dough
{
public:
	std::string getName() {
		return "Thin Crust Dough";
	}
};

#endif