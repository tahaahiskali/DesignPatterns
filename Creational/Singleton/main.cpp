/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ahiska
 *
 * Created on 27 Mayıs 2019 Pazartesi, 00:42
 */

#include <cstdlib>
#include <iostream>
#include "EagerInitialization.h"
#include "LazyInitialization.h"

using namespace std;

/*
 * 
 */
int main() {

    EagerInitialization *testEagerIntance1 = EagerInitialization::getInstance();
    EagerInitialization *testEagerIntance2 = EagerInitialization::getInstance();
    
    cout << "testEagerIntance1 adress : " << testEagerIntance1 << endl 
         << "testEagerIntance2 adress : " << testEagerIntance2 << endl << endl;
    
    LazyInitialization *testLazyIntance1 = LazyInitialization::getInstance();
    LazyInitialization *testLazyIntance2 = LazyInitialization::getInstance();
    
    cout << "testLazyIntance1  adress : " << testLazyIntance1 << endl
         << "testLazyIntance2  adress : " << testLazyIntance2 << endl;
   
    return 0;
}

