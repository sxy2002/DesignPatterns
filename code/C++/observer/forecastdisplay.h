#ifndef FORECASTDISPLAY_H
#define FORECASTDISPLAY_H

#include "observer.h"
#include "displayelement.h"
#include "weatherdata.h"

class ForecastDisplay : public Observer, public DisplayElement
{
private:
	WeatherData *weatherData;
	bool isObserver;
	float lastPressure;
	float currentPressure;
public:
	ForecastDisplay(WeatherData * const w);
	~ForecastDisplay();
	void update();
	void display();
	void registerObserver();
	void removeObserver();
};

#endif