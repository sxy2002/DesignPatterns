#ifndef PLUMTOMATOSAUCE_H
#define PLUMTOMATOSAUCE_H

#include "sauce.h"

class PlumTomatoSauce : public Sauce
{
public:
	std::string getName() {
		return "Plum Tomato Sauce";
	}
};

#endif