#include "../Header_Files/WeatherData.hpp"
#include "../Header_Files/CurrentConditionDisplay.hpp"
#include "../Header_Files/StatisticsDisplay.hpp"
#include "../Header_Files/ForecastDisplay.hpp"

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