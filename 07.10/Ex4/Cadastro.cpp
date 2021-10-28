/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Cadastro.cpp
 * Author: mathe
 * 
 * Created on 7 de Outubro de 2021, 14:03
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
    for(int i = 0;3 > i;i++){
        cout << "Digite o nome do " << i+1<<"° produto" << endl;
        cin >> this->produto[i].nome;
        cout << "Digite o preco do " << i+1<<"° produto" << endl;
        cin >> this->produto[i].preco;
        cout << "Digite o codigo do " << i+1<<"° produto" << endl;
        cin >> this->produto[i].codigo;
    }
}

void Cadastro::mostrarDados(){
        for(int i = 0;3 > i;i++){
            cout << "\n Dados do " << i+1<<"° produto :" <<endl;
            cout << "Nome : " << this->produto[i].nome << endl;
            cout << "Preço : " << this->produto[i].preco << endl;
            cout << "Código : " << this->produto[i].codigo << endl;
    }
}

void Cadastro::pesquisa(){
    long int codigo;
    bool achou = false;
    cout << "\n Digite o código para obter informações do produto correspondente" <<endl;
    cin >> codigo;
    for(int i = 0;3 > i;i++){
        if(codigo == this->produto[i].codigo){
            achou = true;
            cout << "Dados do " << i+1<<"° produto :" <<endl;
            cout << "Nome : " << this->produto[i].nome << endl;
            cout << "Preço : " << this->produto[i].preco << endl;
            cout << "Código : " << this->produto[i].codigo << endl;
        }
    }
    if(achou == false){
        cout << "Nenhum produto encontrado" << endl;
    }
}