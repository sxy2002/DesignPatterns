from abc import ABCMeta, abstractmethod

class QuackBehavior(metaclass=ABCMeta):
    @abstractmethod
    def quack(self):
        pass
    
class Quack(QuackBehavior):
    def quack(self):
        print("Quack")
        
class Squack(QuackBehavior):
    def quack(self):
        print("Squack")
        
class MuteQuack(QuackBehavior):
    def quack(self):
        print("MuteQuack")