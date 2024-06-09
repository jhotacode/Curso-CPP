#include<iostream>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;

int main()
{
    char mensaje[] = "Bienvenidos a una aventura mas", mensaje2[30],mensaje3[30] = "Este es un comentario feliz";
    int longitud = strlen(mensaje);
    //La función STRLEN nos permite conocer cuantos caracteres tiene un arreglo.
    cout<<longitud<<endl;
    //Copiar una  cadena en otra: STRCPY
    strcpy(mensaje2,mensaje);
    cout<<mensaje2;
    //Comparar dos cadenas: STRCMP
    if(strcmp(mensaje2,mensaje3) == 0)
    {
        cout<<"\nAmbas cadenas son iguales"<<endl;
    }
    else
    {
        cout<<"\nAmbas cadenas son diferentes"<<endl;
    }
    //Ahora aprenderemos una función que nos permitirá concatenar cadenas
    char letras1[] = "Deportivo ", letras2[] = "Pereira", letra3[20];
    //Concatenaremos con la función strcat
    strcat(letra3,letras1);strcat(letra3,letras2);
    cout<<letra3<<endl;

    //A continuación pasaremos una frase a mayúsculas mediante la función: strupr
    cout<<strupr(letra3)<<endl;
    //Así cómo podemos pasar a mayúscula también podemos pasarlas a minúsculas: strlwr
    cout<<strlwr(letra3)<<endl;

    //Para invertir una cadena de carácteres también tenemos una función: strrev()
    cout<<strrev(letra3)<<endl;

    //También existen funciones que nos permiten transformar cadenas a numeros: atoi (integer) y atof(flotante)

    char cad[] = "123";int numero;
    numero = atoi(cad);
    cout<<numero<<endl;

    getch();
    return 0;
}
