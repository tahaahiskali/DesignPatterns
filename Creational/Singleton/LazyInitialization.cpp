/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "LazyInitialization.h"

LazyInitialization * LazyInitialization::instance = nullptr;

LazyInitialization::LazyInitialization() 
{
}

LazyInitialization * LazyInitialization::getInstance() {
    if ( instance == nullptr ) // Not Thread Safe !
        {
            instance = new LazyInitialization();
            return instance;
        }
        
    else    return instance;
}

 


