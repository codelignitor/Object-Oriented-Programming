#include <iostream>
using namespace std;
int main()
{
    int a,b,mul;
     
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    
    mul=0;

    for(int i=1;i<=b;i++)
	{
        mul += a;
    }

    cout<<"Multiplication of "<<a<<" and "<<b<<" is: "<<mul;

    return 0;
}
