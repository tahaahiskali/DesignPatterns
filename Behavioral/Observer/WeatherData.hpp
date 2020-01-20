#ifndef WEATHERDATA_HPP
#define WEATHERDATA_HPP

#include "ISubject.hpp"
#include "IObserver.hpp"

#include <vector>


class WeatherData : public ISubject {

    public:

        virtual void registerObserver( IObserver *o );
        virtual void removeObserver( IObserver *o );
        virtual void notifyObservers();

        WeatherData();
        virtual ~WeatherData();

        float getTemperature();
        float getHumidity();
        float getPressure();
        void measurementsChanged(); 
        void setMeasurements( float temperature, float humidity, float pressure );

    private:

        std::vector <IObserver *> observers;

        float temperature;
        float humidity;
        float pressure;

};

#endif //WEATHERDATA_HPP
  

