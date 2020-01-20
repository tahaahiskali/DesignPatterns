#include "../Header_Files/CurrentConditionDisplay.hpp"
#include <iostream>

void CurrentConditionDisplay::update( float temperature, float humidity, float pressure )
{
    this->temperature = temperature;
    this->humidity = humidity;
    this->pressure = pressure;
    display();
}

void CurrentConditionDisplay::display()
{
    std::cout   << "Current Conditions: " 
                << " Temperature: "  << temperature
                << " Humidity: "     << humidity
                << " Pressure: "     << pressure << std::endl; 
}

CurrentConditionDisplay::CurrentConditionDisplay( ISubject &inWeatherData ) : weatherData( inWeatherData )
{
    this->weatherData.registerObserver(this);
}