# include <iostream>
using namespace std;

int main()
{
	int row,col;
	cout<<"Enter length of row:";
	cin>>row;
	cout<<"Enter length of column:";
	cin>>col;
	int **arr=new int *[row];
	
	for (int i=1;i<=row;i++)
	{
		arr[i]= new int[row];
		
	}
	
	//assigning values to 2d dynamic array
	
	for(int i=1;i<=row;i++)
	{
		for (int j=1;j<=col;j++){
			arr[i][j]=i*j;
			
		}
	}
	for(int i=1;i<=row;i++)
	{
		for (int j=1;j<=col;j++){
			
		cout<<arr[i][j]<<"  ";
			
		}
		
		cout<<endl;
	}
	
}

