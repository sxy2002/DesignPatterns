#include "coffee.h"
#include "tea.h"
#include "beverage.h"

int main() 
{
	Beverage *coffee = new Coffee();
	coffee->prepareRecipe();

	Beverage *tea = new Tea();
	tea->prepareRecipe();

	delete tea;
	delete coffee;
	return 0;
}