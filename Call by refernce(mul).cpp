// Call by Reference
#include <iostream>
using namespace std;

int mul(int *x,int *y)
{
	cout<<"multiply x and y we get: "<<*x * *y<<endl;
}

int main()
{
	int x,y;
	cout<<"Enter First number: ";
	cin>>x;
	cout<<"Enter second number:";
	cin>>y;
	mul(&x,&y);
	cout<<"Function run sucessfully."<<endl;
	return 0;	
	
}
