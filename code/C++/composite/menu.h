#ifndef MENU_H
#define MENU_H

#include "menucomponent.h"
#include <list>

class Menu : public MenuComponent
{
private:
	std::string name;
	std::string description;
	std::list<MenuComponent*> menuComponents;
public:
	Menu(const std::string &n, const std::string &d) :name(n), description(d)	{}

	~Menu() {
		for (MenuComponent* item : menuComponents)
			if (item != nullptr) {
				delete(item);
				item = nullptr;
			}
	}

	std::string getName() const{
		return this->name;
	}

	std::string getDescription() const{
		return this->description;
	}

	void add(MenuComponent * const m) {
		menuComponents.push_back(m);
	}

	void remove(MenuComponent * const m) {
		menuComponents.remove(m);
	}

	MenuComponent* getChild(const int &i)const {
		int count = 0;
		for (MenuComponent* item : menuComponents) {
			if (count == i)
				return item;
			count++;
		}
		return nullptr;
	}

	void print() const{
		std::cout << "\n" << getName();
		std::cout << ", " << getDescription() << std::endl;
		std::cout << "---------------" << std::endl;

		for (const MenuComponent * const item : menuComponents)
			item->print();
	}

	double getPrice() const{
		throw std::logic_error("Unsupported Operation");
	}

	bool isVegetarian() const{
		throw std::logic_error("Unsupported Operation");
	}
};

#endif