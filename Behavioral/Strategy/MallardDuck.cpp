#include "MallardDuck.hpp"
#include "Quack.hpp"
#include "FlyWithWings.hpp"

#include <iostream>


MallardDuck::MallardDuck()
{
    quackBehavior = new Quack();
    flyBehavior = new FlyWithWings();
}

MallardDuck::~MallardDuck()
{

}

void MallardDuck::display()
{
    std::cout << " I'm a real Mallard Duck" << std::endl;
}