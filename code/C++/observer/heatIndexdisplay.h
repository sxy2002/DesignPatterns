#ifndef HEATINDEXDISPLAY_H
#define HEATINDEXDISPLAY_H

#include "observer.h"
#include "displayelement.h"
#include "weatherdata.h"

class HeatIndexDisplay : public Observer, public DisplayElement
{
private:
	WeatherData *weatherData;
	bool isObserver;
	float heatIndex;
	float computeHeatIndex(const float &t, const float &rh);
public:
	HeatIndexDisplay(WeatherData * const w);
	~HeatIndexDisplay();
	void update();
	void display();
	void registerObserver();
	void removeObserver();
};

#endif