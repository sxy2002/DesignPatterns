#ifndef MARINARASAUCE_H
#define MARINARASAUCE_H

#include "sauce.h"

class MarinaraSauce : public Sauce
{
public:
	std::string getName() {
		return "Marinara Sauce";
	}
};

#endif
