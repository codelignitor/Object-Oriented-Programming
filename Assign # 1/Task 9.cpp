#include<iostream>
using namespace std;

int palindrome_9()
{
	int size;
    cout<<"enter size : ";
    cin>>size;
    char c[size];
    
    cout<<"enter word : ";
    for(int i=0; i<size; i++  )
	{
		
		cin>>c[i];
	}
	bool f;
	for(int i=0; i<size; i++ )
	{
		
	    if(c[i]==c[size-i-1])
		{
			f=false;
			
		}else
		{
			f=true;
			break;
		}
	}
	
	
	if(f==true)
	{
		cout<<"this word is not palindrome";
		
	}else
	    cout<<"the word is palindrome";
	    cout<<endl;
}
int main()
{
	palindrome_9();
}
