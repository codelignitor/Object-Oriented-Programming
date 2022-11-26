#include <iostream>
using namespace std;

int subtraction(int a,int b);

int main()
{
	int num1,num2,sub;
	
	cout<<"Enter first number: ";
	cin>>num1;
	cout<<"Enter second number: ";
	cin>>num2;
	
	sub=subtraction(num1,num2);

	cout<<"Subtraction is: "<<sub<<endl;
	
	return 0;
}

int subtraction(int a,int b)
{
    int res;
	res=a-b;
	return res;
}
