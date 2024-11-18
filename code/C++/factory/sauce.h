#ifndef SAUCE_H
#define SAUCE_H

#include <iostream>

class Sauce
{
public:
	Sauce()	{}
	virtual ~Sauce() = default;

	virtual std::string getName() = 0;
};

#endif