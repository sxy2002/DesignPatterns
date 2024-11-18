#ifndef VEGGIES_H
#define VEGGIES_H

#include <iostream>

class Veggies
{
public:
	Veggies()	{}
	virtual ~Veggies() = default;

	virtual std::string getName() = 0;
};

#endif