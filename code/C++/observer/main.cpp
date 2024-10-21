#include "weatherdata.h"
#include "currentconditionsdisplay.h"
#include "statisticsdisplay.h"
#include "forecastdisplay.h"
#include "heatIndexdisplay.h"

int main()
{
	WeatherData *weatherData = new WeatherData();
	CurrentConditionsDisplay *currentConditionsDisplay = new CurrentConditionsDisplay(weatherData);
	StatisticsDisplay *statisticsDisplay = new StatisticsDisplay(weatherData);
	ForecastDisplay *forecastDisplay = new ForecastDisplay(weatherData);
	HeatIndexDisplay *heatIndexDisplay = new HeatIndexDisplay(weatherData);

	weatherData->setMeasurements(80, 65, 30.4);
	heatIndexDisplay->removeObserver();
	currentConditionsDisplay->removeObserver();
	heatIndexDisplay->removeObserver();
	weatherData->setMeasurements(82, 70, 29.2);
	heatIndexDisplay->registerObserver();
	currentConditionsDisplay->registerObserver();
	weatherData->setMeasurements(78, 90, 29.2);

	delete currentConditionsDisplay;
	delete statisticsDisplay;
	delete forecastDisplay;
	delete heatIndexDisplay;
	delete weatherData;
	return 0;
}