package observer.weather;

import observer.observer.Observer;
import observer.subject.Subject;

import java.util.ArrayList;
import java.util.List;
import java.util.Objects;

public class WeatherData implements Subject {
    private List<Observer> observers;   // other data structure
    private float temperature;
    private float humidity;
    private float pressure;

    public WeatherData() {
        observers = new ArrayList<>();
    }

    @Override
    public void registerObserver(Observer observer) {
        observers.add(observer);
    }

    @Override
    public void removeObserver(Observer observer) {
        int index = observers.indexOf(observer);
        if(index >= 0)
            observers.remove(index);
    }

    @Override
    public void notifyObserver() {
        for(Observer observer : observers) {
            observer.update();
        }
    }

    public void measurementsChanged() {
        notifyObserver();
    }

    public void setMeasurements(Object... objects) {
        this.temperature = (float)objects[0];
        this.humidity = (float)objects[1];
        this.pressure = (float)objects[2];
        measurementsChanged();
    }

    public float getTemperature() {
        return temperature;
    }

    public float getHumidity() {
        return humidity;
    }

    public float getPressure() {
        return pressure;
    }
}
