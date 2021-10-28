/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Cadastro.h
 * Author: mathe
 *
 * Created on 7 de Outubro de 2021, 12:11
 */

#ifndef CADASTRO_H
#define CADASTRO_H

class Cadastro {
public:
    struct cadAluno{
        char nome[40];
        long int matricula;
        float nota1 , nota2;
    }alunos[3];
    
    Cadastro();
    Cadastro(const Cadastro& orig);
    virtual ~Cadastro();
    void lerDados();
    void mostrarDados();
private:

};

#endif /* CADASTRO_H */

