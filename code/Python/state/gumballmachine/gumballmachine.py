

class GumballMachine:
    def __init__(self, c:int):
        from .state import NoQuarterState, HasQuarterState, SoldState, WinnerState, SoldOutState
        
        self.__count = c
        self.__noQuarterState = NoQuarterState(self)
        self.__hasQuarterState = HasQuarterState(self)
        self.__soldState = SoldState(self)
        self.__winnerState = WinnerState(self)
        self.__soldOutState = SoldOutState(self)
        if c > 0:
            self.__curState = self.__noQuarterState
        else:
            self.__curState = self.__soldOutState
    
    def insertQuarter(self) -> None:
        self.__curState.insertQuarter()
        
    def ejectQuarter(self) -> None:
        self.__curState.ejectQuarter()
    
    def turnCrank(self) -> None:
        self.__curState.turnCrank()
        from .state import SoldState, WinnerState
        # print(isinstance(self.__curState, SoldState))
        if isinstance(self.__curState, SoldState) or isinstance(self.__curState, WinnerState):
            self.__curState.dispense()
    
    def releaseBall(self) -> None:
        print("A gumball comes rolling out the slot...")
        if self.__count > 0:
            self.__count -= 1
    
    def refill(self, c:int) -> None:
        self.__count += c
        print("The gumball machine was just refilled; its new count is:", self.__count)
        self.__curState.refill()
        
    def setState(self, s) -> None:
        self.__curState = s
        
    def getCount(self) -> int:
        return self.__count
        
    def getNoQuarterState(self):
        return self.__noQuarterState
    
    def getHasQuarterState(self):
        return self.__hasQuarterState
    
    def getSoldState(self):
        return self.__soldState
    
    def getWinnerState(self):
        return self.__winnerState
    
    def getSoldOutState(self):
        return self.__soldOutState
    
    def getCurState(self):
        return self.__curState
    
    def __str__(self) -> str:
        return "%s count:%d" % ( str(type(self.__curState)), self.__count)