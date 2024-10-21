#include "forecastdisplay.h"

ForecastDisplay::ForecastDisplay(WeatherData * const w)
{
	this->weatherData = w;
	this->weatherData->registerOserver(this);
	this->isObserver = true;

	this->currentPressure = 20.4;
}
ForecastDisplay::~ForecastDisplay()
{
	std::cout << "free ForecastDisplay" << std::endl;
}
void ForecastDisplay::update()
{
	this->lastPressure = this->currentPressure;
	this->currentPressure = this->weatherData->getPressure();
	display();
}
void ForecastDisplay::display()
{
	std::cout << "ForecastDisplay";
	if (currentPressure > lastPressure) {
		std::cout << "Improving weather on the way!" << std::endl;
	}
	else if (currentPressure == lastPressure) {
		std::cout << "More of the same" << std::endl;
	}
	else if (currentPressure < lastPressure) {
		std::cout << "Watch out for cooler, rainy weather" << std::endl;
	}
}
void ForecastDisplay::registerObserver()
{
	if (!this->isObserver) {
		this->weatherData->registerOserver(this);
		this->isObserver = true;
	}
}
void ForecastDisplay::removeObserver()
{
	if (this->isObserver) {
		this->weatherData->removeOserver(this);
		this->isObserver = false;
	}
}