from abc import ABCMeta, abstractmethod

class Pizza(metaclass=ABCMeta):
    
    def __init__(self) -> None:
        self._name = None
        self._dough = None
        self._sauce = None
        self._cheese = None
        self._veggies = []
        self._pepperoni = None
        self._clam = None
    
    @abstractmethod
    def prepare(self) -> None:
        pass
    
    def bake(self) -> None:
        print("Bake for 25 minutes at 350")
        
    def cut(self) -> None:
        print("Cutting the pizza into diagonal slices")
        
    def box(self) -> None:
        print("Place pizza in official PizzaStore box")
        
    def setName(self, name: str) -> None:
        self._name = name
        
    def getName(self) -> str:
        return self._name
    
    def __str__(self) -> str:
        display = []
        display.append(f"---- {self._name} ----")
        if self._dough is not None:
            display.append(self._dough.__str__())
        if self._sauce is not None:
            display.append(self._sauce.__str__())
        if self._cheese is not None:
            display.append(self._cheese.__str__())
        if len(self._veggies) > 0:
            display.append(", ".join([veggie.__str__() for veggie in self._veggies]))
        if self._pepperoni is not None:
            display.append(self._pepperoni.__str__())
        if self._clam is not None:
            display.append(self._clam.__str__())
        return "\n".join(display)
    
class CheesePizza(Pizza):
    
    def __init__(self, ingredientFactory) -> None:
        super().__init__()
        self.__ingredientFactory = ingredientFactory
    
    def prepare(self) -> None:
        print(f"Preparing {self._name}")
        self._dough = self.__ingredientFactory.createDough()
        self._sauce = self.__ingredientFactory.createSauce()
        self._cheese = self.__ingredientFactory.createCheese()
    
class PepperoniPizza(Pizza):
            
    def __init__(self, ingredientFactory) -> None:
        super().__init__()
        self.__ingredientFactory = ingredientFactory
    
    def prepare(self) -> None:
        print(f"Preparing {self._name}")
        self._dough = self.__ingredientFactory.createDough()
        self._sauce = self.__ingredientFactory.createSauce()
        self._cheese = self.__ingredientFactory.createCheese()
        self._veggies = self.__ingredientFactory.createVeggies()  
        self._pepperoni = self.__ingredientFactory.createPepperoni()    
      
class VeggiePizza(Pizza):
        
    def __init__(self, ingredientFactory) -> None:
        super().__init__()
        self.__ingredientFactory = ingredientFactory
    
    def prepare(self) -> None:
        print(f"Preparing {self._name}")
        self._dough = self.__ingredientFactory.createDough()
        self._sauce = self.__ingredientFactory.createSauce()
        self._cheese = self.__ingredientFactory.createCheese()
        self._veggies = self.__ingredientFactory.createVeggies()  
        
class ClamPizza(Pizza):
        
    def __init__(self, ingredientFactory) -> None:
        super().__init__()
        self.__ingredientFactory = ingredientFactory
    
    def prepare(self) -> None:
        print(f"Preparing {self._name}")
        self._dough = self.__ingredientFactory.createDough()
        self._sauce = self.__ingredientFactory.createSauce()
        self._cheese = self.__ingredientFactory.createCheese()
        self._clam = self.__ingredientFactory.createClam()