from abc import ABCMeta, abstractmethod
import random

class Turkey(metaclass=ABCMeta):
    @abstractmethod
    def gobble(self):
        pass
    
    @abstractmethod
    def fly(self):
        pass
    
class WildTurkey(Turkey):
    def gobble(self):
        print("gobble")
        
    def fly(self):
        print("short fly")
        
class DuckAdapter(Turkey):
    def __init__(self, duck):
        self.__duck = duck
        
    def gobble(self):
        self.__duck.quack()
        
    def fly(self):
        randomNumber = random.randint(0, 5)
        print(randomNumber)
        if randomNumber == 0:
            self.__duck.fly()