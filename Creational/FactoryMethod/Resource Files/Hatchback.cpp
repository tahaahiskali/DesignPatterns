#include <string>
#include <iostream>

#include "Hatchback.h"

using namespace std;

string Hatchback::getModel() const {
    return "Hatchback";
}

double Hatchback::getPrice() const {
    return 1000;
}

void Hatchback::speedUp() const {
    cout << "Hatchback#speedUp";
}




