#ifndef MYBEVERAGE_H
#define MYBEVERAGE_H

#include <iostream>

class Beverage
{
protected:
	void boilWater() {
		std::cout << "boil Water" << std::endl;
	}

	virtual void brew() = 0;	// =0 !!!

	void pourInCup() {
		std::cout << "pour In Cup" << std::endl;
	}

	virtual void addCondiments() = 0;

	virtual bool isAddCondiments() {
		return true;
	}
public:
	void prepareRecipe() {
		boilWater();
		brew();
		pourInCup();
		if (isAddCondiments())
			addCondiments();
	}
};

#endif