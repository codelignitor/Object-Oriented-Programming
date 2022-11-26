#include<iostream>
using namespace std;
int main()
{
	char chr;

    cout<<"Enter any character: ";
	cin>>chr;

    if(chr>= 'A' && chr<= 'Z')
    {
    	cout<<"it's an uppercase alphabet.";
    }
    else if(chr>= 'a' && chr<= 'z')
    {
        cout<<"It's a lowercase alphabet.";
    }
    else
    {
        cout<<"You entered a wrong character.";
    }

    return 0;
	
	
}

 
