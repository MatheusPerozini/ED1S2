/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Calculo.h
 * Author: mathe
 *
 * Created on 27 de Setembro de 2021, 08:33
 */

#ifndef CALCULO_H
#define CALCULO_H

class Calculo {
public:
    Calculo();
    Calculo(const Calculo& orig);
    virtual ~Calculo();
    void lerDados();
    float calculoDias();
private:

};

#endif /* CALCULO_H */

