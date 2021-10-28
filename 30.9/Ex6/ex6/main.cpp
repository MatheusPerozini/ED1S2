/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: mathe
 *
 * Created on 30 de Setembro de 2021, 19:25
 */

#include <cstdlib>
#include <iostream>

#include "Calculo.h"

using namespace std;

int main(int argc, char** argv) {
    float a , b , c;
    Calculo *calculo = new Calculo();
    
    cout << "Digite tres números para saber se formam um triangulo" << endl;
    cin >> a >> b >> c;
    calculo->checarTriangulo(a,b,c);
    
    return 0;
}

