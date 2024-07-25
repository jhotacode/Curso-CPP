//Ordenamiento por selección

#include <iostream>
using namespace std;

int main()
{
    int numeros[5] = {5,4,1,2,3};
    int i,j,aux,min;

    for(i = 0;i < 5;i++)
    {
        min = i;
        for(j = i + 1;j < 5;j++)
        {
            if(numeros[j] < numeros[min])
            {
                min = j;   
            }
        }
        aux = numeros[i];
        numeros[i] = numeros[min];
        numeros[min] = aux;
    }

    for(i = 0;i < 5;i++)
    {
        cout<<numeros[i]<<" ";
    }

    cin.get();
    return 0;
}