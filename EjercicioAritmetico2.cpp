#include<iostream>

using namespace std;

int main()
{
	
	float numero1,numero2;
	cout<<"Ingrese el primer numero: ";
	cin>>numero1;
	cout<<"Ingrese el segundo numero: ";
	cin>>numero2;
	
	cout.precision(10);
	cout<<"El resultado es: "<<(numero1/numero2)+1<<endl;
	
	return 0;
}
