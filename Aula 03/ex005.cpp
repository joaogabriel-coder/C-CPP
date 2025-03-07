#include <iostream>
#include <stdio.h>
#include <cstring>

using namespace std;

int main() {
    char text1[50];
    char text2[50];
    char text3[50];
    int n;

    cout << "Digite algo ate 50 caracteres: ";
    cin.getline(text2, 50);  // Permite entrada com espaços

    cout << "String copiada: " << strcpy(text1, text2) << endl;

    cout << "Digite um numero menor que 50: ";
    cin >> n;

    if (n < 50) {
        strncpy(text3, text1, n);
        text3[n] = '\0';  // Garante que a string tenha um terminador nulo

        cout << "\nCopia 2: " << text3 << endl;
    } else {
        cout << "Erro: O numero deve ser menor que 50!" << endl;
    }

    return 0;
}