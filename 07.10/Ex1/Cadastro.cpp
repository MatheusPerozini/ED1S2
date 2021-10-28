/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Cadastro.cpp
 * Author: mathe
 * 
 * Created on 7 de Outubro de 2021, 12:11
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

void Cadastro::lerDados(){
    for(int i = 0;i < 3;i++){
        cout << "Digite o nome do " << i + 1 << "° aluno" << endl;
        cin >> this->alunos[i].nome;
        cout << "Digite a matricula do " << i + 1 << "° aluno" << endl;
        cin >> this->alunos[i].matricula;
        cout << "Digite a primeira nota do " << i + 1 << "° aluno" << endl;
        cin >> this->alunos[i].nota1;
        cout << "Digite a segunda nota do " << i + 1 << "° aluno" << endl;
        cin >> this->alunos[i].nota2;
    }
}

void Cadastro::mostrarDados(){
        for(int i = 0;i < 3;i++){
        cout << "\n Aqui estão os dados do " << i + 1 << "° aluno" << endl;
        cout << "Nome : " << this->alunos[i].nome << endl;
        cout << "Matricula : " << this->alunos[i].matricula << endl;
        cout << "Nota 1 : " << this->alunos[i].nota1 << endl;
        cout << "Nota 2 : " << this->alunos[i].nota2 << endl;
        float media = ((this->alunos[i].nota1 + this->alunos[i].nota2)/2);
        cout << "Média : " << media << endl;
    }
}