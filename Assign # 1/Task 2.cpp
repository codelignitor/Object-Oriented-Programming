#include <iostream>
using namespace std;

int main()
{
	int num;
	int sum=0;
	for(int i=0;i<10;i++)
	{
		cout<<"Enter Number : ";
		cin>>num;
		if (num<0)
		{
			break;
		}
		sum=sum+num;
	}
	cout<<"sum of positve int:"<<sum;
	
	
}




