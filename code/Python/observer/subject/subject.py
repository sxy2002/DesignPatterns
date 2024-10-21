from abc import ABCMeta, abstractmethod
from observer.observer import Observer

class Subject(metaclass=ABCMeta):
    @abstractmethod
    def registerObserver(self, o:Observer) -> None:
        pass
    
    @abstractmethod
    def removeObserver(self, o:Observer) -> None:
        pass
    
    @abstractmethod
    def notifyObserver(self) -> None:
        pass