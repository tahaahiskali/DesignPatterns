#include "ForecastDisplay.hpp"

#include <iostream>


void ForecastDisplay::update( float temperature, float humidity, float pressure )
{

    (void) humidity;
    (void) pressure;
       
    lastTemperature  = currentTemperature;
    currentTemperature = temperature;

    display();
}

void ForecastDisplay::display() {

    if ( currentTemperature > lastTemperature ) {
        std::cout << "Weather forecast: will be hotter  \n";
    } else if ( currentTemperature < lastTemperature ) {
        std::cout << "Weather forecast: will be colder  \n";
    } else {
        std::cout << "Weather forecast: will be similar \n";
    }

}

ForecastDisplay::ForecastDisplay( ISubject &inWeatherData) : lastTemperature(0), currentTemperature(0), weatherData(inWeatherData)
{
    this->weatherData.registerObserver( this );
}