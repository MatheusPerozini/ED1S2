/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: mathe
 *
 * Created on 30 de Setembro de 2021, 18:37
 */

#include <cstdlib>
#include <iostream>

#include "Calculo.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    char opcao;
    Calculo *calculo = new Calculo();
  
    cout << "Digite as 3 notas do aluno" << endl;
    cin >> calculo->nota1 >> calculo->nota2 >> calculo->nota3;
    cout << "Digite a para média aritmética ou p para média ponderada" << endl;
    cin >> opcao;
    
    calculo->media(opcao);
    
    return 0;
}

