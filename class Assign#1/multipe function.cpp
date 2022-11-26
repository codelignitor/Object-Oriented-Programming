#include <iostream>
using namespace std;

int multiply(int a,int b);

int main()
{
	int num1,num2,mul;
	
	cout<<"Enter first number: ";
	cin>>num1;
	cout<<"Enter second number: ";
	cin>>num2;
	
	mul=multiply(num1,num2);

	cout<<"multiplied num1 and num2 we get: "<<mult<<endl;
	
	return 0;
}

int multiply(int a,int b)
{
    int res;
	res=a*b;
	return res;
}
