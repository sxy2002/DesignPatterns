#ifndef PIZZAINGREDIENTFACTORY_H
#define PIZZAINGREDIENTFACTORY_H

#include "dough.h"
#include "sauce.h"
#include "cheese.h"
#include "veggies.h"
#include "pepperoni.h"
#include "clam.h"

#include <vector>

class PizzaIngredientFactory
{
protected:
	Dough* dough;
	Sauce* sauce;
	Cheese* cheese;
	std::vector<Veggies*> veggies;
	Pepperoni* pepperoni;
	Clam* clam;
public:
	PizzaIngredientFactory() : dough(nullptr), sauce(nullptr), cheese(nullptr), pepperoni(nullptr), clam(nullptr)	{}
	virtual ~PizzaIngredientFactory() {
		if (dough != nullptr) {
			std::cout << "free dough" << std::endl;
			free(dough);
			dough = nullptr;
		}
		if (sauce != nullptr) {
			std::cout << "free sauce" << std::endl;
			free(sauce);
			sauce = nullptr;
		}
		if (cheese != nullptr) {
			std::cout << "free cheese" << std::endl;
			free(cheese);
			cheese = nullptr;
		}
		for (int i = 0; i < veggies.size(); i++) {
			if (veggies[i] != nullptr) {
				std::cout << "free veggies" << std::endl;
				free(veggies[i]);
				veggies[i] = nullptr;
			}
		}
		if (pepperoni != nullptr) {
			std::cout << "free pepperoni" << std::endl;
			free(pepperoni);
			pepperoni = nullptr;
		}
		if (clam != nullptr) {
			std::cout << "free clam" << std::endl;
			free(clam);
			clam = nullptr;
		}
	}

	virtual Dough* createDough() = 0;
	virtual Sauce* createSauce() = 0;
	virtual Cheese* createCheese() = 0;
	virtual std::vector<Veggies*> createVeggies() = 0;
	virtual Pepperoni* createPepperoni() = 0;
	virtual Clam* createClam() = 0;
};

#endif