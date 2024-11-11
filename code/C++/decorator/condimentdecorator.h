#ifndef CONDIMENTDECORATOR_H
#define CONDIMENTDECORATOR_H

#include "beverage.h"
#include <iostream>

class CondimentDecorator : public Beverage
{
protected:
	Beverage* beverage;
};

#endif