#ifndef NYPIZZASTORE_H
#define NYPIZZASTORE_H

#include "pizzastore.h"
#include "pizza.h"
#include "nypizzaingredientfactory.h"
#include "cheesepizza.h"
#include "pepperonipizza.h"
#include "veggiepizza.h"
#include "clampizza.h"

class NYPizzaStore : public PizzaStore
{
protected:
	void createPizza(const std::string &type) {
		if (type == "cheese") {
			pizza = new CheesePizza(pizzaIngredientFactory);
			pizza->setName("New York Style Cheese Pizza");
		}
		else if (type == "pepperoni") {
			pizza = new PepperoniPizza(pizzaIngredientFactory);
			pizza->setName("New York Style Pepperoni Pizza");
		}
		else if (type == "veggie") {
			pizza = new VeggiePizza(pizzaIngredientFactory);
			pizza->setName("New York Style Veggie Pizza");
		}
		else if (type == "clam") {
			pizza = new ClamPizza(pizzaIngredientFactory);
			pizza->setName("New York Style Clam Pizza");
		}
	}
public:
	NYPizzaStore() {
		pizzaIngredientFactory = new NYPizzaIngredientFactory();
	}
};

#endif