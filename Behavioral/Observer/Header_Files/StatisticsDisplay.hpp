#ifndef STATISTICS_DISPLAY_HPP
#define STATISTICS_DISPLAY_HPP

#include "IObserver.hpp"
#include "IDisplayElement.hpp"
#include "ISubject.hpp"

class StatisticsDisplay : public IObserver, public IDisplayElement {

    public:

        virtual void update( float temperature, float humidity, float pressure );
        virtual void display();

        StatisticsDisplay( ISubject &inWeatherData );
        virtual ~StatisticsDisplay(){};

    private:

        ISubject &weatherData;

        float maxTemperature;
        float avgTemperature;
        float minTemperature;
        float sumOfTemperature;
        float takenSensorSignal;

};

#endif //STATISTICS_DISPLAY_HPP