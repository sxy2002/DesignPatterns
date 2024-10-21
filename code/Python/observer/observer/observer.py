from abc import ABCMeta, abstractmethod

class Observer(metaclass=ABCMeta):
    @abstractmethod
    def update(self) -> None:
        pass
    
    @abstractmethod
    def registerObserver(self) -> None:
        pass
    
    @abstractmethod
    def removeObserver(self) -> None:
        pass