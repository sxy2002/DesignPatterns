package factory.pizzastore;

import factory.ingredientfactory.NYPizzaIngredientFactory;
import factory.ingredientfactory.PizzaIngredientFactory;
import factory.pizza.*;

public class NYPizzaStore extends PizzaStore{
    private PizzaIngredientFactory pizzaIngredientFactory;

    public NYPizzaStore() {
        this.pizzaIngredientFactory = new NYPizzaIngredientFactory();
    }

    @Override
    protected Pizza createPizza(String type) {
        Pizza pizza = null;
        if(type.equals("cheese")) {
            pizza = new CheesePizza(this.pizzaIngredientFactory);
            pizza.setName("New York Style Cheese Pizza");
        }
        else if(type.equals("pepperoni")) {
            pizza = new PepperoniPizza(this.pizzaIngredientFactory);
            pizza.setName("New York Style Pepperoni Pizza");
        }
        else if(type.equals("veggie")) {
            pizza = new VeggiePizza(this.pizzaIngredientFactory);
            pizza.setName("New York Style Veggie Pizza");
        }
        else if(type.equals("clam")) {
            pizza = new ClamPizza(this.pizzaIngredientFactory);
            pizza.setName("New York Style Clam Pizza");
        }
        return pizza;
    }
}
