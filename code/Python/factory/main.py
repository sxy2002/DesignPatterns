from pizzastore.pizzastore import *

if __name__ == "__main__":
    nyStore = NYPizzaStore()
    chicagoStore = ChicagoPizzaStore()
    
    print(nyStore.orderPizza("cheese"))
    print(chicagoStore.orderPizza("cheese"))
    
    print(nyStore.orderPizza("pepperoni"))
    print(chicagoStore.orderPizza("pepperoni"))
    
    print(nyStore.orderPizza("veggie"))
    print(chicagoStore.orderPizza("veggie"))
    
    print(nyStore.orderPizza("clam"))
    print(chicagoStore.orderPizza("clam"))