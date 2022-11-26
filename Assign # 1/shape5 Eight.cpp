

#include<iostream>
using namespace std;

void stars05(int n)
{ 
    int space = n-2 ;  

    for (int i = n; i > 0; i--) 
    {  
        for (int j = 0; j < space; j++) 
            printf(" "); 
   
        for (int j = 0;j < i;j++) 
            printf("* "); 
  
        cout<<endl; 
        space++; 
    } 

  
    
    for (int i = 1; i < n; i++) 
    { 
     
        for (int j = 0;j < space-2; j++) 
            printf(" "); 
  
       
        for (int j = 0;j <= i; j++) 
            printf("* "); 
  
        cout<<endl; 
        space--; 
    } 
  
}

int main()
{
	int n = 5;
	stars05(n);
	return 0;
}
