//Ordenamiento por inserción

#include<iostream>
using namespace std;

int main()
{
    int numeros[] = {5,4,1,3,2};int i,pos,aux;

    for(i = 0;i < 5;i++)
    {
        pos = i;
        aux = numeros[i];
        while((pos > 0) && (numeros[pos-1] > aux))
        {
            numeros[pos] = numeros[pos - 1];
            pos--;
        }
        numeros[pos] = aux;
    }

    cout << "Orden ascendente: \n";
    for(i = 0;i < 5;i++)
    {
        cout << " " << numeros[i];
    }
    cout << endl;
    return 0;
}