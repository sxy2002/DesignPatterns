#ifndef CURRENTCONDITIONSDISPLAY_H
#define CURRENTCONDITIONSDISPLAY_H

#include "observer.h"
#include "displayelement.h"
#include "weatherdata.h"

class CurrentConditionsDisplay : public Observer, public DisplayElement
{
private:
	WeatherData *weatherData;
	bool isObserver;
	float temperature;
	float humidity;
public:
	CurrentConditionsDisplay(WeatherData * const w);
	~CurrentConditionsDisplay();
	void update();
	void display();
	void registerObserver();
	void removeObserver();
};

#endif