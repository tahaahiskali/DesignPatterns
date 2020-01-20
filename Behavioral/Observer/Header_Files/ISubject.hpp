#ifndef ISUBJECT_HPP
#define ISUBJECT_HPP

class IObserver;

class ISubject {

    public:

        virtual ~ISubject(){};

        virtual void registerObserver( IObserver *o ) = 0;
        virtual void removeObserver( IObserver *o ) = 0;
        virtual void notifyObservers() = 0;


};

#endif //ISUBJECT_HPP
