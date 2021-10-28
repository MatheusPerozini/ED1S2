/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: mathe
 *
 * Created on 30 de Setembro de 2021, 19:03
 */

#include <cstdlib>
#include <iostream>

#include "Calculo.h"

using namespace std;

int main(int argc, char** argv) {
    Calculo *calculo = new Calculo();
    
    cout << "Digite tres valores para calcular o delta da equação de 2° grau" << endl;
    cin >> calculo->a >> calculo->b >> calculo->c;
    cout << "O valor de delta é : " << calculo->delta();
    
    return 0;
}

