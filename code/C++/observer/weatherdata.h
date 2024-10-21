#ifndef WEACHERDATA_H
#define WEACHERDATA_H

#include "observer.h"
#include "subject.h"

#include <unordered_set>

class WeatherData: public Subject
{
private:
	std::unordered_set<Observer*> observers;
	float temperature;
	float humidity;
	float pressure;
public:
	WeatherData();
	~WeatherData();

	void registerOserver(Observer * const o);
	void removeOserver(Observer * const o);
	void notifyOserver();
	void measurementsChanged();
	void setMeasurements(const float& t, const float& h, const float& p);
	float getTemperature()const;
	float getHumidity()const;
	float getPressure()const;
};

#endif