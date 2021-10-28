/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Calculo.cpp
 * Author: mathe
 * 
 * Created on 30 de Setembro de 2021, 19:31
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

void Calculo::checarTriangulo(float a, float b, float c){
    if(a + b > c && a + c > b && b + c > a){
        if(a == b && a == c && b == c){
            cout << "É um triangulo equilátero";
        } else if(a != b && a != c && b != c){
            cout << "É um triangulo escaleno";
        } else {
            cout << "É um triangulo isóceles";
        }
    } else {
        cout << "Não é um triangulo válido";
    }
}