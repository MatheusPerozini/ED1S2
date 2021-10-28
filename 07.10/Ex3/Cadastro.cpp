/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Cadastro.cpp
 * Author: mathe
 * 
 * Created on 7 de Outubro de 2021, 13:14
 */

#include "Cadastro.h"
#include <iostream>

using namespace std;

Cadastro::Cadastro() {
}

Cadastro::Cadastro(const Cadastro& orig) {
}

Cadastro::~Cadastro() {
}

void Cadastro::pegarDados(){
    for(int i = 0;3 > i ;i++){
        cout << "Digite o nome da " << i + 1 << "° pessoa" << endl;
        cin >> this->usuario[i].nome;
        cout << "Digite o cpf da " << i + 1 << "° pessoa" << endl;
        cin >> this->usuario[i].cpf;
    }
}

void Cadastro::pesquisaSequencial(){
    long int cpf;
    bool achou = false;
    cout << "Digite um CPF para mostrar o nome da pessoa correspondete" << endl;
    cin >> cpf;
    for(int i = 0;3 > i ;i++){
        if(this->usuario[i].cpf == cpf){
            achou = true;
            cout << "Nome da " << i+1 << "° pessoa : " << this->usuario[i].nome <<endl;
        }
    }
    if(achou == false){
        cout << "Usuario não encontrado" << endl;
    }
    this->pesquisaBinaria(cpf);
}

void Cadastro::pesquisaBinaria(long int item){
    int begin = 0;
    int end = 3;
    bool achou = false;
    cout << "\n Agora em pesquisa binária" << endl;
    while (begin <= end) {

        int i = (begin + end) / 2;

        if (this->usuario[i].cpf == item) {
             cout << "Nome da " << i+1 << "° pessoa : " << this->usuario[i].nome <<endl;
             achou = true;
             break;
        }

        if (this->usuario[i].cpf < item) {
            begin = i + 1;
        } else {
            end = i;
        }
    }
    if(achou == false){
            cout << "Usuario não encontrado" << endl;
    }
}