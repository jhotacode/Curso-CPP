#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main()
{
    //Para ingresar una cadena de texto, usamos los arreglos:
    /*
    char nombre[] = "Jhonatan";
    cout<<nombre;
    */
    char nombre1[20];
    cout<<"Ingrese su nombre: ";

    //hay varias maneras de ingresar las cadenas de texto, la primera es la más conocida: CIN
    /*
    cin>>nombre1;
    cout<<nombre1;
    */

    //Sin embargo al encontrar un espacio CIN termina el ingreso de datos y lo que haya después lo ignora.
    //Otra manera es mediante el gets:
    /*
    gets(nombre1);
    cout<<nombre1;
    */
    //Sin embargo esta opción toma más espacio del reservado. Lo que en un futuro podría generar un grave error.

    //La última opción y tal vez la más válida es la siguiente:

    cin.getline(nombre1,20,'\n');
    //Los parámetros son: nombre de la variable donde se va a guardar, la cantidad de carácteres permitidos, la condición en la cual parará.
    cout<<nombre1;

}
