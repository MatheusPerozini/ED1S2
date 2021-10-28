/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: mathe
 *
 * Created on 30 de Setembro de 2021, 19:12
 */

#include <cstdlib>
#include <iostream>

#include "Calculo.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Calculo *calculo = new Calculo();
    float r;
    
    cout << "Digite o valor do raio de uma esfera para calcular seu volume" << endl;
    cin >> r;
    cout << "O volume da esfera é : " << calculo->volumeEsfera(r);
    
    return 0;
}

