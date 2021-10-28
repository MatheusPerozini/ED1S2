/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Calculo.cpp
 * Author: mathe
 * 
 * Created on 27 de Setembro de 2021, 09:01
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

void Calculo::lerDados(){
    cout << "Digite as 3 notas do aluno para calcular sua média" << endl;
    cin >> this->nota1;
    cin >> this->nota2;
    cin >> this->nota3;
}

float Calculo::media(){
    float calculo;
    calculo = ((this->nota1 * 2) + (this->nota2 * 3) + (this->nota3 * 5))/10;
    return calculo;
}