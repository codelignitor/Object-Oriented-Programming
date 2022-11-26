#include <iostream>
using namespace std;

int main()
{
	int val,count=0;
	cout<<"Enter an integer value:";
	cin>>val;
	while (val>0)
	{
		val =val/ 10;
        count++;	
	}
	cout<<"The length of entered value:" << count;
	
}
