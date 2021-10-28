/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Carro.cpp
 * Author: mathe
 * 
 * Created on 27 de Setembro de 2021, 09:27
 */

#include "Carro.h"
#include <iostream>

using namespace std;

Carro::Carro() {
}

Carro::Carro(const Carro& orig) {
}

Carro::~Carro() {
}

void Carro::lerDados(){
    cout << "Digite o valor de fábrica do carro" << endl;
    cin >> this->valor;
}

float Carro::valorConsumidor(){
    float calculo , valor;
    
    valor = this->valor;
    calculo = valor + (valor * 0.28) + (valor * 0.45);
    
    return calculo;
}