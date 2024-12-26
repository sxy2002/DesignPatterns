#ifndef COFFEE_H
#define COFFEE_H

#include "beverage.h"
#include <string>

class Coffee : public Beverage
{
protected:

	void brew() {
		std::cout << "brew coffee" << std::endl;
	}

	void addCondiments() {
		std::cout << "add milk" << std::endl;
	}

	bool isAddCondiments() {
		std::cout << "would you like milk? (y/n)" << std::endl;
		std::string isadd;
		std::cin >> isadd;
		if (isadd.size() >= 1 && (isadd[0] == 'y' || isadd[0] == 'Y'))
			return true;
		else
			return false;
	}
public:

};

#endif