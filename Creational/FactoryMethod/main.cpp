/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ahiska
 *
 * Created on 27 Mayıs 2019 Pazartesi, 13:56
 */

#include <cstdlib>
#include <iostream>
#include "Car.h"
#include "CarFactory.h"
#include "CarType.h"

using namespace std;

int main() {
    
    Car *sedan = CarFactory::getCarInstance( CarType::SEDAN );
    cout << sedan->getModel() << endl;
    cout << sedan->getPrice() << endl;
    sedan->speedUp();
    cout << endl;
    
    
    Car *hatchback = CarFactory::getCarInstance( CarType::HATCHBACK );
    cout << hatchback->getModel() << endl;
    cout << hatchback->getPrice() << endl;
    hatchback->speedUp();
    cout << endl;
    
    Car *stationWagon = CarFactory::getCarInstance( CarType::STATION_WAGON );
    cout << stationWagon->getModel() << endl;
    cout << stationWagon->getPrice() << endl;
    stationWagon->speedUp();
    cout << endl;
    
    return 0;
}

