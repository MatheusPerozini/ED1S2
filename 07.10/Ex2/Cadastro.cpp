/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Cadastro.cpp
 * Author: mathe
 * 
 * Created on 7 de Outubro de 2021, 12:49
 */

#include "Cadastro.h"
#include <iostream>
#include <cmath>

using namespace std;

Cadastro::Cadastro() {
}

Cadastro::Cadastro(const Cadastro& orig) {
}

Cadastro::~Cadastro() {
}

void Cadastro::pegarDados(){
    for(int i = 0;3 > i;i++){
        cout << "Digite o nome da " << i + 1 << "° pessoa" << endl;
        cin >> this->usuarios[i].nome;
        cout << "Digite o cpf da " << i + 1 << "° pessoa" << endl;
        cin >> this->usuarios[i].cpf;
        cout << "Digite o sexo da " << i + 1 << "° pessoa" << endl;
        cin >> this->usuarios[i].sexo;
        cout << "Digite a altura da " << i + 1 << "° pessoa" << endl;
        cin >> this->usuarios[i].altura;
        cout << "Digite a peso da " << i + 1 << "° pessoa" << endl;
        cin >> this->usuarios[i].peso;
    };
}

void Cadastro::pesquisaDados(){
    long int cpf;
    bool achou = false;
    cout << "Digite o CPF para buscar o IMC de alguém" << endl;
    cin >> cpf;
    for(int i = 0;3 > i;i++){
        if(this->usuarios[i].cpf == cpf){
            achou = true;
            float imc = this->usuarios[i].peso / (pow(this->usuarios[i].altura,2));
            cout << "O imc de " << this->usuarios[i].nome << " é : " << imc << endl;
        }
    }
    if(achou == false){
        cout << "Usuário não econtado" << endl;
    }
}