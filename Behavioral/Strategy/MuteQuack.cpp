#include "MuteQuack.hpp"

#include <iostream>

MuteQuack::MuteQuack()
{

}

MuteQuack::~MuteQuack()
{
    
}

void MuteQuack::quack()
{
    std::cout << " << Silence >> " << std::endl;
}