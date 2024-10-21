package observer;

import observer.weather.*;

public class WeatherStationSimulator {
    public static void main(String[] args) {
        WeatherData weatherData = new WeatherData();
        CurrentConditionsDisplay currentConditionsDisplay = new CurrentConditionsDisplay(weatherData);
        StatisticsDisplay statisticsDisplay = new StatisticsDisplay(weatherData);
        ForecastDisplay forecastDisplay = new ForecastDisplay(weatherData);
        HeatIndexDisplay heatIndexDisplay = new HeatIndexDisplay(weatherData);

        weatherData.setMeasurements(80f, 65f, 30.4f);
        heatIndexDisplay.removeObserver();
        currentConditionsDisplay.removeObserver();
        weatherData.setMeasurements(82f, 70f, 29.2f);
        heatIndexDisplay.registerObserver();
        currentConditionsDisplay.registerObserver();
        weatherData.setMeasurements(78f, 90f, 29.2f);
    }
}
