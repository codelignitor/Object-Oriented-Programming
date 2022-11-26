#include <iostream>
using namespace std;

int main ()
{
	int  count=0;
	int a[5]= {2,4,5,6,55};
	int a2[7]={3,6,9,0,23,55,2};
	
	for(int i=0;i<5;i++)
	{
		for (int j=0;j<7;j++)
		{
			if (a[i]==a2[j])
			{
				count=a[i];
				cout<<"similar values in the arrays are:"<<count<<" ";
			}
			
		}
	}
	return 0;
	
}
