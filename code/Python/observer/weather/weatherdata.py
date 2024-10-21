from subject.subject import Subject
from observer.observer import Observer

class WeatherData(Subject):
    def __init__(self) -> None:
        self.__observers:list[Observer] = [] 
        self.__temperature = 0
        self.__humidity = 0
        self.__pressure = 0        
    
    def registerObserver(self, o:Observer) -> None:
        self.__observers.append(o)
    
    def removeObserver(self, o:Observer) -> None:
        self.__observers.remove(o)
    
    def notifyObserver(self) -> None:
        for observer in self.__observers:
            observer.update()
    
    def measurementsChanged(self) -> None:
        self.notifyObserver()

    def setMeasurements(self, t:float, h:float, p:float) -> None:
        self.__temperature = t
        self.__humidity = h
        self.__pressure = p
        self.measurementsChanged()
    
    def getTemperature(self) -> float:
        return self.__temperature
    
    def getHumidity(self) -> float:
        return self.__humidity
    
    def getPressure(self) -> float:
        return self.__pressure