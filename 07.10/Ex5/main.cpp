/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: mathe
 *
 * Created on 7 de Outubro de 2021, 15:33
 */

#include <cstdlib>

#include "ContaBancaria.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    ContaBancaria *contabancaria = new ContaBancaria();
    
    contabancaria->pegarDados();
    contabancaria->transacoes();
    
    return 0;
}

