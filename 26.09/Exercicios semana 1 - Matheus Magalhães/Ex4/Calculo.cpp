/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Calculo.cpp
 * Author: mathe
 * 
 * Created on 27 de Setembro de 2021, 08:46
 */

#include "Calculo.h"
#include <iostream>

int dias;

using namespace std;

Calculo::Calculo() {
}

Calculo::Calculo(const Calculo& orig) {
}

Calculo::~Calculo() {
}

void Calculo::lerDados(){
    cout << "Digite sua idade em , apenas ,dias" << endl;
    cin >> dias;
}

void Calculo::calculoIdade(){
    float anos , meses , calculoDias;
    anos = dias / 365;
    meses = (dias % 365) / 30;
    calculoDias = ((dias % 365) % 30);
    cout << "Sua idade em anos é : " << anos << ". Em meses é : " << meses << ". Em dias é : " << calculoDias;
}