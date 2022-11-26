#include<iostream>
using namespace std;
void getData(int arr[12][2]);
void averageHigh(int arr[12][2]);
void averageLow(int arr[12][2]);
int indexHighTemp(int arr[12][2]);
int indexLowTemp(int array[12][2]);

int main()
{	
	int arr[12][2]={{15,03},{14,07},{22,12},{24,15},{30,21},{36,19},{40,23},{42,21},{37,28},{31,19},{24,12},{18,10}};
	
	getData(arr);
	averageHigh(arr);
	averageLow(arr);
	indexHighTemp(arr);
	indexLowTemp(arr);
	return 0;

}
void getData(int arr[12][2])
{
	cout<<"Data of the Temp of year : "<<endl;
	for(int i=0;i < 12; i++)
	{
		for(int j=0;j<2;j++){
		cout<<arr[i][j]<<" ";			
	}
		cout<<endl;
	}
	
	
}
void averageHigh(int arr[12][2])
{
	cout<<"Average of High Temperature in year : "<<endl;
	int sum=0;
	double Average=0.0;
	int x=1;
	for(int x=0;x<12;x++){
		sum =  sum + arr[x][0] ;
		Average = sum/12;			
	}
	cout<<Average<<endl;
}
	
void averageLow(int arr[12][2])
{
	cout<<"Average of Low Temperature in year : "<<endl;
	int SUM=0;
	double Avg=0.0;
	int y=1;
	for(int y=0;y<12;y++)
	{
		SUM =  SUM + arr[y][1] ;
		Avg = SUM/12;			
	}
	cout<<Avg<<endl;
}

int indexHighTemp(int arr[12][2])
{
	cout<<"Index of high temperature in a year : "<<endl;
	
	double ind = arr[0][0];
	for (int i=0; i<12; i++)
	{
		for (int j=0;j<2;j++)
		
		{ if (j==1){
		
		if (arr[0][1] < arr[i][j])
		{
			arr[0][1] = arr[i][0];
		}}
		cout<<ind<<endl;
		return ind;
	}
}


int indexLowTemp(int arr[12][2])
{
	cout<<"index of low temperature in a year  : "<<endl;
	
	double lowst = arr[0][1];
	for (int i=0; i<12; i++)
	{
		for (int j=0;j<2;j++)
		
		{ if (j==1){
		
		if (arr[i][j] < arr[0][1])
		{
			arr[0][1] = arr[i][0];
		}
		}
		cout<<lowst<<endl;
		return lowst;
		}
	}	

}
}


