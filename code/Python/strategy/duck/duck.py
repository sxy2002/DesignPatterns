from fly.flybehavior import FlyBehavior, FlyWithWings, FlyNoWay
from quack.quackbehavior import QuackBehavior, Quack, MuteQuack
from abc import ABCMeta, abstractmethod

class Duck(metaclass=ABCMeta):
    
    def __init__(self, f:FlyBehavior, q:QuackBehavior) -> None:
        self.__flyBehavior = f
        self.__quackBehavior = q
    
    def swim(self) -> None:
        print("swim")
        
    @abstractmethod
    def display(self) -> None:
        pass
    
    def performFly(self) -> None:
        self.__flyBehavior.fly()
        
    def performQuack(self) -> None:
        self.__quackBehavior.quack()
        
    def setFlyBehavior(self, f:FlyBehavior) -> None:
        self.__flyBehavior = f
        
    def setQuackBehavior(self, q:QuackBehavior) -> None:
        self.__quackBehavior = q
    

class MallardDuck(Duck):
    
    def __init__(self) -> None:
        super().__init__(FlyWithWings(), Quack())
        
    def display(self) -> None:
        print("MallardDuck")
    
    
class RedHeadDuck(Duck):
    
    def __init__(self) -> None:
        super().__init__(FlyWithWings(), Quack())
        
    def display(self) -> None:
        print("RedHeadDuck")
  
        
class RubberDuck(Duck):
    
    def __init__(self) -> None:
        super().__init__(FlyNoWay(), MuteQuack())
        
    def display(self) -> None:
        print("RubberDuck")
    