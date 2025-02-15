#include <iostream>
#include <conio.h>
#include <cstring>
#define t 100
using namespace std;

void cadastrar(string &nome, int &codigo, float &preco, int &qtde);
void atualizar(int cod, int qtde, int cont);
float calc();
void exibir();

struct produto{
    string nome;
    int codigo;
    float preco;
    int qtde;
};

produto vetor[t];

main(){
    string nome;
    int codigo;
    float preco;
    int qtde;

    int esc = 1, cont = 0; 
    while(esc >=1 && esc<=4){
    cout<<"Para cadastrar digite: 1";
    cout<<"Para Atualizar digite: 2";
    cout<<"Para Calcular digite: 3";
    cout<<"Para Exibir digite: 4";
    cin>>esc;
        switch(esc){
            case 1:
                cadastrar(nome, codigo, preco, qtde);
                vetor[cont].nome = nome;
                vetor[cont].codigo = codigo;
                vetor[cont].preco = preco;
                vetor[cont].qtde = qtde;

            break;
            case 2:
                int cod, qtde;
                cout<<"Digite o codigo do produto: ";
                cin>>cod;
                cout<<"Digite a quatidade do produto (use - para remover): ";
                cin>> qtde;
                cont ++;
                atualizar(cod, qtde, cont);
        };
    }
}

void cadastrar(string &nome, int &codigo, float &preco, int &qtde){
cout<<"Digite o nome do produto: ";
                cin>> nome;
                cout<<"Digite codigo do priduto: ";
                cin>> codigo;
                cout<<"Digite o preco: ";
                cin>> preco;
                cout<<"Digite a quantidade: ";
                cin>> qtde;
}
void atualizar(int cod, int qtde, int cont){
    bool existe = false, indice;
    for(indice = 0; indice < cont; indice++){ //tetsou pra ver se existe
        if(vetor[indice].codigo == cod){
            existe = true;
        }
    }
    if(existe == false){
        cout<<"Nao existe esse produto"; //msg de erro de produto inexistete
    }
    else{
        if(vetor[cod].qtde + qtde < 0){ //msg para quantidade negativa
            cout<<"Qtde negativa";
        }else{
            vetor[cod].qtde = qtde; //add estoque
        }
    }
}