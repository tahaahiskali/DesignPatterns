#ifndef QUACK_HPP
#define QUACK_HPP

#include "IQuackBehavior.hpp"

class Quack : public IQuackBehavior {

    public:

        Quack();
        ~Quack();

        virtual void quack();

};

#endif //QUACK_HPP