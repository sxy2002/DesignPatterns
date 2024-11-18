package factory.pizza;

import factory.ingredientfactory.PizzaIngredientFactory;

public class ClamPizza extends Pizza{
    private PizzaIngredientFactory pizzaIngredientFactory;

    public ClamPizza(PizzaIngredientFactory pizzaIngredientFactory) {
        this.pizzaIngredientFactory = pizzaIngredientFactory;
    }

    @Override
    public void prepare() {
        System.out.println("Preparing " + name);
        dough = this.pizzaIngredientFactory.createDough();
        sauce = this.pizzaIngredientFactory.createSauce();
        cheese = this.pizzaIngredientFactory.createCheese();
        clam = this.pizzaIngredientFactory.createClam();
    }
}
