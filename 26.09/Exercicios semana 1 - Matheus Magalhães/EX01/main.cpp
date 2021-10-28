/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: mathe
 *
 * Created on 13 de Setembro de 2021, 10:36
 */

#include <cstdlib>
#include <iostream>
#include "calcDistanciaEclidiana.h"
using namespace std;

int main(int argc, char** argv) {
    calcDistanciaEclidiana obj1;
    obj1.lerDados();
    cout << obj1.calcularDE();
    return 0;
}

