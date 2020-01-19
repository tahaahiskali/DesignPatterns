#include "MallardDuck.hpp"

#include <iostream>

int main()
{
    Duck *mallardDuck = new MallardDuck();

    std::cout << mallardDuck.display() << std::endl;

    Duck *readheadDuck = new ReadheadDuck();

    std::cout << mallardDuck.display() << std::endl;
    
    return 0;
}