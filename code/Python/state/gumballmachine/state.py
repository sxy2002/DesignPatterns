from abc import ABCMeta, abstractmethod
import random
from .gumballmachine import GumballMachine

class State(metaclass=ABCMeta):
    @abstractmethod
    def insertQuarter(self) -> None:
        pass
    
    @abstractmethod
    def ejectQuarter(self) -> None:
        pass
    
    @abstractmethod
    def turnCrank(self) -> None:
        pass
    
    @abstractmethod
    def dispense(self) -> None:
        pass
    
    @abstractmethod
    def refill(self) -> None:
        pass
    
class NoQuarterState(State):
    def __init__(self, gm:GumballMachine):
        self.gumballMachine = gm
    
    def insertQuarter(self) -> None:
        print("You insert a quarter")
        self.gumballMachine.setState(self.gumballMachine.getHasQuarterState())
    
    def ejectQuarter(self) -> None:
        print("You haven't insert a quarter")
    
    def turnCrank(self)-> None:
        print("You turned but there is no quarter")
    
    def dispense(self) -> None:
        print("You need to pay first")
    
    def refill(self)-> None:
        pass
    
class HasQuarterState(State):
    def __init__(self, gm:GumballMachine):
        self.gumballMachine = gm
    
    def insertQuarter(self) -> None:
        print("You can't insert another quarter")
    
    def ejectQuarter(self) -> None:
        print("Quarter returned")
        self.gumballMachine.setState(self.gumballMachine.getNoQuarterState())
    
    def turnCrank(self)-> None:
        print("You turned...")
        randomNumber = random.randint(0, 10)
        if randomNumber == 0 and self.gumballMachine.getCount() > 1:
            self.gumballMachine.setState(self.gumballMachine.getWinnerState())
        else:
            self.gumballMachine.setState(self.gumballMachine.getSoldState())
    
    def dispense(self) -> None:
        print("You need to turn the crank")
    
    def refill(self)-> None:
        pass
    
class SoldState(State):
    def __init__(self, gm:GumballMachine):
        self.gumballMachine = gm
    
    def insertQuarter(self) -> None:
        print("Please wait, we are already giving you a gumball")
    
    def ejectQuarter(self) -> None:
        print("Sorry, you already turned the crank")
    
    def turnCrank(self)-> None:
        print("Turning twice doesn't get you another gumball")
    
    def dispense(self) -> None:
        self.gumballMachine.releaseBall()
        if self.gumballMachine.getCount() > 0:
            self.gumballMachine.setState(self.gumballMachine.getNoQuarterState())
        else:
            print("Oops, out of gumballs!")
            self.gumballMachine.setState(self.gumballMachine.getSoldOutState())
    
    def refill(self)-> None:
        pass
    
class WinnerState(State):
    def __init__(self, gm:GumballMachine):
        self.gumballMachine = gm
    
    def insertQuarter(self) -> None:
        print("Please wait, we are already giving you a gumball")
    
    def ejectQuarter(self) -> None:
        print("Sorry, you already turned the crank")
    
    def turnCrank(self)-> None:
        print("Turning twice doesn't get you another gumball")
    
    def dispense(self) -> None:
        self.gumballMachine.releaseBall()
        if self.gumballMachine.getCount() > 0:
            self.gumballMachine.releaseBall()
            print("You are a winner! You got two gumballs for your quarter")
            if self.gumballMachine.getCount() > 0:
                self.gumballMachine.setState(self.gumballMachine.getNoQuarterState())
            else:
                print("Oops, out of gumballs!")
                self.gumballMachine.setState(self.gumballMachine.getSoldOutState())
        else:
            print("Oops, out of gumballs!")
            self.gumballMachine.setState(self.gumballMachine.getSoldOutState())
    
    def refill(self)-> None:
        pass
    
class SoldOutState(State):
    def __init__(self, gm:GumballMachine):
        self.gumballMachine = gm
    
    def insertQuarter(self) -> None:
        print("You can't insert a quarter, the machine is sold out")
    
    def ejectQuarter(self) -> None:
        print("You can't eject, you have not inserted a quarter yet")
    
    def turnCrank(self)-> None:
        print("You turned, but there is no quarter")
    
    def dispense(self) -> None:
        print("No gumball dispense")
    
    def refill(self)-> None:
        # print(self.gumballMachine.getCount())
        if self.gumballMachine.getCount() > 0:
            self.gumballMachine.setState(self.gumballMachine.getNoQuarterState())
        else:
            self.gumballMachine.setState(self.gumballMachine.getSoldOutState())
