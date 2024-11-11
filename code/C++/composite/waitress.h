#ifndef WAITRESS_H
#define WAITRESS_H

#include "menucomponent.h"

class Waitress
{
private:
	MenuComponent *allMenu;
public:
	Waitress(MenuComponent * const a) {
		allMenu = a;
	}
	void printMenu() {
		allMenu->print();
	}
};

#endif