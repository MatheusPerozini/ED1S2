/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: mathe
 *
 * Created on 30 de Setembro de 2021, 18:30
 */

#include <cstdlib>
#include <iostream>

#include "Calculo.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int a , b;
    Calculo *calculo = new Calculo();
    
    cout << "Digite dois números para saber qual deles é o menor" << endl;
    cin >> a >> b;
    
    calculo->comparador(a ,b);
    
    return 0;
}

