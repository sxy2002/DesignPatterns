from menu.menucomponent import MenuComponent, Menu, MenuItem
from waitress.waitress import Waitress

if __name__ == "__main__":
    pancakeHouseMenu = Menu("Pancake House Menu", "Breakfast")
    dinerMenu = Menu("Diner Menu", "Lunch")
    cafeMenu = Menu("Cafe Menu", "Dinner")
    dessertMenu = Menu("Dessert Menu", "Dessert of course!")
    coffeeMenu = Menu("Coffee Menu", "Stuff to go with your afternoon coffee")
    
    allMenus =  Menu("All Menus", "All menus combined")

    allMenus.add(pancakeHouseMenu)
    allMenus.add(dinerMenu)
    allMenus.add(cafeMenu)

    pancakeHouseMenu.add(MenuItem("K&B's Pancake Breakfast", "Pancakes with scrambled eggs and toast", 2.99, True))
    pancakeHouseMenu.add(MenuItem("Regular Pancake Breakfast", "Pancakes with fried eggs, sausage", 2.99, False))
    pancakeHouseMenu.add(MenuItem("Blueberry Pancakes", "Pancakes made with fresh blueberries, and blueberry syrup", 3.49, True))
    pancakeHouseMenu.add(MenuItem("Waffles", "Waffles with your choice of blueberries or strawberries", 3.59, True))

    dinerMenu.add(MenuItem("Vegetarian BLT", "(Fakin') Bacon with lettuce & tomato on whole wheat", 2.99, True))
    dinerMenu.add(MenuItem("BLT", "Bacon with lettuce & tomato on whole wheat", 2.99, False))
    dinerMenu.add(MenuItem("Soup of the day", "A bowl of the soup of the day, with a side of potato salad", 3.29, False))
    dinerMenu.add(dessertMenu)

    dessertMenu.add(MenuItem("Apple Pie", "Apple pie with a flakey crust, topped with vanilla icecream", 1.59, True))
    dessertMenu.add(MenuItem("Cheesecake", "Creamy  York cheesecake, with a chocolate graham crust", 1.99, True))

    cafeMenu.add(MenuItem("Veggie Burger and Air Fries", "Veggie burger on a whole wheat bun, lettuce, tomato, and fries", 3.99, True))
    cafeMenu.add(MenuItem("Soup of the day", "A cup of the soup of the day, with a side salad", 3.69, False))
    cafeMenu.add(coffeeMenu)

    coffeeMenu.add(MenuItem("Coffee Cake", "Crumbly cake topped with cinnamon and walnuts", 1.59, True))
    coffeeMenu.add(MenuItem("Bagel", "Flavors include sesame, poppyseed, cinnamon raisin, pumpkin", 0.69, False))

    waitress =  Waitress(allMenus)
    waitress.printMenu()