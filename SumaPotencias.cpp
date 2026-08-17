#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main()
{
	int n,suma = 0;
	cout<<"Hasta que potencia sumar?\n>>";
	cin>>n;
	while(0 != n)
	{
		suma += pow(2,n);
		n--;
	}
	cout<<suma<<endl;
	
	system("pause");
	return 0;
}

//Esto es un comentario en C++ que no afecta la ejecución del programa.
/*
Esto es un comentario de varias líneas en C++ que tampoco afecta la ejecución del programa.|
*/