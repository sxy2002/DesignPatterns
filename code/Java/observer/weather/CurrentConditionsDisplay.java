package observer.weather;

import observer.display.DisplayElement;
import observer.observer.Observer;

public class CurrentConditionsDisplay implements Observer, DisplayElement {
    private WeatherData weatherData;
    private float temperature;
    private float humidity;
    private boolean isObserver;

    public CurrentConditionsDisplay(WeatherData weatherData) {
        this.weatherData = weatherData;
        this.weatherData.registerObserver(this);
        this.isObserver = true;
    }

    @Override
    public void display() {
        System.out.println("CurrentConditions temperature:" + temperature + "F, humidity:" + humidity + "%");
    }

    @Override
    public void update() {
        this.temperature = this.weatherData.getTemperature();
        this.humidity = this.weatherData.getHumidity();
        display();
    }

    @Override
    public void registerObserver() {
        if(!this.isObserver) {
            this.weatherData.registerObserver(this);
            this.isObserver = true;
        }
    }

    @Override
    public void removeObserver() {
        if(this.isObserver) {
            this.weatherData.removeObserver(this);
            this.isObserver = false;
        }
    }
}
