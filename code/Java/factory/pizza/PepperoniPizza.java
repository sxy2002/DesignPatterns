package factory.pizza;

import factory.ingredientfactory.PizzaIngredientFactory;

public class PepperoniPizza extends Pizza{
    private PizzaIngredientFactory pizzaIngredientFactory;

    public PepperoniPizza(PizzaIngredientFactory pizzaIngredientFactory) {
        this.pizzaIngredientFactory = pizzaIngredientFactory;
    }

    @Override
    public void prepare() {
        System.out.println("Preparing " + name);
        dough = this.pizzaIngredientFactory.createDough();
        sauce = this.pizzaIngredientFactory.createSauce();
        cheese = this.pizzaIngredientFactory.createCheese();
        veggies = this.pizzaIngredientFactory.createVeggies();
        pepperoni = this.pizzaIngredientFactory.createPepperoni();
    }
}
