#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

int mmm(int &ma, int &me, int &med);

int main(){
    int a, b, c;
    cout<<"Digite um valor: ";
    cin>>a;
    cout<<"Digite outro valor: ";
    cin>>b;
    cout<<"Digite o ultimo valor: ";
    cin>>c;
    cout<<"Media dos valores: "<<mmm(a,b,c)<<endl;
    cout<<"Menor valor: "<<b<<endl;
    cout<<"Maior valor: "<<a<<endl;
}

int mmm(int &ma, int &me, int &med){
    int media;
    media = (ma+me+med)/3;
    
    if(ma < me){
        ma = me;
    }else if(ma < med){
        ma = med;
    }
    if(me > ma){
        me = ma;
    }else if(me > med){
        me = med;
    }
   
    return media;
}