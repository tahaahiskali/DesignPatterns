#include "../Header_Files/WeatherData.hpp"

#include <time.h>       // time
#include <cstdlib>      // rand, srand
#include <algorithm>    // find
#include <iostream>


void WeatherData::registerObserver( IObserver *o )
{
    observers.push_back( o );
}

void WeatherData::removeObserver( IObserver *o )
{
    std::vector<IObserver *>::iterator it = std::find( observers.begin(), observers.end(), o);
    observers.erase( it );    
}

void WeatherData::notifyObservers()
{
    for ( std::vector<IObserver *>::iterator it = observers.begin(); it != observers.end(); ++it )   {
        (*it)->update( temperature, humidity, pressure );
    }

    std::cout << std::endl;
}

WeatherData::WeatherData()
{
    
}

WeatherData::~WeatherData()
{
    
}

float WeatherData::getHumidity()
{
    return humidity; 
}

float WeatherData::getPressure()
{
    return pressure;
}

float WeatherData::getTemperature()
{
    return temperature;
}

/*
 * This method gets called
 * whenever the weather measurements
 * have been updated
*/

void WeatherData::measurementsChanged()
{
    notifyObservers();
}

void WeatherData::setMeasurements( float temperature, float humidity, float pressure )
{
    this->temperature = temperature;
    this->humidity  = humidity;
    this->pressure = pressure;

    measurementsChanged();
}