/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CarFactory.h
 * Author: ahiska
 *
 * Created on 27 Mayıs 2019 Pazartesi, 14:45
 */

#ifndef CARFACTORY_H
#define CARFACTORY_H

#include "Hatchback.h"
#include "Sedan.h"
#include "StationWagon.h"
#include "CarType.h"

class CarFactory {
public:
    static Car  * getCarInstance ( CarType carType ) {
        
        switch( carType ) {
            case HATCHBACK:
                return new Hatchback();
            case SEDAN:
                return new Sedan();
            case STATION_WAGON:
                return new StatitonWagon();
            default:
                return nullptr;
        }
    }
};


#endif /* CARFACTORY_H */

