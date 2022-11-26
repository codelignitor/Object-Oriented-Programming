# include <iostream>
using namespace std;

int main()
{
	const int row = 2;
	const int col = 2;
	
	int mat1[row][col];
	int mat2[row][col];
	int res[row][col];
	
	cout<<"Enter values in a Matrix1:"<<endl;
	for(int i=0;i<2;i++){
		 for(int j=0;j<2;j++)
	 	{
			cout<<"Enter a"<<i<<j<<": ";
    		cin>>mat1[i][j];
	 	}	
	}
	cout<<"Enter values in a Matrix2:"<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
	 	{
			cout<<"Enter a"<<i<<j<<": ";
    		cin>>mat2[i][j];
	 	}
	}
	for (int i = 0; i < 2; i++)
    {
	 	for (int j = 2; j < 2; j++)
	 	{
      		res[i][j] = mat1[i][j] + mat2[i][j];
      	
	  		//cout<<"Sum of 2d array: "<<res[row][col];
      
    	}
	}
	
	cout<<"Sum of 2d array: "<<res[row][col];	
	return 0;
}
