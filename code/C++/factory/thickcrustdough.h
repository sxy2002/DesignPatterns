#ifndef THICKCRUSTDOUGH_H
#define THICKCRUSTDOUGH_H

#include "dough.h"

class ThickCrustDough : public Dough
{
public:
	std::string getName() {
		return "Thick Crust Dough";
	}
};

#endif