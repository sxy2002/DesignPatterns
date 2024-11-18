#ifndef CLAMPIZZA_H
#define CLAMPIZZA_H

#include "pizza.h"
#include "pizzaingredientfactory.h"

class ClamPizza : public Pizza
{
private:
	PizzaIngredientFactory* pizzaIngredientFactory;
public:
	ClamPizza(PizzaIngredientFactory * const pifactory) {
		pizzaIngredientFactory = pifactory;
	}

	void prepare() {
		std::cout << "Preparing " << name << std::endl;
		dough = pizzaIngredientFactory->createDough();
		sauce = pizzaIngredientFactory->createSauce();
		cheese = pizzaIngredientFactory->createCheese();
		clam = pizzaIngredientFactory->createClam();
	}
};

#endif
