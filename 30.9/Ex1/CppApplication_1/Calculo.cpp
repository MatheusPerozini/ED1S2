/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Calculo.cpp
 * Author: mathe
 * 
 * Created on 30 de Setembro de 2021, 18:31
 */

#include "Calculo.h"
#include <iostream>

using namespace std;

Calculo::Calculo() {
}

Calculo::Calculo(const Calculo& orig) {
}

Calculo::~Calculo() {
}

void Calculo::comparador(int a, int b){
    if(a > b){
        cout << "O menor número entre eles é : " << b;
    } else if(a < b){
        cout << "O menor número entre eles é : " << a;
    } else {
        cout << "Os números possuem o mesmo valor";
    }
}