#include <iostream>
using namespace std;

int fun(int row=0,int col=0)
{
	int x,a=0;
	/*int y;
	cout<<"Enter length of row:";
	cin>>x;
	cout<<"Enter length of column:";
	cin>>y;
	*/
	int arr[3][3];

	int i,c=0;
	int num=0;
	for (i=0;i<3;i++)
	{
		for (c=0;c<3;c++)
		{
			arr[i][c]=a+1;
			a++;
		}
	}	
	if(i==3 && c==3)
	num=1;

	//recursion

	if (num==1)
	{
		cout<<"a"<<row<<col<<" value at index[m][n]= "<<arr[row][col]<<endl;
	if (col==2)
	{
	row+=1;
	col=-1;
	}
	if(row!=2)
	{
	fun(row,col+1);
	}
	
	}
		
}	


int main()
{
	int row=0;
	int col=0;
	fun(row,col);
}

 

