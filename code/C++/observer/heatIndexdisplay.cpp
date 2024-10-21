#include "heatIndexdisplay.h"

HeatIndexDisplay::HeatIndexDisplay(WeatherData * const w)
{
	this->weatherData = w;
	this->weatherData->registerOserver(this);
	this->isObserver = true;
}
HeatIndexDisplay::~HeatIndexDisplay()
{
	std::cout << "free HeatIndexDisplay" << std::endl;
}
void HeatIndexDisplay::update()
{
	this->heatIndex = computeHeatIndex(this->weatherData->getTemperature(), this->weatherData->getHumidity());
	display();
}
void HeatIndexDisplay::display()
{
	std::cout << "HeatIndex:" << heatIndex << std::endl;
}
float HeatIndexDisplay::computeHeatIndex(const float &t, const float &rh) 
{
	return (float)((16.923 + (0.185212 * t) + (5.37941 * rh) - (0.100254 * t * rh)
		+ (0.00941695 * (t * t)) + (0.00728898 * (rh * rh))
		+ (0.000345372 * (t * t * rh)) - (0.000814971 * (t * rh * rh)) +
		(0.0000102102 * (t * t * rh * rh)) - (0.000038646 * (t * t * t)) + (0.0000291583 *
		(rh * rh * rh)) + (0.00000142721 * (t * t * t * rh)) +
		(0.000000197483 * (t * rh * rh * rh)) - (0.0000000218429 * (t * t * t * rh * rh)) +
		0.000000000843296 * (t * t * rh * rh * rh)) -
		(0.0000000000481975 * (t * t * t * rh * rh * rh)));
}
void HeatIndexDisplay::registerObserver()
{
	if (!this->isObserver) {
		this->weatherData->registerOserver(this);
		this->isObserver = true;
	}
}
void HeatIndexDisplay::removeObserver()
{
	if (this->isObserver) {
		this->weatherData->removeOserver(this);
		this->isObserver = false;
	}
}