from abc import ABCMeta, abstractmethod
from ingredient.ingredient import *
from typing import List

class PizzaIngredientFactory(metaclass=ABCMeta):
    @abstractmethod
    def createDough(self) -> Dough:
        pass
    
    @abstractmethod
    def createSauce(self) -> Sauce:
        pass
    
    @abstractmethod
    def createCheese(self) -> Cheese:
        pass
    
    @abstractmethod
    def createVeggies(self) -> List[Veggies]:
        pass
    
    @abstractmethod
    def createPepperoni(self) -> Pepperoni:
        pass
    
    @abstractmethod
    def createClam(self) -> Clam:
        pass
    
class NYPizzaIngredientFactory(PizzaIngredientFactory):
    def createDough(self) -> Dough:
        return ThinCrustDough()
    
    def createSauce(self) -> Sauce:
        return MarinaraSauce()
    
    def createCheese(self) -> Cheese:
        return ReggianoCheese()
    
    def createVeggies(self) -> List[Veggies]:
        return [Garlic(), Onion(), Mushroom(), RedPepper()]
    
    def createPepperoni(self) -> Pepperoni:
        return SlicedPepperoni()
    
    def createClam(self) -> Clam:
        return FreshClam()
    
class ChicagoPizzaIngredientFactory(PizzaIngredientFactory):
    def createDough(self) -> Dough:
        return ThickCrustDough()
    
    def createSauce(self) -> Sauce:
        return PlumTomatoSauce()
    
    def createCheese(self) -> Cheese:
        return MozzarellaCheese()
    
    def createVeggies(self) -> List[Veggies]:
        return [BlackOlives(), Spinach(), EggPlant()]
    
    def createPepperoni(self) -> Pepperoni:
        return SlicedPepperoni()
    
    def createClam(self) -> Clam:
        return FrozenClam()