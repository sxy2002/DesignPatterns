#include "nypizzaingredientfactory.h"

Dough* NYPizzaIngredientFactory::createDough() {
	if (dough != nullptr) {
		std::cout << "free dough" << std::endl;
		free(dough);
		dough = nullptr;
	}

	dough = new ThinCrustDough();
	return dough;
}

Sauce* NYPizzaIngredientFactory::createSauce() {
	if (sauce != nullptr) {
		std::cout << "free sauce" << std::endl;
		free(sauce);
		sauce = nullptr;
	}

	sauce = new MarinaraSauce();
	return sauce;
}

Cheese* NYPizzaIngredientFactory::createCheese() {
	if (cheese != nullptr) {
		std::cout << "free cheese" << std::endl;
		free(cheese);
		cheese = nullptr;
	}

	cheese = new ReggianoCheese();
	return cheese;
}

std::vector<Veggies*> NYPizzaIngredientFactory::createVeggies() {
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

	veggies.push_back(new Garlic());
	veggies.push_back(new Onion());
	veggies.push_back(new Mushroom());
	veggies.push_back(new RedPepper());
	return veggies;
}

Pepperoni* NYPizzaIngredientFactory::createPepperoni() {
	if (pepperoni != nullptr) {
		std::cout << "free pepperoni" << std::endl;
		free(pepperoni);
		pepperoni = nullptr;
	}

	pepperoni = new SlicedPepperoni();
	return pepperoni;
}

Clam* NYPizzaIngredientFactory::createClam() {
	if (clam != nullptr) {
		std::cout << "free clam" << std::endl;
		free(clam);
		clam = nullptr;
	}

	clam = new FreshClam();
	return clam;
}