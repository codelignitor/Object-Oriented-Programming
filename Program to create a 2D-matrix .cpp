# include <iostream>
using namespace std;

int main()
{
	cout<<" ** 2D matrix**:\n";
	int x,a,M;
	int y;
	cout<<"Enter length of row:";
	cin>>x;
	cout<<"Enter length of column:";
	cin>>y;
	int array[x][y];
	for(int i=0;i<x;i++)
	{
		for (int j=0;j<y;j++)
		{
			array[i][j]=a+1;
			a++;
			M=array[i][j];
			cout<<M<<"  ";
		}
		cout<<endl;
	}
	return 0;
}
