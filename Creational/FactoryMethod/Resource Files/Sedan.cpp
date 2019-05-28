/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <string>
#include <iostream>
#include "Sedan.h"

using namespace std;

string Sedan::getModel() const {
    return "Sedan";
}

double Sedan::getPrice() const {
    return 2000;
}

void Sedan::speedUp() const {
    cout << "Sedan#speedUp";
}
