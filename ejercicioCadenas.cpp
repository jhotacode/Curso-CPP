#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char frase[20];int contadorVocales = 0;
    cout<<"Ingrese una frase de maximo 20 caracteres: ";
    cin.getline(frase,20,'\n');

    strlwr(frase);

    for(int i = 0;i < 20;i++)
    {
        switch(frase[i])
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u': contadorVocales++;break;
        }
    }

    cout<<"La cantidad de vocales en tu frase es: "<<contadorVocales<<endl;

    system("pause");
    return 0;
}
