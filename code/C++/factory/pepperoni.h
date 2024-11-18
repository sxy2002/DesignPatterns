#ifndef PEPPERONI_H
#define PEPPERONI_H

#include <iostream>

class Pepperoni
{
public:
	Pepperoni()	{}
	virtual ~Pepperoni() = default;

	virtual std::string getName() = 0;
};

#endif