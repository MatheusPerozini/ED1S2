/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   calcDistanciaEclidiana.h
 * Author: mathe
 *
 * Created on 13 de Setembro de 2021, 10:38
 */

#ifndef CALCDISTANCIAECLIDIANA_H
#define CALCDISTANCIAECLIDIANA_H

class calcDistanciaEclidiana {
public:
    calcDistanciaEclidiana();
    calcDistanciaEclidiana(const calcDistanciaEclidiana& orig);
    virtual ~calcDistanciaEclidiana();
    
    int x1,y1,x2,y2;
    
    void lerDados();
    float calcularDE();

private:

};

#endif /* CALCDISTANCIAECLIDIANA_H */

