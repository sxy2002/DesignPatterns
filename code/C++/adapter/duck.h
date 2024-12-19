#ifndef ADAMYDUCK_H
#define ADAMYDUCK_H

#include <iostream>

class Duck
{
public:
	virtual ~Duck() = default;

	virtual void quack() = 0;
	virtual void fly() = 0;
};

#endif