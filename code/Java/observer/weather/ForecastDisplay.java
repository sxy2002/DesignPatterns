package observer.weather;

import observer.display.DisplayElement;
import observer.observer.Observer;

public class ForecastDisplay implements Observer, DisplayElement {
    private WeatherData weatherData;
    private float lastPressure;
    private float currentPressure;
    private boolean isObserver;

    public ForecastDisplay(WeatherData weatherData) {
        this.weatherData = weatherData;
        this.weatherData.registerObserver(this);
        this.isObserver = true;

        this.currentPressure = 20.4f;
    }

    @Override
    public void display() {
        System.out.print("Forecast: ");
        if (currentPressure > lastPressure) {
            System.out.println("Improving weather on the way!");
        } else if (currentPressure == lastPressure) {
            System.out.println("More of the same");
        } else if (currentPressure < lastPressure) {
            System.out.println("Watch out for cooler, rainy weather");
        }
    }

    @Override
    public void update() {
        this.lastPressure = this.currentPressure;
        this.currentPressure = this.weatherData.getPressure();
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
