/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ContaBancaria.h
 * Author: mathe
 *
 * Created on 7 de Outubro de 2021, 15:33
 */

#ifndef CONTABANCARIA_H
#define CONTABANCARIA_H

class ContaBancaria {
public:
    struct contaBancaria{
        char nome[40];
        long int cpf;
        float saldo;
    }contaUsuario[3];
    
    ContaBancaria();
    ContaBancaria(const ContaBancaria& orig);
    virtual ~ContaBancaria();
    void pegarDados();
    void transacoes();
private:

};

#endif /* CONTABANCARIA_H */

