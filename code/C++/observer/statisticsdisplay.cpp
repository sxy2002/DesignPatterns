#include "statisticsdisplay.h"

StatisticsDisplay::StatisticsDisplay(WeatherData * const w) :maxTemp(-1), minTemp(-1), sumTemp(0), count(0)
{
	this->weatherData = w;
	this->weatherData->registerOserver(this);
	this->isObserver = true;
}
StatisticsDisplay::~StatisticsDisplay()
{
	std::cout << "free StatisticsDisplay" << std::endl;
}
void StatisticsDisplay::update()
{
	float temp = this->weatherData->getTemperature();
	if (maxTemp == -1 || maxTemp < temp)
		maxTemp = temp;
	if (minTemp == -1 || minTemp > temp)
		minTemp = temp;
	sumTemp += temp;
	count++;
	display();
}
void StatisticsDisplay::display()
{
	std::cout << "StatisticsDisplay maxTemp:" << maxTemp << "F, minTemp:" << minTemp << "F, avgTemp:" << (sumTemp / count) << "F" << std::endl;
}
void StatisticsDisplay::registerObserver()
{
	if (!this->isObserver) {
		this->weatherData->registerOserver(this);
		this->isObserver = true;
	}
}
void StatisticsDisplay::removeObserver()
{
	if (this->isObserver) {
		this->weatherData->removeOserver(this);
		this->isObserver = false;
	}
}