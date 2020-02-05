#ifndef READHEAD_DUCK_HPP
#define READHEAD_DUCK_HPP

#include "Duck.hpp"

class ReadheadDuck : public Duck {

    public:

        ReadheadDuck();
        ~ReadheadDuck();

        virtual void swim();
        virtual void display();

};

#endif // READHEAD_DUCK_HPP