
/* 
 * File:   Hatchback.h
 * Author: ahiska
 *
 * Created on 27 Mayıs 2019 Pazartesi, 14:02
 */

#ifndef HATCHBACK_H
#define HATCHBACK_H

#include "Car.h"

class Hatchback : public Car {
public:
    virtual std::string getModel() const override;
    virtual double getPrice() const override;
    virtual void speedUp() const override; 
};

#endif /* HATCHBACK_H */

