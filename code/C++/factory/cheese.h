#ifndef CHEESE_H
#define CHEESE_H

#include <iostream>

class Cheese
{
public:
	Cheese()	{}
	virtual ~Cheese() = default;

	virtual std::string getName() = 0;
};

#endif