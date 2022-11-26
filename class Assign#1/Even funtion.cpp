#include<iostream>
using namespace std;

int Even_Odd(int x);

int main()
{
	int num,evdd;
	cout<<"Enter number: ";
	cin>>num;
	evdd=Even_Odd(num);
	return 0;
	
}

int Even_Odd(int x)
{
	if (x%2==0)
	{
		cout<<"number is even";
	}
	else
		cout<<"number is odd";

}
