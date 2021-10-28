/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   calcDistanciaEclidiana.cpp
 * Author: mathe
 * 
 * Created on 13 de Setembro de 2021, 10:38
 */

#include "calcDistanciaEclidiana.h"
#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;
calcDistanciaEclidiana::calcDistanciaEclidiana() {
}

calcDistanciaEclidiana::calcDistanciaEclidiana(const calcDistanciaEclidiana& orig) {
}

calcDistanciaEclidiana::~calcDistanciaEclidiana() {
}

void calcDistanciaEclidiana::lerDados(){
    cout << "Digite o valor de x1" << endl;
    cin >> x1;
    cout << "Digite o valor de x2" << endl;
    cin >> x2;
    cout << "Digite o valor de y1" << endl;
    cin >> y1;
    cout << "Digite o valor de y2" << endl;
    cin >> y2;
}

float calcDistanciaEclidiana::calcularDE(){
    float d;
    d = sqrt(pow((x2 - x1) , 2) + pow((y2 - y1), 2));
    return d;
}
