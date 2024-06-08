#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int x,y,aux;
	cout<<"Ingrese la base: ";
	cin>>x;
	aux = x;
	cout<<"Ingrese la potencia: ";
	cin>>y;
	
	for(int i = 0;i < y-1;i++)
	{
		x *= aux;	
	}
	
	cout<<aux<<" elevado a la "<<y<<" es: "<<x<<endl;
	
	system("pause");
	return 0;
}
