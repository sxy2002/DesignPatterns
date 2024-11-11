from abc import ABCMeta, abstractmethod
from enum import Enum

class Size(Enum):
    TALL = 1
    GRANDE = 2
    VENTI = 3

class Beverage(metaclass=ABCMeta):
    
    def __init__(self) -> None:
        self._description = "Unknown"
        self._size = Size.TALL
        
    def getDescription(self) -> str:    
        return self._description

    def setSize(self, s:Size) -> None:
        self._size = s
    
    def getSize(self) -> Size:
        return self._size
    
    @abstractmethod
    def cost(self) -> float:
        pass

class HouseBlend(Beverage):
    
    def __init__(self) -> None:
        super().__init__()
        self._description = "HouseBlend"
        
    def cost(self) -> float:
        return 0.89

class DarkRoast(Beverage):
    
    def __init__(self) -> None:
        super().__init__()
        self._description = "DarkRoast"
        
    def cost(self) -> float:
        return 0.99

class Espresso(Beverage):
    
    def __init__(self) -> None:
        super().__init__()
        self._description = "Espresso"
        
    def cost(self) -> float:
        return 1.05

class Decaf(Beverage):
    
    def __init__(self) -> None:
        super().__init__()
        self._description = "Decaf"
        
    def cost(self) -> float:
        return 1.99
    
class CondimentDecorator(Beverage, metaclass=ABCMeta):
    
    def __init__(self) -> None:
        self._beverage = None
    
    @abstractmethod
    def getDescription(self) -> str:
        pass

class Milk(CondimentDecorator):
    
    def __init__(self, b:Beverage) -> None:
        self._beverage = b
        
    def getDescription(self) -> str:
        return self._beverage.getDescription() + ", Milk"
    
    def cost(self) -> float:
        return self._beverage.cost() + 0.10

class Mocha(CondimentDecorator):
    
    def __init__(self, b:Beverage) -> None:
        self._beverage = b
        
    def getDescription(self) -> str:
        return self._beverage.getDescription() + ", Mocha"
    
    def cost(self) -> float:
        return self._beverage.cost() + 0.20

class Soy(CondimentDecorator):
        
    def __init__(self, b:Beverage) -> None:
        self._beverage = b
        
    def getDescription(self) -> str:
        return self._beverage.getDescription() + ", Soy"
    
    def cost(self) -> float:
        cost = 0
        size = self._beverage.getSize()
        if size == Size.TALL:
            cost = 0.10
        elif size == Size.GRANDE:
            cost = 0.15
        else:
            cost = 0.20
        return self._beverage.cost() + cost

class Whip(CondimentDecorator):
    
    def __init__(self, b:Beverage) -> None:
        self._beverage = b
        
    def getDescription(self) -> str:
        return self._beverage.getDescription() + ", Whip"
    
    def cost(self) -> float:
        return self._beverage.cost() + 0.10