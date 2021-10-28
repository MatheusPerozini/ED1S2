/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Calculo.cpp
 * Author: mathe
 * 
 * Created on 30 de Setembro de 2021, 18:57
 */

#include "Calculo.h"

Calculo::Calculo() {
}

Calculo::Calculo(const Calculo& orig) {
}

Calculo::~Calculo() {
}

int Calculo::checarNumero(int a){
    if(a > 0){
        return 1;
    }else if(a < 0){
        return -1;
    }else{
        return 0;
    }
}

