#include "chicagopizzaingredientfactory.h"

Dough* ChicagoPizzaIngredientFactory::createDough() {
	if (dough != nullptr) {
		std::cout << "free dough" << std::endl;
		free(dough);
		dough = nullptr;
	}

	dough = new ThickCrustDough();
	return dough;
}

Sauce* ChicagoPizzaIngredientFactory::createSauce() {
	if (sauce != nullptr) {
		std::cout << "free sauce" << std::endl;
		free(sauce);
		sauce = nullptr;
	}

	sauce = new PlumTomatoSauce();
	return sauce;
}

Cheese* ChicagoPizzaIngredientFactory::createCheese() {
	if (cheese != nullptr) {
		std::cout << "free cheese" << std::endl;
		free(cheese);
		cheese = nullptr;
	}

	cheese = new MozzarellaCheese();
	return cheese;
}

std::vector<Veggies*> ChicagoPizzaIngredientFactory::createVeggies() {
	if (veggies.size() > 0) {
		for (int i = 0; i < veggies.size(); i++) {
			if (veggies[i] != nullptr) {
				std::cout << "free veggies" << std::endl;
				free(veggies[i]);
				veggies[i] = nullptr;
			}
		}
		veggies.clear();
	}

	veggies.push_back(new BlackOlives());
	veggies.push_back(new Spinach());
	veggies.push_back(new Eggplant());
	return veggies;
}

Pepperoni* ChicagoPizzaIngredientFactory::createPepperoni() {
	if (pepperoni != nullptr) {
		std::cout << "free pepperoni" << std::endl;
		free(pepperoni);
		pepperoni = nullptr;
	}

	pepperoni = new SlicedPepperoni();
	return pepperoni;
}

Clam* ChicagoPizzaIngredientFactory::createClam() {
	if (clam != nullptr) {
		std::cout << "free clam" << std::endl;
		free(clam);
		clam = nullptr;
	}

	clam = new FrozenClam();
	return clam;
}