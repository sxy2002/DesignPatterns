package factory.pizzastore;

import factory.ingredientfactory.ChicagoPizzaIngredientFactory;
import factory.ingredientfactory.PizzaIngredientFactory;
import factory.pizza.*;

public class ChicagoPizzaStore extends PizzaStore{
    private PizzaIngredientFactory pizzaIngredientFactory;

    public ChicagoPizzaStore() {
        this.pizzaIngredientFactory = new ChicagoPizzaIngredientFactory();
    }

    @Override
    protected Pizza createPizza(String type) {
        Pizza pizza = null;
        if(type.equals("cheese")) {
            pizza = new CheesePizza(this.pizzaIngredientFactory);
            pizza.setName("Chicago Style Cheese Pizza");
        }
        else if(type.equals("pepperoni")) {
            pizza = new PepperoniPizza(this.pizzaIngredientFactory);
            pizza.setName("Chicago Style Pepperoni Pizza");
        }
        else if(type.equals("veggie")) {
            pizza = new VeggiePizza(this.pizzaIngredientFactory);
            pizza.setName("Chicago Style Veggie Pizza");
        }
        else if(type.equals("clam")) {
            pizza = new ClamPizza(this.pizzaIngredientFactory);
            pizza.setName("Chicago Style Clam Pizza");
        }
        return pizza;
    }
}
