/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Cadastro.h
 * Author: mathe
 *
 * Created on 7 de Outubro de 2021, 12:49
 */

#ifndef CADASTRO_H
#define CADASTRO_H

class Cadastro {
public:
    struct cadUsers{
        char nome[40];
        float altura , peso;
        long int cpf;
        char sexo;
    }usuarios[3];
    
    Cadastro();
    Cadastro(const Cadastro& orig);
    virtual ~Cadastro();
    void pegarDados();
    void pesquisaDados();
private:

};

#endif /* CADASTRO_H */

