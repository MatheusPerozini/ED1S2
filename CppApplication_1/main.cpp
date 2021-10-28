/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: mathe
 *
 * Created on 26 de Setembro de 2021, 16:07
 */

#include <cstdlib>
#include <iostream>

#include "CalculoPonto.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    CalculoPonto *obj1 = new CalculoPonto();
    
    obj1->pegarDados();
    cout << obj1->calculoDistancia();
    
    return 0;
}

