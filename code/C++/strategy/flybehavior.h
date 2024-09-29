#ifndef FLYBEHAVIOR_H
#define FLYBEHAVIOR_H

#include <iostream>

class FlyBehavior
{
public:
	FlyBehavior()	{}
	virtual ~FlyBehavior() = default;

	virtual void fly() = 0;
};

#endif