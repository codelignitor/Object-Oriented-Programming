#include <iostream>
using namespace std;

int main()
{
	int size;
	cout<<"Enter size : ";
	cin>>size;
	
	int *p1=new int[size];
	int *p2=new int[size];
	int *p3=new int[size];
	
	
	cout<<"first array : "<<endl;
	for(int i=0; i<size; i++)
	{
		*(p1+i)=i*1;
		cout<<*(p1+i)<<endl;
	}
	
	
	cout<<"second array : "<<endl;
		for(int i=0; i<size; i++)
	{
		*(p2+i)=i*1;
		cout<<*(p2+i)<<endl;
	}
	
	cout<<"answer : "<<endl;
		for(int i=0; i<size; i++)
	{
		*(p3+i)=*(p1+i)+*(p2+i);
		cout<<*(p3+i)<<endl;
	}
	
}
