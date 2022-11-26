
// Call by Reference

#include <iostream>
using namespace std;

int div(float *a,float *b)
{
	cout<<"divide a and b we get: "<<*a/ *b<<endl;
}

int main()
{
	float a,b;
	cout<<"Enter First number: ";
	cin>>a;
	cout<<"Enter second number:";
	cin>>b;
	
	div(&a,&b);
	cout<<"Function run sucessfully."<<endl;
	return 0;	
	
}
