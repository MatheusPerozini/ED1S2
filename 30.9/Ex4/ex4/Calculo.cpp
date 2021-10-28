/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Calculo.cpp
 * Author: mathe
 * 
 * Created on 30 de Setembro de 2021, 19:04
 */

#include "Calculo.h"
#include <cmath>

Calculo::Calculo() {
}

Calculo::Calculo(const Calculo& orig) {
}

Calculo::~Calculo() {
}

float Calculo::delta(){
    int a = this->a;
    int b = this->b;
    int c = this->c;
    float delta;
    
    delta = pow(b,2) - (4 * a * c) ;
    
    return delta;
}