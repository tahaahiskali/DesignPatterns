
/* 
 * File:   StationWagon.h
 * Author: ahiska
 *
 * Created on 27 Mayıs 2019 Pazartesi, 14:12
 */

#ifndef STATIONWAGON_H
#define STATIONWAGON_H

#include "Car.h"


class StatitonWagon : public Car {
public:
    virtual std::string getModel() const override;
    virtual double getPrice() const override;
    virtual void speedUp() const override;    
};

#endif /* STATIONWAGON_H */

