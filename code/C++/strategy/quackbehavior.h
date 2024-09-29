#ifndef QUACKBEHAVIOR_H
#define QUACKBEHAVIOR_H

#include <iostream>

class QuackBehavior
{
public:
	QuackBehavior()	{}
	virtual ~QuackBehavior() = default;

	virtual void quack() = 0;
};

#endif