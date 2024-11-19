from abc import ABCMeta, abstractmethod

class Dough(metaclass=ABCMeta):
    @abstractmethod
    def __str__(self) -> str:
        pass
    
class ThinCrustDough(Dough):
    def __str__(self) -> str:
        return "Thin Crust Dough"
    
class ThickCrustDough(Dough):
    def __str__(self) -> str:
        return "Thick Crust Dough"
    
    
class Sauce(metaclass=ABCMeta):
    @abstractmethod
    def __str__(self) -> str:
        pass
    
class MarinaraSauce(Sauce):
    def __str__(self) -> str:
        return "Marinara Sauce"
    
class PlumTomatoSauce(Sauce):
    def __str__(self) -> str:
        return "Plum Tomato Sauce"
    
    
class Cheese(metaclass=ABCMeta):
    @abstractmethod
    def __str__(self) -> str:
        pass

class ReggianoCheese(Cheese):
    def __str__(self) -> str:
        return "Reggiano Cheese"
    
class MozzarellaCheese(Cheese):
    def __str__(self) -> str:
        return "Mozzarella Cheese"
    
    
class Veggies(metaclass=ABCMeta):
    @abstractmethod
    def __str__(self) -> str:
        pass
    
class Garlic(Veggies):
    def __str__(self) -> str:
        return "Garlic"
    
class Onion(Veggies):
    def __str__(self) -> str:
        return "Onion"
    
class Mushroom(Veggies):
    def __str__(self) -> str:
        return "Mushroom"

class RedPepper(Veggies):
    def __str__(self) -> str:
        return "Red Pepper"

class BlackOlives(Veggies):
    def __str__(self) -> str:
        return "Black Olives"

class Spinach(Veggies):
    def __str__(self) -> str:
        return "Spinach"

class EggPlant(Veggies):
    def __str__(self) -> str:
        return "EggPlant"
    
    
class Pepperoni(metaclass=ABCMeta):
    @abstractmethod
    def __str__(self) -> str:
        pass
    
class SlicedPepperoni(Pepperoni):
    def __str__(self) -> str:
        return "Sliced Pepperoni"
  
    
class Clam(metaclass=ABCMeta):
    @abstractmethod
    def __str__(self) -> str:
        pass
    
class FreshClam(Clam):
    def __str__(self) -> str:
        return "Fresh Clam"
    
class FrozenClam(Clam):
    def __str__(self) -> str:
        return "Frozen Clam"