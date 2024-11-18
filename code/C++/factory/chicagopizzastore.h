#ifndef CHICAGOPIZZASTORE_H
#define CHICAGOPIZZASTORE_H

#include "pizzastore.h"
#include "pizza.h"
#include "chicagopizzaingredientfactory.h"
#include "cheesepizza.h"
#include "pepperonipizza.h"
#include "veggiepizza.h"
#include "clampizza.h"

class ChicagoPizzaStore : public PizzaStore
{
protected:
	void createPizza(const std::string &type) {
		if (type == "cheese") {
			pizza = new CheesePizza(pizzaIngredientFactory);
			pizza->setName("Chicago Style Cheese Pizza");
		}
		else if (type == "pepperoni") {
			pizza = new PepperoniPizza(pizzaIngredientFactory);
			pizza->setName("Chicago Style Pepperoni Pizza");
		}
		else if (type == "veggie") {
			pizza = new VeggiePizza(pizzaIngredientFactory);
			pizza->setName("Chicago Style Veggie Pizza");
		}
		else if (type == "clam") {
			pizza = new ClamPizza(pizzaIngredientFactory);
			pizza->setName("Chicago Style Clam Pizza");
		}
	}
public:
	ChicagoPizzaStore() {
		pizzaIngredientFactory = new ChicagoPizzaIngredientFactory();
	}
};

#endif