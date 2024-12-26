#ifndef TEA_H
#define TEA_H

#include "beverage.h"
#include <string>

class Tea : public Beverage
{
protected:

	void brew() {
		std::cout << "brew tea" << std::endl;
	}

	void addCondiments() {
		std::cout << "add lemon" << std::endl;
	}

	bool isAddCondiments() {
		std::cout << "would you like lemon? (y/n)" << std::endl;
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