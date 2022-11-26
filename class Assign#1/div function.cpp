#include <iostream>
using namespace std;

float divide(int a, float b);

int main()
{
	int num1;
	float num2;
	float div;
	
	cout<<"Enter first number: ";
	cin>>num1;
	cout<<"Enter second number: ";
	cin>>num2;
	
	div=divide(num1,num2);

	cout<<"divide "<<num1<<" by "<<num2<<" we get : "<<div<<endl;
	
	return 0;
}
float divide(int a,float b)
{
    float res;
	res= a / b;
	return res;
}
