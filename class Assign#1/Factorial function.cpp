#include<iostream>
using namespace std;

int factorial(int x);

int main()
{
    int n,fact;
    cout << "Enter a positive integer: ";
    cin >> n;
    fact=factorial(n);
    cout << n << "! = " <<fact<<endl;
    return 0;
}
int factorial(int x)
{
	int i=1,fac=1; 
	while(i<=x){
	
	fac=fac*i;
	i++;
	}
    return fac;
}
