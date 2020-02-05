#include "Duck.hpp"
#include "MallardDuck.hpp"
#include "FlyNoWay.hpp"
#include "MuteQuack.hpp"

int main()
{

    Duck *mallard = new MallardDuck();
    mallard->performQuack();
    mallard->performFly();
    
    mallard->setFlyBehavior( new FlyNoWay ) ;
    mallard->setQuackBehavior( new MuteQuack );

    mallard->performQuack();
    mallard->performFly();

    return 0;

}