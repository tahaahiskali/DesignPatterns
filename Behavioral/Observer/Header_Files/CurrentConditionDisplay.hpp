#ifndef CURRENTCONDITION_DISPLAY_HPP
#define CURRENTCONDITION_DISPLAY_HPP

#include "IObserver.hpp"
#include "IDisplayElement.hpp"
#include "ISubject.hpp"

class CurrentConditionDisplay : public IObserver, public IDisplayElement {

    public:

        virtual void update( float temperature, float humidity, float pressure );
        virtual void display();

        CurrentConditionDisplay( ISubject &inWeatherData);
        virtual ~CurrentConditionDisplay() {};
        
    private:

        ISubject &weatherData;

        float temperature;
        float humidity;
        float pressure;
        

};

#endif //CURRENTCONDITION_DISPLAY_HPP