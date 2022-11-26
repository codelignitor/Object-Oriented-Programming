#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class dayType
{private:
	string day[7];
	string d;
	int counter;
public:
	dayType()
	{
		day[0] = ("monday");
		day[1] = ("tuesday");
		day[2] = ("wednesday");
		day[3] = ("thursday");
		day[4] = ("friday");
		day[5] = ("saturday");
		day[6] = ("sunday");
	}
	void print()
	{
		for(int i = 0; i < 7; i++)
		cout<<(i + 1) << ":" << day[i] <<endl;
	}
	void get_Day()
	{
		string a;
		cout<<"Enter the day (What is today): "<<endl;
		getline(cin, a);
		d = a;
	}
	void compare()
	{
		for(int i =0; i < 7; i++)
		{
			if (d == day[i])
			counter = i;
		}
	}
	void Prev_Next()
	{
		if (counter >0)
		cout<<"Previous day: " <<day[counter - 1]<<endl;
		
		else
		{
		   cout<<"Previous day: "<<day[6]<<endl;
		    
		cout<<"Today is: " <<day[counter]<<endl;
		}
		if (counter < 6)
			cout<<"Next day: "<<day[counter + 1]<<endl;
		else
			cout<<"Next day: " <<day[0] <<endl;
	}
		int get_Next()
		{
			int num;
			cout<<"Enter the Number: " <<endl;
			cin>>num;
			return num;
		}
		void cal_day(int numD)
		{
			int l = numD % 7;
			if ((l + counter) >= 6)
			{
				l = (counter + l) % 7;
				cout<<"The day that after " << numD << " days is :" << day[l] << endl;
			}
			else if (l == 0)
		 		cout<<"The day that after "<<numD<<" days is :" << day[counter] << endl;
		}
	};
	
int main(void)
{
	int num;
	dayType day;
	day.print();
	day.get_Day();
	day.compare();
	num = day.get_Next();
	day.Prev_Next();
	day.cal_day(num);
}




	
