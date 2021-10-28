/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ContaBancaria.cpp
 * Author: mathe
 * 
 * Created on 7 de Outubro de 2021, 15:33
 */

#include "ContaBancaria.h"
#include <iostream>

using namespace std;

ContaBancaria::ContaBancaria() {
}

ContaBancaria::ContaBancaria(const ContaBancaria& orig) {
}

ContaBancaria::~ContaBancaria() {
}

void ContaBancaria::pegarDados(){
    for(int i = 0;3 > i;i++){
        cout << "Digite o nome do "<<i + 1<<"° usuário" << endl;
        cin >> this->contaUsuario[i].nome;
        cout << "Digite o cpf do "<<i + 1<<"° usuário" << endl;
        cin >> this->contaUsuario[i].cpf;
        
        bool depositoRealizado = false;
        do{
            float deposito;
            cout << "Digite o primeiro depósito do "<<i + 1<<"° usuário" << endl;
            cin >> deposito;
            if(deposito < 0){
                cout << "Só é possivel realizar depósitos de valores positivos" << endl;
            } else {
                this->contaUsuario[i].saldo = deposito;
                depositoRealizado = true;
            }
        }while(depositoRealizado == false);
    }
}

void ContaBancaria::transacoes(){
    bool finalizar = false;
    do{
        long int cpf;
        bool achado = false;
        cout << " \n Digite o CPF para realizar uma trasação"<< endl;
        cin >> cpf;
        for(int i = 0;3 > i;i++){
            if(this->contaUsuario[i].cpf == cpf){
                achado = true;
                char comando;
                cout << "Deseja realizar (S)aque ou (D)epósito?" << endl;
                cin >> comando;
                    switch(comando){
                        case 'D':{
                            bool depositoRealizado = false;
                            do{
                                float deposito;
                                cout << "Digite o valor de depósito" << endl;
                                cin >> deposito;
                                if(deposito < 0){
                                    cout << "Só é possivel realizar depósitos de valores positivos" << endl;
                                } else {
                                this->contaUsuario[i].saldo += deposito;
                                depositoRealizado = true;
                                }
                            }while(depositoRealizado == false);
                            cout << "Depósito realizado no usuario:" <<endl;
                            cout <<this->contaUsuario[i].nome <<endl;
                            cout << "Saldo final : " <<endl;
                            cout << this->contaUsuario[i].saldo <<endl;
                            break;
                        }
                        default:{
                            cout << "Comando invalido" << endl;
                            break;
                        }
                        case 'S':{
                            bool saqueRealizado = false;
                            do{
                                float saque;
                                cout << "Digite o valor de saque" << endl;
                                cin >> saque;
                                if(saque < 0){
                                    cout << "Só é possivel realizar saques de valores positivos" << endl;
                                } else {
                                this->contaUsuario[i].saldo -= saque;
                                saqueRealizado = true;
                                }
                            }while(saqueRealizado == false);
                            cout <<"Saque realizado no usuario:" <<endl;
                            cout <<this->contaUsuario[i].nome <<endl;
                            cout << "Saldo final : " <<endl;
                            cout << this->contaUsuario[i].saldo <<endl;
                            break;
                        }
                        }
                }
        }
        if(achado == false){
            cout << "Usuário não encontrado" << endl;
        }
        char comando;
        cout << "Deseja realizar outra transação?(S)im ou (N)ão" << endl;
        cin >> comando;
        bool finalizarComando = false;
        while(finalizarComando == false){
            switch(comando){
                case 'N':
                    finalizar = true;
                    finalizarComando = true;
                    break;
                case 'S':
                    finalizarComando = true;
                    break;
                default:
                    cout << "Comando invalido" << endl;
                    break;
            }
        }
    }while(finalizar == false);
}