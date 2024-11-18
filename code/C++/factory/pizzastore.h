#ifndef PIZZASTORE_H
#define PIZZASTORE_H

#include <string>
#include "pizza.h"
#include "pizzaingredientfactory.h"
#include <iostream>

class PizzaStore
{
protected:
	Pizza* pizza;
	PizzaIngredientFactory* pizzaIngredientFactory;

	virtual void createPizza(const std::string &type) = 0;
public:
	PizzaStore():pizza(nullptr), pizzaIngredientFactory(nullptr) {}

	virtual ~PizzaStore() {
		if (pizza != nullptr) {
			std::cout << "free pizza" << std::endl;
			delete pizza;
			pizza = nullptr;
		}
		if (pizzaIngredientFactory != nullptr) {
			std::cout << "free pizzaIngredientFactory" << std::endl;
			delete pizzaIngredientFactory;
			pizzaIngredientFactory = nullptr;
		}
	}

	Pizza* orderPizza(const std::string &type) {
		if (pizza != nullptr){
			std::cout << "free pizza" << std::endl;
			free(pizza);
			pizza = nullptr;
		}

		createPizza(type);
		if (pizza != nullptr) {
			std::cout << "Make " << pizza->getName() << std::endl;
			pizza->prepare();
			pizza->bake();
			pizza->cut();
			pizza->box();
		}
		return pizza;
	}
};

#endif