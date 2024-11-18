package factory.pizzastore;

import factory.ingredientfactory.PizzaIngredientFactory;
import factory.pizza.Pizza;

public abstract class PizzaStore {

    abstract protected Pizza createPizza(String type);

    public Pizza orderPizza(String type) {
        Pizza pizza = createPizza(type);
        System.out.println("--- Making a " + pizza.getName() + " ---");
        pizza.prepare();
        pizza.bake();
        pizza.cut();
        pizza.box();
        return pizza;
    }
}
