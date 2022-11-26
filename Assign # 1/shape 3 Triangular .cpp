#include<iostream>
using namespace std;

void shape01()
{
	int rows=5, i, j, space;
	cout<<"\" Triangle Shape \":\n";
    for(i = 1; i <= rows; i++)
    {
      for(space = i; space < rows; space++)
      {
         cout << " ";
      }
      for(j = 1; j <= (2 * i - 1); j++)
      {
         cout << "*";
      }

      cout << endl;
	}
}

int main()
{
	shape01();
}




