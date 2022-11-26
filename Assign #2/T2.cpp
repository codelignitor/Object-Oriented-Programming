#include <iostream>
#include <cmath>
using namespace std;

int ass(double power)
{
	double a,b,c;
	double mul;
	cout<<"Enter number1: ";
	cin>>a;
	cout<<"Enter number2: ";
	cin>>b;
	cout<<"Enter number3: ";
	cin>>c;
	
	mul=a*b;
	//power = pow( mul,c);
	power = pow(mul,c);
	cout << mul <<" ^ "<< c << " = " << power;
	return power;
}

int main()
{
	int a;
	ass(a);
	return 0;
}
