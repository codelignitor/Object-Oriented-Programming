#include<iostream>
using namespace std;

void shape2(int rows)
{

    for(int col = 1; col <= rows; ++col)
    {
        for(int j = 1; j <= col; ++j)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    return;
}

int main()
{
	int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
	shape2(rows);
}
