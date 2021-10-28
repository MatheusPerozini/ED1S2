/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CalculoPonto.cpp
 * Author: mathe
 * 
 * Created on 26 de Setembro de 2021, 16:09
 */

#include "CalculoPonto.h"
#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

CalculoPonto::CalculoPonto() {
}

CalculoPonto::CalculoPonto(const CalculoPonto& orig) {
}

CalculoPonto::~CalculoPonto() {
}

void CalculoPonto::pegarDados(){
    cout << "Digite o valor de x1" << endl;
    cin >> this->x1;
    cout << "Digite o valor de x2" << endl;
    cin >> this->x2;
    cout << "Digite o valor de y1" << endl;
    cin >> this->y1;
    cout << "Digite o valor de y2" << endl;
    cin >> this->y2;
}

float calculoDistancia(){
    float d;
    d = sqrt(pow((this->x2 - this->x1) , 2) + pow((this->y2 - this->y1), 2));
    return d;
}

