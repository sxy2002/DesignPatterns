#ifndef MENUITEM_H
#define MENUITEM_H

#include "menucomponent.h"

class MenuItem : public MenuComponent
{
private:
	std::string name;
	std::string description;
	double price;
	bool vegetarian;
public:
	MenuItem(const std::string &n, const std::string &d, const double &p, const bool &v) :name(n), description(d), price(p), vegetarian(v)	{}

	std::string getName() const {
		return this->name;
	}

	std::string getDescription() const{
		return this->description;
	}

	double getPrice() const{
		return this->price;
	}

	bool isVegetarian() const{
		return this->vegetarian;
	}

	void print() const{
		std::cout << " " << getName();
		if (isVegetarian())
			std::cout << "(v)";
		std::cout << ", " << getPrice() << std::endl;
		std::cout << "  -- " << getDescription() << std::endl;
	}

	void add(MenuComponent * const m) {
		throw std::logic_error("Unsupported Operation");
	}

	void remove(MenuComponent * const m) {
		throw std::logic_error("Unsupported Operation");
	}

	MenuComponent* getChild(const int &i) const {
		throw std::logic_error("Unsupported Operation");
	}
};

#endif