# include<iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream file1;
	file1.open("table.txt",ios::trunc);
	
	int x;
	cout<<"Enter number to find table:";
	cin>>x;
	
	for (int i=1;i<=10;i++)
	{
		file1<<x<<" x "<<i<<"="<<x*i<<endl;
	}
	file1.close();
	
	ifstream file2;
	file2.open("table.txt",ios::in);
	
	string data;
	while(file2)
	{
		getline(file2,data);
		cout<<data<<endl;
	}
	file2.close();	

}
