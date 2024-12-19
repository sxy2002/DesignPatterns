from abc import ABCMeta, abstractmethod
from turkey.turkey import WildTurkey

class Duck(metaclass=ABCMeta):
    @abstractmethod
    def quack(self):
        pass
    
    @abstractmethod
    def fly(self):
        pass
    
class MallardDuck(Duck):
    def quack(self):
        print("quack")
        
    def fly(self):
        print("fly")
        
class TurkeyAdapter(Duck, WildTurkey):
    
    def quack(self):
        print(TurkeyAdapter.__mro__)
        WildTurkey.gobble(self)
        
    def fly(self):
        for i in range(5):
            WildTurkey.fly(self)