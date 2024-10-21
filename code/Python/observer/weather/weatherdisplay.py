from observer.observer import Observer
from display.display import DisplayElement
from weather.weatherdata import WeatherData

class CurrentConditionsDisplay(Observer, DisplayElement):
    def __init__(self, w:WeatherData) -> None:
        self.__weatherData = w
        self.__weatherData.registerObserver(self)
        self.__isObserver = True
        
        self.__temperature = 0
        self.__humidity = 0
    
    def update(self) -> None:
        self.__temperature = self.__weatherData.getTemperature()
        self.__humidity = self.__weatherData.getHumidity()
        self.display()
    
    def display(self) -> None:
        print("CurrentConditions temperature:", self.__temperature, "F, humidity:", self.__humidity, "%")
    
    def registerObserver(self) -> None:
        if not self.__isObserver:
            self.__weatherData.registerObserver(self)
            self.__isObserver = True
    
    def removeObserver(self) -> None:
        if self.__isObserver:
            self.__weatherData.removeObserver(self)
            self.__isObserver = False
            
class StatisticsDisplay(Observer, DisplayElement):
    def __init__(self, w:WeatherData) -> None:
        self.__weatherData = w
        self.__weatherData.registerObserver(self)
        self.__isObserver = True
        
        self.__maxTemp = -1
        self.__minTemp = -1
        self.__sumTemp = 0
        self.__count = 0
    
    def update(self) -> None:
        temp = self.__weatherData.getTemperature()
        if self.__maxTemp == -1 or self.__maxTemp < temp:
            self.__maxTemp = temp
        if self.__minTemp == -1 or self.__minTemp > temp:
            self.__minTemp = temp
        self.__sumTemp += temp
        self.__count += 1
        self.display()
    
    def display(self) -> None:
        print("Statistics maxTemp:", self.__maxTemp, "F, minTemp:", self.__minTemp, "F, avgTemp:", (self.__sumTemp/self.__count), "F")
    
    def registerObserver(self) -> None:
        if not self.__isObserver:
            self.__weatherData.registerObserver(self)
            self.__isObserver = True
    
    def removeObserver(self) -> None:
        if self.__isObserver:
            self.__weatherData.removeObserver(self)
            self.__isObserver = False
            
class ForecastDisplay(Observer, DisplayElement):
    def __init__(self, w:WeatherData) -> None:
        self.__weatherData = w
        self.__weatherData.registerObserver(self)
        self.__isObserver = True
        
        self.__lastPressure = 0
        self.__currentPressure = 20.4
    
    def update(self) -> None:
        self.__lastPressure = self.__currentPressure
        self.__currentPressure = self.__weatherData.getPressure()
        self.display()
    
    def display(self) -> None:
        print("Forecast:", end=' ')
        if (self.__currentPressure > self.__lastPressure):
            print("Improving weather on the way!")
        elif (self.__currentPressure == self.__lastPressure):
            print("More of the same")
        elif (self.__currentPressure < self.__lastPressure):
            print("Watch out for cooler, rainy weather")
    
    def registerObserver(self) -> None:
        if not self.__isObserver:
            self.__weatherData.registerObserver(self)
            self.__isObserver = True
    
    def removeObserver(self) -> None:
        if self.__isObserver:
            self.__weatherData.removeObserver(self)
            self.__isObserver = False
            
class HeatIndexDisplay(Observer, DisplayElement):
    def __init__(self, w:WeatherData) -> None:
        self.__weatherData = w
        self.__weatherData.registerObserver(self)
        self.__isObserver = True
        
        self.__heatIndex = 0
    
    def update(self) -> None:
        self.__heatIndex = self.computeHeatIndex(self.__weatherData.getTemperature(), self.__weatherData.getHumidity())
        self.display()
    
    def display(self) -> None:
        print("HeatIndex:", self.__heatIndex)
    
    def computeHeatIndex(self, t:float, rh:float) -> float:
        return (float)((16.923 + (0.185212 * t) + (5.37941 * rh) - (0.100254 * t * rh)
                + (0.00941695 * (t * t)) + (0.00728898 * (rh * rh))
                + (0.000345372 * (t * t * rh)) - (0.000814971 * (t * rh * rh)) +
                (0.0000102102 * (t * t * rh * rh)) - (0.000038646 * (t * t * t)) + (0.0000291583 *
                (rh * rh * rh)) + (0.00000142721 * (t * t * t * rh)) +
                (0.000000197483 * (t * rh * rh * rh)) - (0.0000000218429 * (t * t * t * rh * rh)) +
                0.000000000843296 * (t * t * rh * rh * rh)) -
                (0.0000000000481975 * (t * t * t * rh * rh * rh)))
    
    def registerObserver(self) -> None:
        if not self.__isObserver:
            self.__weatherData.registerObserver(self)
            self.__isObserver = True
    
    def removeObserver(self) -> None:
        if self.__isObserver:
            self.__weatherData.removeObserver(self)
            self.__isObserver = False