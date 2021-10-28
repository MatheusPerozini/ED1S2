/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   calculo.cpp
 * Author: mathe
 * 
 * Created on 27 de Setembro de 2021, 09:11
 */

#include "calculo.h"
#include <iostream>

using namespace std;

calculo::calculo() {
}

calculo::calculo(const calculo& orig) {
}

calculo::~calculo() {
}

void calculo::calculoTempo(){
    int segundos , minutos , horas;
    
    cout << "Digite a duração do evento em segundos" << endl;
    cin >> segundos;
    
    horas = segundos / 3600;
    minutos = (segundos % 3600) / 60;
    segundos = (segundos % 3600) % 60;
    
    cout << "O evento possui " << horas << " horas," << minutos <<" minutos e " << segundos << " segundos";
}

