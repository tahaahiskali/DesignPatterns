#ifndef IOBSERVER_HPP
#define IOBSERVER_HPP

class IObserver {

    public:

        virtual ~IObserver(){};
        virtual void update( float temp, float humidity, float pressure ) = 0;

};


#endif //IOBSERVER