#include <iostream>
using namespace std; 

int main()
{
    int number[5];
    for(int i = 0;i < 5;i++)
    {
        cout<<"What's the number "<<(i+1)<<": ";
        cin>>number[i];
    }

    int aux,i = 0,j = 0;

    for(i = 0;i < 5;i++)
    {
        for(j = 0;j < 5;j++)
        {
            if(number[j]>number[j+1])
            {
                aux = number[j];
                number[j] = number[j+1];
                number[j+1] = aux;
            }
        }
    }

    for(i = 0; i < 5;i++)
    {
        cout<<number[i]<<" ";
    }

    return 0;
}