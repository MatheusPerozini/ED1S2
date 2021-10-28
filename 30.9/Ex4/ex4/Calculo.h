/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Calculo.h
 * Author: mathe
 *
 * Created on 30 de Setembro de 2021, 19:04
 */

#ifndef CALCULO_H
#define CALCULO_H

class Calculo {
public:
    int a , b ,c;
    Calculo();
    Calculo(const Calculo& orig);
    virtual ~Calculo();
    float delta();
private:

};

#endif /* CALCULO_H */

