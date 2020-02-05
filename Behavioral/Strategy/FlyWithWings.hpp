#ifndef FLYWITHWINGS_HPP
#define FLYWITHWINGS_HPP

#include "IFlyBehavior.hpp"

class FlyWithWings : public IFlyBehavior {

    public:
    
        FlyWithWings();
        ~FlyWithWings();
        
        virtual void fly();

};

#endif //FLYWITHWINGS_HPP