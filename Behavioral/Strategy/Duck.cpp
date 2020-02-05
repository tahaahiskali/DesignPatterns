#include "Duck.hpp"
#include <iostream>

Duck::Duck()
{

}

Duck::~Duck()
{

}

void Duck::setFlyBehavior( IFlyBehavior *ifb )
{
    flyBehavior = ifb;
}

void Duck::setQuackBehavior( IQuackBehavior *iqb )
{
    quackBehavior = iqb;
}

void Duck::performFly() 
{
    flyBehavior->fly();
}

void Duck::performQuack()
{
    quackBehavior->quack();
}

void Duck::swim()
{
    std::cout << " All ducks float, even decoys! " << std::endl;
}
