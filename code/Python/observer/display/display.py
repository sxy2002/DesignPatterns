from abc import ABCMeta, abstractmethod

class DisplayElement(metaclass=ABCMeta):
    @abstractmethod
    def display(self) -> None:
        pass