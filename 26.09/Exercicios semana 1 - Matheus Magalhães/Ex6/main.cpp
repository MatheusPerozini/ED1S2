/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: mathe
 *
 * Created on 27 de Setembro de 2021, 09:11
 */

#include <cstdlib>

#include "calculo.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    calculo *obj = new calculo();
    
    obj->calculoTempo();
    
    return 0;
}

