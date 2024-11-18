#ifndef PEPPERONIPIZZA_H
#define PEPPERONIPIZZA_H

#include "pizza.h"
#include "pizzaingredientfactory.h"

class PepperoniPizza : public Pizza
{
private:
	PizzaIngredientFactory* pizzaIngredientFactory;
public:
	PepperoniPizza(PizzaIngredientFactory * const pifactory) {
		pizzaIngredientFactory = pifactory;
	}

	void prepare() {
		std::cout << "Preparing " << name << std::endl;
		dough = pizzaIngredientFactory->createDough();
		sauce = pizzaIngredientFactory->createSauce();
		cheese = pizzaIngredientFactory->createCheese();
		veggies = pizzaIngredientFactory->createVeggies();
		pepperoni = pizzaIngredientFactory->createPepperoni();
	}
};

#endif