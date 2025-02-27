#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

void somaemedia(int a, int b, int &soma, int &media);

int main(){
    int a, b, soma, media;
    cout<<"Digite um numero: ";
    cin>>a;
    cout<<"Digite outro numero: ";
    cin>>b;
        somaemedia(a,b,soma,media);
    cout<<"Soma: "<<soma<<endl;
    cout<<"Media: "<<media<<endl;
}

void somaemedia(int a, int b, int &soma, int &media){
    soma = a+b;
    media = soma/2;
}