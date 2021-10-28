/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: mathe
 *
 * Created on 7 de Outubro de 2021, 13:13
 */

#include <cstdlib>

#include "Cadastro.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Cadastro *cadastro = new Cadastro();
    
    cadastro->pegarDados();
    cadastro->pesquisaSequencial();
    
    return 0;
}

