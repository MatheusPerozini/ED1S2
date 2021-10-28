/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Calculo.cpp
 * Author: mathe
 * 
 * Created on 30 de Setembro de 2021, 19:14
 */

#include "Calculo.h"
#include <cmath>
#include <math.h>

Calculo::Calculo() {
}

Calculo::Calculo(const Calculo& orig) {
}

Calculo::~Calculo() {
}

float Calculo::volumeEsfera(int r){
    float calculo;
    
    calculo = (1.333 * M_PI * pow(r , 3));
    
    return calculo;
}