
http://www.injavawetrust.com/design-patterns/ ( this site was utilized )

# Creational
####  Factory Method Directory

     FactoryMethod/
            Header Files/
                Car.h               ( Abstract Class that can be called an interface )
                CarFactory.h        ( Factory Class )
                CarType.h           ( Simple Enum Type )
                Hatchback.h         ( Derived Class from Car )
                Sedan.h             ( Derived Class from Car )
                StationWagon.h      ( Derived Class from Car )
            Resource Files/
                Hatchback.cpp       ( Implementation Hatchback.h )
                Sedan.cpp           ( Implementation Sedan.h )
                StationWagon.cpp    ( Implementation StationWagon.h )
            Source Files/
                main.cpp            ( Main Class )

#### Singleton Directory

     Singleton/
            Header Files/
                EagerInitialization.h    ( Object is create on class loading time )
                LazyInitialization.h     ( Object is create when the first request.This method isn't Thread Safe! Look DoubleCheckLocking)
            Resource Files/
                EagerInitialization.cpp  ( Implementation EagerInitialization.h )
                LazyInitialization.cpp   ( Implementation LazyInitialization.h )
            Source Files/
                main.cpp                 ( Main Class )
