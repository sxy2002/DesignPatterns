#ifndef PIZZA_H
#define PIZZA_H

#include <string>
#include <vector>
#include "dough.h"
#include "sauce.h"
#include "veggies.h"
#include "cheese.h"
#include "pepperoni.h"
#include "clam.h"
#include <iostream>

class Pizza
{
protected:
	std::string name;
	Dough* dough;
	Sauce* sauce;
	std::vector<Veggies*> veggies;
	Cheese* cheese;
	Pepperoni* pepperoni;
	Clam* clam;
public:
	Pizza():dough(nullptr), sauce(nullptr),cheese(nullptr), pepperoni(nullptr), clam(nullptr) {}
	virtual ~Pizza() = default;

	virtual void prepare() = 0;
	void bake() {
		std::cout << "Bake for 25 minutes at 350" << std::endl;
	}
	void cut() {
		std::cout << "Cutting the pizza into diagonal slices" << std::endl;
	}
	void box() {
		std::cout << "Place pizza in official PizzaStore box" << std::endl;
	}
	void setName(const std::string &n) {
		name = n;
	}
	std::string getName() {
		return name;
	}
	friend std::ostream& operator<<(std::ostream& os, const Pizza &p);
};

std::ostream& operator<<(std::ostream& os, const Pizza &p) {
	os << p.name << ":" << std::endl;
	if (p.dough != nullptr)
		os << p.dough->getName() << std::endl;
	if (p.sauce != nullptr)
		os << p.sauce->getName() << std::endl;
	if (p.cheese != nullptr)
		os << p.cheese->getName() << std::endl;
	for (int i = 0; i < p.veggies.size(); i++)
		if (p.veggies[i] != nullptr){
		os << p.veggies[i]->getName();
		if (i == p.veggies.size() - 1)
			os << std::endl; 
		else
			os << ", ";
		}
	if (p.pepperoni != nullptr)
		os << p.pepperoni->getName() << std::endl;
	if (p.clam != nullptr)
		os << p.clam->getName() << std::endl;
	return os;
}

#endif