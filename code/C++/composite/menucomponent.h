#ifndef MENUCOMPONENT_H
#define MENUCOMPONENT_H

#include <string>
#include <iostream>

class MenuComponent
{
public:
	virtual std::string getName() const {
		throw std::logic_error("Unsupported Operation");
	}

	virtual std::string getDescription() const {
		throw std::logic_error("Unsupported Operation");
	}

	virtual double getPrice() const {
		throw std::logic_error("Unsupported Operation");
	}

	virtual bool isVegetarian() const {
		throw std::logic_error("Unsupported Operation");
	}

	virtual void print() const {
		throw std::logic_error("Unsupported Operation");
	}

	virtual void add(MenuComponent * const m) {
		throw std::logic_error("Unsupported Operation");
	}

	virtual void remove(MenuComponent * const m) {
		throw std::logic_error("Unsupported Operation");
	}

	virtual MenuComponent* getChild(const int &i) const {
		throw std::logic_error("Unsupported Operation");
	}
};

#endif