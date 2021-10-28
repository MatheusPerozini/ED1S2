/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Calculo.cpp
 * Author: mathe
 * 
 * Created on 27 de Setembro de 2021, 08:17
 */

#include "Calculo.h"
#include <iostream>
#include <cmath>

using namespace std;

Calculo::Calculo() {
}

Calculo::Calculo(const Calculo& orig) {
}

Calculo::~Calculo() {
}

float Calculo::lerDados(){
    float a , b ,c;
    cout << "Digite 3 valores para calular" << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    
    float calculo = this->calcularExpressao(a,b,c);
    return calculo;
}

float Calculo::calcularExpressao(float a , float b ,float c){
    float s , r , d;
    s = pow((a + b), 2);
    r = pow((b + c),2);
    d = (r + s)/2;
    return d;
}

