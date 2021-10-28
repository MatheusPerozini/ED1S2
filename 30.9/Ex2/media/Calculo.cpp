/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Calculo.cpp
 * Author: mathe
 * 
 * Created on 30 de Setembro de 2021, 18:37
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

void Calculo::media(char opcao){
    float n1 = this->nota1;
    float n2 = this->nota2;
    float n3 = this->nota3;
    float calculo;
    
    switch(opcao)
    {
        case 'a':
            calculo = (n1 + n2 + n3)/3;
            cout << "O valor da média selecionada é : " << calculo;
            break;
            
        case 'p':
            calculo = ((n1 * 5) + (n2 * 3) + (n3 * 2))/10;
            cout << "O valor da média selecionada é : " << calculo;
            break;
            
        default:
            cout << "Opção invalida";
            break;
    }
}