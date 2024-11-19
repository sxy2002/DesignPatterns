from abc import ABCMeta, abstractmethod
from pizza.pizza import *
from ingredient.ingredientfactory import NYPizzaIngredientFactory, ChicagoPizzaIngredientFactory

class PizzaStore(metaclass=ABCMeta):
    
    def __init__(self) -> None:
        self._ingredientFactory = None
        
    @abstractmethod
    def createPizza(self, type: str) -> Pizza:
        pass
    
    def orderPizza(self, type: str) -> Pizza:
        pizza = self.createPizza(type)
        print(f"--- Making {pizza.getName()} ---")
        pizza.prepare()
        pizza.bake()
        pizza.cut()
        pizza.box()
        return pizza
    
class NYPizzaStore(PizzaStore):
    
    def __init__(self) -> None:
        self._ingredientFactory = NYPizzaIngredientFactory()
    
    def createPizza(self, type: str) -> Pizza:
        pizza = None
        
        if type == "cheese":
            pizza = CheesePizza(self._ingredientFactory)
            pizza.setName("New York Style Cheese Pizza")
        elif type == "pepperoni":
            pizza = PepperoniPizza(self._ingredientFactory)
            pizza.setName("New York Style Pepperoni Pizza")
        elif type == "veggie":
            pizza = VeggiePizza(self._ingredientFactory)
            pizza.setName("New York Style Veggie Pizza")
        elif type == "clam":
            pizza = ClamPizza(self._ingredientFactory)
            pizza.setName("New York Style Clam Pizza")
            
        return pizza
    
class ChicagoPizzaStore(PizzaStore):
        
    def __init__(self) -> None:
        self._ingredientFactory = ChicagoPizzaIngredientFactory()
    
    def createPizza(self, type: str) -> Pizza:
        pizza = None
        
        if type == "cheese":
            pizza = CheesePizza(self._ingredientFactory)
            pizza.setName("Chicago Style Cheese Pizza")
        elif type == "pepperoni":
            pizza = PepperoniPizza(self._ingredientFactory)
            pizza.setName("Chicago Style Pepperoni Pizza")
        elif type == "veggie":
            pizza = VeggiePizza(self._ingredientFactory)
            pizza.setName("Chicago Style Veggie Pizza")
        elif type == "clam":
            pizza = ClamPizza(self._ingredientFactory)
            pizza.setName("Chicago Style Clam Pizza")
            
        return pizza