from abc import ABCMeta, abstractmethod
from typing import final

class Beverage(metaclass=ABCMeta):    
    @final
    def prepareRecipe(self) -> None:
        self._boilWater()
        self._brew()
        self._pourInCup()
        if self._isAddCondiments():
            self._addCondiments()
    
    def _boilWater(self) -> None:
        print("Boil Water")
            
    @abstractmethod
    def _brew(self) -> None:
        pass
    
    def _pourInCup(self) -> None:
        print("pour In Cup")

    @abstractmethod
    def _addCondiments(self) -> None:
        pass
    
    def _isAddCondiments(self) -> bool:
        return True

class Coffee(Beverage):
    def _brew(self) -> None:
        print("brew Coffee")
        
    def _addCondiments(self) -> None:
        print("Add Milk")
        
    def _isAddCondiments(self) -> bool:
        print("Do you want to add milk? (y/n)")
        input_str = input()
        if input_str.upper().startswith("Y"):
            return True
        return False
    
class Tea(Beverage):
    def _brew(self) -> None:
        print("brew Tea")
        
    def _addCondiments(self) -> None:
        print("Add Lemon")
        
    def _isAddCondiments(self) -> bool:
        print("Do you want to add lemon? (y/n)")
        input_str = input()
        if input_str.upper().startswith("Y"):
            return True
        return False