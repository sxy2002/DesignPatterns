package observer.weather;

import observer.display.DisplayElement;
import observer.observer.Observer;

public class StatisticsDisplay implements Observer, DisplayElement {
    private WeatherData weatherData;
    private float maxTemp;
    private float minTemp;
    private float sumTemp;
    private int count;
    private boolean isObserver;

    public StatisticsDisplay(WeatherData weatherData) {
        this.weatherData = weatherData;
        this.weatherData.registerObserver(this);
        this.isObserver = true;

        this.maxTemp = -1;
        this.minTemp = -1;
        this.sumTemp = 0;
        this.count = 0;
    }

    @Override
    public void display() {
        System.out.println("Statistics maxTemp:" + maxTemp + "F minTemp:" + minTemp + "F avgTemp:" + (sumTemp/count) + "F");
    }

    @Override
    public void update() {
        float temp = this.weatherData.getTemperature();
        if(this.maxTemp == -1 || this.maxTemp < temp)
            this.maxTemp = temp;
        if(this.minTemp == -1 || this.minTemp > temp)
            this.minTemp = temp;
        this.sumTemp += temp;
        this.count++;
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
