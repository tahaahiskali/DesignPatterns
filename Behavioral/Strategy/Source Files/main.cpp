#include "MallardDuck.hpp"
#include "ReadheadDuck.hpp"

int main()
{
    Duck *mallardDuck = new MallardDuck();

    mallardDuck->display();

    Duck *readheadDuck = new ReadheadDuck();

    readheadDuck->display();

    return 0;
}