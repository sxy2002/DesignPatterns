#ifndef NYPIZZAINGREDIENTFACTORY_H
#define NYPIZZAINGREDIENTFACTORY_H

#include "pizzaingredientfactory.h"
#include "thincrustdough.h"
#include "marinarasauce.h"
#include "reggianocheese.h"
#include "garlic.h"
#include "onion.h"
#include "mushroom.h"
#include "redpepper.h"
#include "slicedpepperoni.h"
#include "freshclam.h"

class NYPizzaIngredientFactory : public PizzaIngredientFactory
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