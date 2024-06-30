#include<iostream>
using namespace std;

int main(){
    int pessoa=0,idademasc,idadefem,masculino=0,feminino=0,somamasc=0,somafem=0;
    char sexo;
    while (pessoa!=10)
    { 
        cout<<"DIgite o sexo(m ou f): ";
        cin>>sexo;
        if (sexo=='m'){
            masculino++;
            cout<<"Digite a Idade: ";
            cin>>idademasc;
            somamasc+=idademasc;}
        if (sexo=='f'){
            feminino++;
            cout<<"DIgite a Idade: ";
            cin>>idadefem;
            somafem+=idadefem;}
        pessoa++;
    }
    cout<<"Quantiedade de homens: "<<masculino<<endl<<"Quantiedade de mulheres: "<<feminino<<endl
        <<"Percentual de Homens: "<<masculino*100.0/pessoa<<"%"<<endl
        <<"Percentual de Mulheres: "<<feminino*100.0/pessoa<<"%"<<endl
        <<"Media idade dos homens: "<<somamasc/masculino<<endl
        <<"Media idade das mulheres: "<<somafem/feminino;
}