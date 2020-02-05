#include "ReadheadDuck.hpp"
#include "Quack.hpp"
#include "FlyWithWings.hpp"

#include <iostream>


ReadheadDuck::ReadheadDuck()
{
    quackBehavior = new Quack();
    flyBehavior = new FlyWithWings();
}

ReadheadDuck::~ReadheadDuck()
{

}

void ReadheadDuck::display()
{
    std::cout << " I'm a real Redhead Duck" << std::endl;
}