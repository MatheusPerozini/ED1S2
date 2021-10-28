/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: mathe
 *
 * Created on 27 de Setembro de 2021, 08:17
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
    cout << "O valor do calculo é : " << calculo->lerDados();
    return 0;
}

