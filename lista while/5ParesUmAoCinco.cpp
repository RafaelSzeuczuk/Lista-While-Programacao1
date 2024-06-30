#include <iostream>
using namespace std;

int main()
{
    int a = 1, quantidadepar = 0, somapar = 0;
    cout<<"Valores acumulados: ";
    while (a != 15)
    {   
        if (a % 2 == 0)
        {   cout<<a<<" ";
            quantidadepar++;
            somapar += a;
        }   
        a++;
    }
    cout<<"\nSoma dos pares: "<<somapar<<endl<<"Quantidade de pares: "<<quantidadepar<<endl;
}