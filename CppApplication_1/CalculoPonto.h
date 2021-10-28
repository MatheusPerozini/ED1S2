/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CalculoPonto.h
 * Author: mathe
 *
 * Created on 26 de Setembro de 2021, 16:09
 */

#ifndef CALCULOPONTO_H
#define CALCULOPONTO_H

class CalculoPonto {
public:
    int x1 , x2 , y1 , y2;
    CalculoPonto();
    CalculoPonto(const CalculoPonto& orig);
    virtual ~CalculoPonto();
    void pegarDados();
    float calculoDistancia();
private:

};

#endif /* CALCULOPONTO_H */

