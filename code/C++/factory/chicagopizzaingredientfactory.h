#ifndef CHICAGOPIZZAINGREDIENTFACTORY_H
#define CHICAGOPIZZAINGREDIENTFACTORY_H

#include "pizzaingredientfactory.h"
#include "thickcrustdough.h"
#include "plumtomatosauce.h"
#include "mozzarellacheese.h"
#include "blackolives.h"
#include "spinach.h"
#include "eggplant.h"
#include "slicedpepperoni.h"
#include "frozenclam.h"

class ChicagoPizzaIngredientFactory : public PizzaIngredientFactory
{
public:
	Dough* createDough();
	Sauce* createSauce();
	Cheese* createCheese();
	std::vector<Veggies*> createVeggies();
	Pepperoni* createPepperoni();
	Clam* createClam();
};

#endif