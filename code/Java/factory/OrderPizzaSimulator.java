package factory;

import factory.pizza.Pizza;
import factory.pizzastore.ChicagoPizzaStore;
import factory.pizzastore.NYPizzaStore;
import factory.pizzastore.PizzaStore;

public class OrderPizzaSimulator {
    public static void main(String[] args) {
        PizzaStore nyPizzaStore = new NYPizzaStore();
        PizzaStore chicagoPizzaStore = new ChicagoPizzaStore();

        System.out.println(nyPizzaStore.orderPizza("cheese"));
        System.out.println(chicagoPizzaStore.orderPizza("cheese"));

        System.out.println(nyPizzaStore.orderPizza("pepperoni"));
        System.out.println(chicagoPizzaStore.orderPizza("pepperoni"));

        System.out.println(nyPizzaStore.orderPizza("veggie"));
        System.out.println(chicagoPizzaStore.orderPizza("veggie"));

        System.out.println(nyPizzaStore.orderPizza("clam"));
        System.out.println(chicagoPizzaStore.orderPizza("clam"));
    }
}
