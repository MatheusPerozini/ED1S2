/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: mathe
 *
 * Created on 27 de Setembro de 2021, 09:23
 */

#include <cstdlib>
#include <iostream>

#include "Carro.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Carro *carro = new Carro();
    carro->lerDados();
    cout << "O valor para o consumidor é : " << carro->valorConsumidor();
    return 0;
}

