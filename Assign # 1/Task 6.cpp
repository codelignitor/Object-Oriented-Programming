#include <iostream>
using namespace std;

int main () 
{
    int num, x; 
	int Sum_odd = 0;
	int Sum_even = 0;
  
    cout << "Enter the number of values: ";
    cin >> num;
    cout << "Enter your values:" << endl;
  
    for (int i = 0; i < num; i++) 
	{
        cin >> x;
        if (x % 2 == 0)
            Sum_even =Sum_even + x;
        else
            Sum_odd =Sum_odd + x;
    }
    cout << "Sum of Even Numbers: " << Sum_even << endl;
    cout << "Sum of Odd Numbers: " << Sum_odd << endl;
    return 0;
}
