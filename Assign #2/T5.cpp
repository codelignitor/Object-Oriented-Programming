#include <iostream>
using namespace std;

struct person
{
	string Name;
	int Age;
};

void Dynarray(person *arr,int p)
{
	for(int i=0;i<p;i++)
	{
		cout<<"Person: "<<i<<endl;
		cout<<"Name = ";
		cin>>arr[i].Name;
		cout<<"Age = ";
		cin>>arr[i].Age;
		cout<<"Name: " <<arr[i].Name<<"\t";
		cout<<"Age: " << arr[i].Age <<endl;
	}
}
int main()
{
	int p,z;
	cout<<"Enter number of objects :";
	cin>>p;
	person *a;
	a = new person[p];
	Dynarray(a,p);
}
