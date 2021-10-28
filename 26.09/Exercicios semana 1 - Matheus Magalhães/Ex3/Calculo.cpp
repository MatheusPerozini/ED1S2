/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Calculo.cpp
 * Author: mathe
 * 
 * Created on 27 de Setembro de 2021, 08:33
 */

#include "Calculo.h"
#include <iostream>

int anos,meses,dias;

using namespace std;

Calculo::Calculo() {
}

Calculo::Calculo(const Calculo& orig) {
}

Calculo::~Calculo() {
}

void Calculo::lerDados(){
    cout << "Digite quanto anos , meses e dias você tem" <<endl;
    cin >> anos;
    cin >> meses;
    cin >> dias;
}

float Calculo::calculoDias(){
    float calculo;
    calculo = (anos * 365) + (meses * 30) + dias;
    return calculo;
}