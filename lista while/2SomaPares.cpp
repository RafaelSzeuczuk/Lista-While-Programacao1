#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "DIgite 2 numeros: ";
    cin >> a >> b;
    while ((a % 2 == 0) && (b % 2 == 0))
    {
        cout << a + b<< "\nDIgite 2 numeros: ";
        cin >> a >> b;
    }
}