/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Carro.h
 * Author: mathe
 *
 * Created on 27 de Setembro de 2021, 09:27
 */

#ifndef CARRO_H
#define CARRO_H

class Carro {
public:
    Carro();
    Carro(const Carro& orig);
    virtual ~Carro();
    void lerDados();
    float valorConsumidor();
private:
    float valor;
};

#endif /* CARRO_H */

