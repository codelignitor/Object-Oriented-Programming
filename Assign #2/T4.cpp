#include<iostream>
using namespace std;
void p1(int **b,int n)
{
	for(int i =0;i<=n;i++)
	{
		for(int j=0;j<5;j++)
		{
			cout<<"Enter values :";
			cin>>b[i][j];
		}
	}
	int i =1;
}

int main(void){
	int **a;
	a= new int*[3];
	for(int i =0;i<3;i++)
	{
		a[i]=new int[5];
	}
	p1(a,0);
	for(int i =0; i <3;i++)
	{
		for(int j=0;j<5;j++)
		{
			cout<<a[i][j]<<" , ";
		}
		cout<<a[i][j]<<"  ";
	}
}

