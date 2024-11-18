#ifndef CHEESEPIZZA_H
#define CHEESEPIZZA_H

#include "pizza.h"
#include "pizzaingredientfactory.h"

class CheesePizza : public Pizza
{
private:
	PizzaIngredientFactory* pizzaIngredientFactory;
public:
	CheesePizza(PizzaIngredientFactory * const pifactory) {
		pizzaIngredientFactory = pifactory;
	}

	void prepare() {
		std::cout << "Preparing " << name << std::endl;
		dough = pizzaIngredientFactory->createDough();
		sauce = pizzaIngredientFactory->createSauce();
		cheese = pizzaIngredientFactory->createCheese();
	}
};

#endif