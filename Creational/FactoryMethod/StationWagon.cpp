/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <string>
#include <iostream>
#include "StationWagon.h"

using namespace std;

string StatitonWagon::getModel() const {
    return "StationWagon";
}

double StatitonWagon::getPrice() const {
    return 1500;
}

void StatitonWagon::speedUp() const {
    cout << "StationWagon#speedUp";
}
