
/* 
 * File:   Car.h
 * Author: ahiska
 *
 * Created on 27 Mayıs 2019 Pazartesi, 13:56
 */

#ifndef CAR_H
#define CAR_H

#include <string>

class Car {
public:
    virtual std::string getModel() const = 0;
    virtual double getPrice() const = 0;
    virtual void speedUp() const = 0;   
};

#endif /* CAR_H */

