/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Cadastro.h
 * Author: mathe
 *
 * Created on 7 de Outubro de 2021, 14:03
 */

#ifndef CADASTRO_H
#define CADASTRO_H

class Cadastro {
public:
    struct produtos{
        char nome[40];
        long int codigo;
        float preco;
    }produto[3];
    
    Cadastro();
    Cadastro(const Cadastro& orig);
    virtual ~Cadastro();
    
    void pegarDados();
    void mostrarDados();
    void pesquisa();
private:

};

#endif /* CADASTRO_H */

