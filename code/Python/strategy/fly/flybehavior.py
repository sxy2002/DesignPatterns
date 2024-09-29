from abc import ABCMeta, abstractmethod

class FlyBehavior(metaclass=ABCMeta):
    @abstractmethod
    def fly(self):
        pass
    
class FlyWithWings(FlyBehavior):
    def fly(self):
        print("Fly With Wings")
        
class FlyNoWay(FlyBehavior):
    def fly(self):
        print("Fly No Way")
        
class FlyRocketPower(FlyBehavior):
    def fly(self):
        print("Fly Rocket Power")