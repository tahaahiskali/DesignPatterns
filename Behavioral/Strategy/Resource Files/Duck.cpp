#include "Duck.hpp"

#include <iostream>

Duck::Duck()
{

}

void Duck::quack()
{
    std::cout << "Superclass quack" << std::endl;
}

void Duck::swim()
{
    std::cout << "Superclass swim" << std::endl;
}

void Duck::display()
{
    std::cout << "Superclass display" << std::endl;
}