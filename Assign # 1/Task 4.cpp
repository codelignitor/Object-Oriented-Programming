#include <iostream>
using namespace std;

int main()
{
	int sum=0;
	for(int i=0;i<=10;i++)
	{
		if(i%3==0 && i%9==0)
		{
			(sum=sum+1);
			cout<<sum;
		}
	}
	
}
