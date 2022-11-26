#include <iostream>
using namespace std;

int Modulus(int a,int b);

int main()
{
	int num1,num2,mod;
	
	cout<<"Enter first number: ";
	cin>>num1;
	cout<<"Enter second number: ";
	cin>>num2;
	
	mod=Modulus(num1,num2);

	cout<<"Remainder is: "<<mod<<endl;
	
	return 0;
}

int Modulus(int a,int b)
{
    int res;
	res=a%b;
	return res;
}
