#include<iostream>

using namespace std;

int main()
{
	float nota1,nota2,nota3;
	cout<<"Ingresa la primera nota: ";
	cin>>nota1;
	
	cout<<"Ingresa la segunda nota: ";
	cin>>nota2;
	
	cout<<"Ingresa la tercera nota: ";
	cin>>nota3;
	
	nota1 *= 0.3;
	nota2 *= 0.6;
	nota3 *= 0.1;
	
	
	cout<<"La nota final es: "<<nota1+nota2+nota3;
	return 0;
}
