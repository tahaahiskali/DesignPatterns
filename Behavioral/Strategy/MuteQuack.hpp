#ifndef MUTEQUACK_HPP
#define MUTEQUACK_HPP

#include "IQuackBehavior.hpp"

class MuteQuack : public IQuackBehavior {

    public:

        MuteQuack();
        ~MuteQuack();
        
        virtual void quack();

};

#endif //MUTEQUACK_HPP