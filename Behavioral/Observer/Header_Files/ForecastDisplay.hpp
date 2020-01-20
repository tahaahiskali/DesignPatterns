#ifndef FORECAST_DISPLAY_HPP
#define FORECAST_DISPLAY_HPP

#include "IObserver.hpp"
#include "ISubject.hpp"
#include "IDisplayElement.hpp"

class ForecastDisplay : public IObserver, public IDisplayElement {

    public:

        virtual void update( float temperature, float humidity, float pressure);
        virtual void display();

        ForecastDisplay( ISubject &weatherData );
        virtual ~ForecastDisplay(){};

    private:

        ISubject &weatherData;

        float currentTemperature;
        float lastTemperature;
};

#endif //FORECAST_DISPLAY_HPP