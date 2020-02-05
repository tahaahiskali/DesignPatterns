#ifndef FLYNOWAY_HPP
#define FLYNOWAY_HPP

#include "IFlyBehavior.hpp"

class FlyNoWay : public IFlyBehavior {

    public:

        FlyNoWay();
        ~FlyNoWay();

        virtual void fly();

};

#endif //FLYNOWAY_HPP