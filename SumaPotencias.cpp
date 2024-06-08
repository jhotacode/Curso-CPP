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
