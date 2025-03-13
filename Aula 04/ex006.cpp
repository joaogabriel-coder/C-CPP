#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>

using namespace std;

struct produto{
    int codigo;
    int qtde_stoque;
    char descricao[50];
    float preco;
};

void leitura(struct produto x[1000]);
void mostrar(struct produto a);

main(){
    produto produtos[1000];
    leitura(produtos);

    for(int i=0; i<2; i++){
        if(produtos[i].qtde_stoque<50){
            mostrar(produtos[i]);
        }
    }
}

void leitura(struct produto x[1000]){
    for(int i=0; i<2; i++){
        cout<<"Digite o codigo: ";
        cin>>x[i].codigo;
        cout<<"Digite a qtde: ";
        cin>>x[i].qtde_stoque;
        cout<<"Digite a descricao: ";
        cin>>x[i].descricao;
        cout<<"Digite o preco: ";
        cin>>x[i].preco;
        }
    }


void mostrar(struct produto a){
    cout<<"Codigo: "<<a.codigo<<endl;
    cout<<"Estoque: "<<a.qtde_stoque<<endl;
    cout<<"Desc: "<<a.descricao<<endl;
    cout<<"Preco: "<<a.preco<<endl;
}