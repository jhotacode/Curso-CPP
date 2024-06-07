#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	float x,y;
	cout<<"Ingresa el valor de X e Y: "<<endl;
	cin>>x;
	cin>>y;
	
	cout<<"El resultado es: "<<sqrt(x)/(pow(y,2)-1);
	return 0;
}
