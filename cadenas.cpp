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

    //hay varias maneras de ingresar las cadenas de texto, la primera es la m�s conocida: CIN
    /*
    cin>>nombre1;
    cout<<nombre1;
    */

    //Sin embargo al encontrar un espacio CIN termina el ingreso de datos y lo que haya despu�s lo ignora.
    //Otra manera es mediante el gets:
    /*
    gets(nombre1);
    cout<<nombre1;
    */
    //Sin embargo esta opci�n toma m�s espacio del reservado. Lo que en un futuro podr�a generar un grave error.

    //La �ltima opci�n y tal vez la m�s v�lida es la siguiente:

    cin.getline(nombre1,20,'\n');
    //Los par�metros son: nombre de la variable donde se va a guardar, la cantidad de car�cteres permitidos, la condici�n en la cual parar�.
    cout<<nombre1;

}
