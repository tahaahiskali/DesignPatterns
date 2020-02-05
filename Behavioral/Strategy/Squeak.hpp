#ifndef SQUEAK_HPP
#define SQUEAK_HPP

#include "IQuackBehavior.hpp"

class Squeak : public IQuackBehavior {

    public:

        Squeak();
        ~Squeak();
        
        virtual void quack();

};

#endif //SQUEAK_HPP