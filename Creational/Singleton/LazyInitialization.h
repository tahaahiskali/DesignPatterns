/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   LazyInitialization.h
 * Author: ahiska
 *
 * Created on 27 Mayıs 2019 Pazartesi, 02:47
 */

#ifndef LAZYINITIALIZATION_H
#define LAZYINITIALIZATION_H

class LazyInitialization{
public:
    static LazyInitialization * getInstance();
private:
    static LazyInitialization *instance;
    LazyInitialization();
};

#endif 

