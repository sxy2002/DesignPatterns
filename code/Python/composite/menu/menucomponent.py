from abc import ABCMeta, abstractmethod

class MenuComponent(metaclass=ABCMeta):
    
    def getName(self) -> str:
        raise NotImplementedError("Unsupported Operation")
    
    def getDescription(self) -> str:
        raise NotImplementedError("Unsupported Operation")
      
    def getPrice(self) -> float:
        raise NotImplementedError("Unsupported Operation")
      
    def isVegetarian(self) -> bool:
        raise NotImplementedError("Unsupported Operation")
  
    def print(self) -> None:
        raise NotImplementedError("Unsupported Operation")
    
    def add(self, m:'MenuComponent') -> None:
        raise NotImplementedError("Unsupported Operation")
   
    def remove(self, m:'MenuComponent') -> None:
        raise NotImplementedError("Unsupported Operation")
  
    def getChild(self, i:int) -> 'MenuComponent':
        raise NotImplementedError("Unsupported Operation")
    
class MenuItem(MenuComponent):
    def __init__(self, name:str, description:str, price:float, vegetarian:bool):
        self.__name = name
        self.__description = description
        self.__price = price
        self.__vegetarian = vegetarian
        
    def getName(self) -> str:
        return self.__name
    
    def getDescription(self) -> str:
        return self.__description
    
    def getPrice(self) -> float:
        return self.__price
    
    def isVegetarian(self) -> bool:
        return self.__vegetarian
    
    def print(self) -> None:
        print(f"  {self.getName()}", end='')
        if self.isVegetarian():
            print("(v)", end='')
        print(f", {self.getPrice()}")
        print(f"  -- {self.getDescription()}")

class Menu(MenuComponent):
    def __init__(self, name:str, description:str):
        self.__menuComponents = []
        self.__name = name
        self.__description = description
        
    def add(self, m:'MenuComponent') -> None:
        self.__menuComponents.append(m)
        
    def remove(self, m:'MenuComponent') -> None:
        self.__menuComponents.remove(m)
        
    def getChild(self, i:int) -> 'MenuComponent':
        return self.__menuComponents[i]
    
    def getName(self) -> str:
        return self.__name
    
    def getDescription(self) -> str:
        return self.__description
    
    def print(self) -> None:
        print(f"\n{self.getName()}, {self.getDescription()}")
        print("---------------------")
        
        for m in self.__menuComponents:
            m.print()