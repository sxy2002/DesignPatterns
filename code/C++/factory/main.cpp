#include "pizzastore.h"
#include "nypizzastore.h"
#include "chicagopizzastore.h"

int main()
{
	PizzaStore *nyPizzaStore = new NYPizzaStore();
	PizzaStore *chiPizzaStore = new ChicagoPizzaStore();

	std::cout << *(nyPizzaStore->orderPizza("cheese")) << std::endl;
	std::cout << *(chiPizzaStore->orderPizza("cheese")) << std::endl;

	std::cout << *(nyPizzaStore->orderPizza("pepperoni")) << std::endl;
	std::cout << *(chiPizzaStore->orderPizza("pepperoni")) << std::endl;

	std::cout << *(nyPizzaStore->orderPizza("veggie")) << std::endl;
	std::cout << *(chiPizzaStore->orderPizza("veggie")) << std::endl;

	std::cout << *(nyPizzaStore->orderPizza("clam")) << std::endl;
	std::cout << *(chiPizzaStore->orderPizza("clam")) << std::endl;

	delete nyPizzaStore;
	delete chiPizzaStore;
	return 0;
}