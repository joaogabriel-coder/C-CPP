#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cstring>
using namespace std;



int main(){
    char text1[50];
    char text2[50];
    char text3[50];
    int n;
        cout<<"digite algo até 50 carecteres: ";
        cin.getline(text2, 50);
    cout<<"string copiada: "<<strcpy(text1,text2);

    cout<<"Digite um numero menor que 50: ";
    cin>>n;
    strcpy(text3, text1, n);
    text3[n]='\0';
    cout<<"\n copia 2: "<<text3;
}