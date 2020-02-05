#ifndef DUCK_HPP
#define DUCK_HPP

#include "IFlyBehavior.hpp"
#include "IQuackBehavior.hpp"

class Duck {

    public:

        IFlyBehavior *flyBehavior;
        IQuackBehavior *quackBehavior;

        Duck();
        ~Duck();
  
        void setFlyBehavior( IFlyBehavior *ifb );
        void setQuackBehavior( IQuackBehavior *iqb );

        void performQuack();
        void performFly();

        virtual void swim();
        virtual void display() = 0;

};

#endif // DUCK_HPP