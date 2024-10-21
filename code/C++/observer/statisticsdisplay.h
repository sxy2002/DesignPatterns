#ifndef STATISTICSDISPLAY_H
#define STATISTICSDISPLAY_H

#include "observer.h"
#include "displayelement.h"
#include "weatherdata.h"

class StatisticsDisplay : public Observer, public DisplayElement
{
private:
	WeatherData *weatherData;
	bool isObserver;
	float maxTemp;
	float minTemp;
	float sumTemp;
	int count;
public:
	StatisticsDisplay(WeatherData * const w);
	~StatisticsDisplay();
	void update();
	void display();
	void registerObserver();
	void removeObserver();
};

#endif