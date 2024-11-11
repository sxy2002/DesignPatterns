#include "beverage.h"
#include "houseblend.h"
#include "soy.h"
#include "mocha.h"
#include "whip.h"
#include <iostream>

int main()
{
	Beverage *beverage = new HouseBlend();
	std::cout << beverage->getDescription() << ": $" << beverage->cost() << std::endl;

	beverage->setSize(VENTI);
	Beverage *beverage1 = new Soy(beverage);
	std::cout << beverage1->getDescription() << ": $" << beverage1->cost() << std::endl;
	Beverage *beverage2 = new Mocha(beverage1);
	std::cout << beverage2->getDescription() << ": $" << beverage2->cost() << std::endl;
	Beverage *beverage3 = new Whip(beverage2);
	std::cout << beverage3->getDescription() << ": $" << beverage3->cost() << std::endl;

	delete beverage3;
	delete beverage2;
	delete beverage1;
	delete beverage;
	return 0;
}