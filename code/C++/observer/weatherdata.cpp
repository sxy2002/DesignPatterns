#include "weatherdata.h"

WeatherData::WeatherData()	{ }
WeatherData::~WeatherData()
{
	for (Observer* o : observers)
	{
		if (o)
		{
			delete o;
			o = nullptr;
			std::cout << "free Observer" << std::endl;
		}
	}
}

void WeatherData::registerOserver(Observer * const o)
{
	observers.insert(o);
}
void WeatherData::removeOserver(Observer * const o)
{
	observers.erase(o);
}
void WeatherData::notifyOserver()
{
	for (Observer* o : observers)
		o->update();
}
void WeatherData::measurementsChanged()
{
	notifyOserver();
}
void WeatherData::setMeasurements(const float& t, const float& h, const float& p) 
{
	this->temperature = t;
	this->humidity = h;
	this->pressure = p;
	measurementsChanged();
}
float WeatherData::getTemperature()const
{
	return this->temperature;
}
float WeatherData::getHumidity()const
{
	return this->humidity;
}
float WeatherData::getPressure()const
{
	return this->pressure;
}