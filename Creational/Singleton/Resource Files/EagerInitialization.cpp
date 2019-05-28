
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "EagerInitialization.h"

EagerInitialization::EagerInitialization() 
{
}

EagerInitialization * EagerInitialization::getIntance() {
    static EagerInitialization instance;
    return &instance;
}
