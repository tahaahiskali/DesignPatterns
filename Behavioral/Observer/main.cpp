#include "WeatherData.hpp"
#include "CurrentConditionDisplay.hpp"
#include "StatisticsDisplay.hpp"
#include "ForecastDisplay.hpp"

int main()
{
    WeatherData weatherData;
    CurrentConditionDisplay currentConditionDisplay( weatherData );
    StatisticsDisplay statisticsDisplay( weatherData );
    ForecastDisplay forecastDisplay( weatherData );
    
    weatherData.setMeasurements( 80, 65, 30.4 );
    weatherData.setMeasurements( 70, 78, 34.4 );
    weatherData.setMeasurements( 90, 50, 32.4 );

    return 0;
}