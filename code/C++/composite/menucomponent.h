#ifndef MENUCOMPONENT_H
#define MENUCOMPONENT_H

#include <string>
#include <iostream>

class MenuComponent
{
public:
	virtual std::string getName() const = 0;

	virtual std::string getDescription() const = 0;

	virtual double getPrice() const = 0;

	virtual bool isVegetarian() const = 0;

	virtual void print() const = 0;

	virtual void add(MenuComponent * const m) = 0;

	virtual void remove(MenuComponent * const m) = 0;

	virtual MenuComponent* getChild(const int &i) const = 0;
};

#endif