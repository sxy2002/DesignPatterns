#include "menucomponent.h"
#include "menu.h"
#include "menuitem.h"
#include "waitress.h"

int main()
{
	MenuComponent *pancakeHouseMenu = new Menu("Pancake House Menu", "Breakfast");
	MenuComponent *dinerMenu = new Menu("Diner Menu", "Lunch");
	MenuComponent *cafeMenu = new Menu("Cafe Menu", "Dinner");
	MenuComponent *dessertMenu = new Menu("Dessert Menu", "Dessert of course!");
	MenuComponent *coffeeMenu = new Menu("Coffee Menu", "Stuff to go with your afternoon coffee");

	MenuComponent *allMenus = new Menu("All Menus", "All menus combined");

	allMenus->add(pancakeHouseMenu);
	allMenus->add(dinerMenu);
	allMenus->add(cafeMenu);

	pancakeHouseMenu->add(new MenuItem("K&B's Pancake Breakfast", "Pancakes with scrambled eggs and toast", 2.99, true));
	pancakeHouseMenu->add(new MenuItem("Regular Pancake Breakfast", "Pancakes with fried eggs, sausage", 2.99, false));
	pancakeHouseMenu->add(new MenuItem("Blueberry Pancakes", "Pancakes made with fresh blueberries, and blueberry syrup", 3.49, true));
	pancakeHouseMenu->add(new MenuItem("Waffles", "Waffles with your choice of blueberries or strawberries", 3.59, true));

	dinerMenu->add(new MenuItem("Vegetarian BLT", "(Fakin') Bacon with lettuce & tomato on whole wheat", 2.99, true));
	dinerMenu->add(new MenuItem("BLT", "Bacon with lettuce & tomato on whole wheat", 2.99, false));
	dinerMenu->add(new MenuItem("Soup of the day", "A bowl of the soup of the day, with a side of potato salad", 3.29, false));
	dinerMenu->add(dessertMenu);

	dessertMenu->add(new MenuItem("Apple Pie", "Apple pie with a flakey crust, topped with vanilla icecream", 1.59, true));
	dessertMenu->add(new MenuItem("Cheesecake", "Creamy New York cheesecake, with a chocolate graham crust", 1.99, true));

	cafeMenu->add(new MenuItem("Veggie Burger and Air Fries", "Veggie burger on a whole wheat bun, lettuce, tomato, and fries", 3.99, true));
	cafeMenu->add(new MenuItem("Soup of the day", "A cup of the soup of the day, with a side salad", 3.69, false));
	cafeMenu->add(coffeeMenu);

	coffeeMenu->add(new MenuItem("Coffee Cake", "Crumbly cake topped with cinnamon and walnuts", 1.59, true));
	coffeeMenu->add(new MenuItem("Bagel", "Flavors include sesame, poppyseed, cinnamon raisin, pumpkin", 0.69, false));

	Waitress waitress = Waitress(allMenus);
	waitress.printMenu();

	delete dessertMenu;
	delete coffeeMenu;
	delete pancakeHouseMenu;
	delete dinerMenu;
	delete cafeMenu;
	delete allMenus;
	return 0;
}