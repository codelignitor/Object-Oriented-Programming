#include <iostream> 
using namespace std; 
 
void pypart2(int n) 
{ 
    int k = 2*n - 2; 
   
    for (int i=0; i<n; i++) 
    { 
  
        for (int j=0; j<k; j++) 
            cout <<" "; 
  
        k = k - 2; 
   
        for (int j=0; j<=i; j++ ) 
        {
            cout << "* "; 
        }  
        cout << endl; 
    } 
} 
  
int main() 
{ 
    int n = 5; 
    pypart2(n); 
    return 0; 
}

