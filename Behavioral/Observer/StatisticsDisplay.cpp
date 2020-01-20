#include "../Header_Files/StatisticsDisplay.hpp"

#include <iostream>

void StatisticsDisplay::update( float temperature, float humidity, float pressure )
{
    (void) humidity;
    (void) pressure;

    ++takenSensorSignal;

    if ( temperature > maxTemperature ) {
        maxTemperature = temperature;
    } else if ( temperature < minTemperature ) {
        minTemperature = minTemperature;
    }

    sumOfTemperature += temperature;
    avgTemperature = sumOfTemperature / takenSensorSignal;

    display();

}

void StatisticsDisplay::display()
{
    std::cout   << "Weather Stats: " 
                << "Max Temperatures: " << maxTemperature
                << " Avg Temperatures: " << avgTemperature
                << " Min Temperatures: " << minTemperature << std::endl;               
}

StatisticsDisplay::StatisticsDisplay( ISubject &inWeatherData ) : sumOfTemperature(0), avgTemperature(0), maxTemperature(70), minTemperature(-20),
                                                                takenSensorSignal(0), weatherData(inWeatherData)
{
    this->weatherData.registerObserver(this);
}