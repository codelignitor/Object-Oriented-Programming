#include <iostream>
using namespace std;

class MyFather
{
protected:
	string name, eye_color, hair_color;
public:
	void set_value(string n,string e,string h)
	{
		name=n;
		eye_color=e;
		hair_color=h;
	}
	void get_value()
	{
		cout<<"Enter the name of father: ";
		cin>>name;
		cout<<"Enter the color of eye: ";
		cin>>eye_color;
		cout<<"Enter the color of hair: ";
		cin>>hair_color;
		
	}
	void print_value()
	{
		cout<<"Father name is: "<<name<<endl;
		cout<<"Eye color of father is: "<<eye_color<<endl;
		cout<<"Hair color of father is: "<<hair_color<<endl;
	}
		
	
};
class MyMother
{
	protected:
		string name, eye_color, hair_color;
	public:
	void set_value(string n,string e,string h)
	{
		name=n;
		eye_color=e;
		hair_color=h;
	}
	void get_value()
	{
		cout<<"Enter the name of Mother: ";
		cin>>name;
		cout<<"Eye color of Mother: ";
		cin>>eye_color;
		cout<<"Hair color of mother: ";
		cin>>hair_color;
		
	}
	void print_value()
	{
		cout<<"Mother name is: "<<name<<endl;
		cout<<"Eye color Of Mother is: "<<eye_color<<endl;
		cout<<"Hair color Of is: "<<hair_color<<endl;
	}
};

class Myself: public MyFather
{
	protected:
		string education, name, eye_color, hair_color;;
		int age;
	public:
		void set_value(int a,string edu )
		{
			MyFather::set_value(string edu,int a,string n,string e,string);
			age=a;
			eduction=edu;
		}
		void get_value()
		{
			MyFather::get_value();
			cout<<"Education: ";
			cin>>education;
			cout<<"Enter the Age: ";
			cin>>age;
		}
		void print_value()
		{
			cout<<"My Education is: "<<education<<endl;
			cout<<"My Age is: "<<age<<endl;
		}
		
};

class Mysister: public MyFather: public MyMother
{
	public:
		void set_value()
		{
			Myself::set_value();
		}
		void get_value()
		{
			Myself::get_value();
		}
		void print_value()
		{
			Myself::print_value();
		}
};


int main()
{
	MyFather f1;
	f1.get_value();
	cout<<"Data of My Father: "<<endl;
	f1.print_value();
		
	MyMother m1;
	m1.get_value();
	cout<<"Data of My Mother: "<<endl;
	m1.print_value();
	
	Myself m2;
	m2.get_value();
	cout<<"Data of Me: "<<endl;
	m2.print_value();

	Mysister m3;	
	m3.get_value();
	cout<<"Data of My sister: "<<endl;
	m3.print_value();
	
	return 0;
	
}

