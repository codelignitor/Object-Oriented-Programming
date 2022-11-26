#include <iostream>
using namespace std;

int main()
{
	int sum=0; 
	float avg;
	for(int i=0;i<=100;i++)
	{
	 	sum=sum+i;
	 	avg=sum/100.0;
	 	
	 	
	}
	cout<<"Sum of first 100 positive integers: "<< sum<<endl;
	cout<<"Average of first 100 positive integers: "<< avg;
	
}
