#include "currentconditionsdisplay.h"

CurrentConditionsDisplay::CurrentConditionsDisplay(WeatherData * const w)
{
	this->weatherData = w;
	this->weatherData->registerOserver(this);
	this->isObserver = true;
}
CurrentConditionsDisplay::~CurrentConditionsDisplay()
{
	std::cout << "free CurrentConditionsDisplay" << std::endl;
}
void CurrentConditionsDisplay::update()
{
	this->temperature = this->weatherData->getTemperature();
	this->humidity = this->weatherData->getHumidity();
	display();
}
void CurrentConditionsDisplay::display()
{
	std::cout << "CurrentConditions temperature:" << temperature << "F, humidity:" << humidity << "%" << std::endl;
}
void CurrentConditionsDisplay::registerObserver()
{
	if (!this->isObserver) {
		this->weatherData->registerOserver(this);
		this->isObserver = true;
	}
}
void CurrentConditionsDisplay::removeObserver()
{
	if (this->isObserver) {
		this->weatherData->removeOserver(this);
		this->isObserver = false;
	}
}