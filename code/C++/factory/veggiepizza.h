#ifndef VEGGIEPIZZA_H
#define VEGGIEPIZZA_H

#include "pizza.h"
#include "pizzaingredientfactory.h"

class VeggiePizza : public Pizza
{
private:
	PizzaIngredientFactory* pizzaIngredientFactory;
public:
	VeggiePizza(PizzaIngredientFactory * const pifactory) {
		pizzaIngredientFactory = pifactory;
	}

	void prepare() {
		std::cout << "Preparing " << name << std::endl;
		dough = pizzaIngredientFactory->createDough();
		sauce = pizzaIngredientFactory->createSauce();
		cheese = pizzaIngredientFactory->createCheese();
		veggies = pizzaIngredientFactory->createVeggies();
	}
};

#endif

