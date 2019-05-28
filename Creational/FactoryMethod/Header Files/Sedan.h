
/* 
 * File:   Sedan.h
 * Author: ahiska
 *
 * Created on 27 Mayıs 2019 Pazartesi, 14:12
 */

#ifndef SEDAN_H
#define SEDAN_H

#include "Car.h"


class Sedan : public Car {
public:
    virtual std::string getModel() const override;
    virtual double getPrice() const override;
    virtual void speedUp() const override; 
};


#endif /* SEDAN_H */

