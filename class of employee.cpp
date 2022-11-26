# include <iostream>
using namespace std;
/*
class Employee
{
	char name[10];
	int empId;
	int salary;
	char Address[50];
public:
	void Input()
	{
		cout<<"Enter your Name: ";
		cin>>name;
		cout<<"Enter Employee ID: ";
		cin>>empId;
		cout<<"Enter Salary of employee: ";
		cin>>salary;
		cout<<"Enter Address of employee: ";
		cin>>Address;
		
	}
	void show()
	{
		cout<<endl;
		cout<<"-------Employee's Data Information:	"<<"\n";
		cout<<"Name:"<<name<<"\n";
		cout<<"Employee ID:"<<empId<<"\n";
		cout<<"Salary= "<<salary<<"\n";
		cout<<"Address is: "<<Address<<"\n";
		
	}
};

*/

/*
class Date{
private:
	int Day;
	int month;
	int year;
public:
	void get_IN()
	{
		cout<<"\n";
		cout<<"Enter day :";
		cin>>Day;
		cout<<"Enter Month:";
		cin>>month;
		cout<<"Enter year:";
		cin>>year;
	}
	void get_out()
	{
		cout<<"\n";
		cout<<"Today date is:"<<Day<<"-"<<month<<"-"<<year<<endl;
	}
};

*/

class Time
{
	int hours;
	int minutes;
	int seconds;
	
public:
	void get_IN()
	{
		cout<<"\n";
		cout<<"Enter Hours:";
		cin>>hours;
		cout<<"Enter minutes:";
		cin>>minutes;
		cout<<"Enter seconds";
		cin>>seconds;
		
	}
	void get_value()
	{
		cout<<"The Time is: "<<hours<<":"<<minutes<<":"<<seconds;
	}
	
};

int main()
{
	/*
	Employee obj1;
	obj1.Input();
	obj1.show();
	
	Date d1;
	d1.get_IN();
	d1.get_out();
	return 0;
	*/
	Time t1;
	t1.get_IN();
	t1.get_value();
	return 0;
	
}
