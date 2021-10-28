/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Cadastro.h
 * Author: mathe
 *
 * Created on 7 de Outubro de 2021, 13:14
 */

#ifndef CADASTRO_H
#define CADASTRO_H

class Cadastro {
public:
    struct cadUser{
        char nome[40];
        long int cpf;
    }usuario[3];
    long int cpf;
    
    Cadastro();
    Cadastro(const Cadastro& orig);
    virtual ~Cadastro();
    void pegarDados();
    void pesquisaSequencial();
    void pesquisaBinaria(long int item);
private:

};

#endif /* CADASTRO_H */

