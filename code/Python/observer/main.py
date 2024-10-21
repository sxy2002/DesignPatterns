from weather.weatherdata import WeatherData
from weather.weatherdisplay import CurrentConditionsDisplay, StatisticsDisplay, ForecastDisplay, HeatIndexDisplay

if __name__ == "__main__":
    weatherData = WeatherData()
    currentConditionsDisplay = CurrentConditionsDisplay(weatherData)
    statisticsDisplay = StatisticsDisplay(weatherData)
    forecastDisplay = ForecastDisplay(weatherData)
    heatIndexDisplay = HeatIndexDisplay(weatherData)
    
    weatherData.setMeasurements(80, 65, 30.4)
    heatIndexDisplay.removeObserver()
    currentConditionsDisplay.removeObserver()
    heatIndexDisplay.removeObserver()
    weatherData.setMeasurements(82, 70, 29.2)
    heatIndexDisplay.registerObserver()
    currentConditionsDisplay.registerObserver()
    weatherData.setMeasurements(78, 90, 29.2)