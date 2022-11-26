#include<iostream>
#include<string>
using namespace std;
class memberType

{public: 
	string Name;
	string ID;
	int no_books;
	float amount;

memberType()
{
	Name=" ";
	ID=" ";
	no_books=0;
	amount=0.00;
}

public: 
	void set(string name, string id, int no, float a);
	void modify(string name);
	void modify(int no, float a);
	void show();
};

void memberType::set(string n, string id, int no, float a)
{
	Name=n;
	ID=id;
	no_books=no;
	amount=a;
}
void memberType::modify(string name)
{
	Name=name;
}
void memberType::modify(int no, float a)
{
	no_books=no;
	amount=a;
}
void memberType::show()
{
	cout<<"Person's Name is: "<<Name<<endl;
	cout<<"Person's ID is: "<<ID<<endl;
	cout<<"Number of Books is: "<<no_books<<endl;
	cout<<"Amount Spent is: "<<amount<<endl;
}


#include<iostream>
#include<string>
//#include<memberType.h>
using namespace std;

int main()
{
	string n,id;
	int books;
	float a;
	memberType obj;

	cout<<"WELCOME TO PALOMA'S BOOK STORE"<<endl;
	cout<<"ENTER LIBRARY MEMBER'S NAME: ";
	cin>>n;
	cout<<"ENTER LIBRARY MEMBER'S ID: ";
	cin>>id;
	cout<<"ENTER NUMBER OF BOOKS BOUGHT: ";
	cin>>books;
	cout<<"ENTER DOLLAR AMOUNT PER BOOK: ";
	cin>>a;

	obj.set(n, id, books, a);
	obj.show();

	cout<<"ENTER UPDATED NAME: ";
	cin>>n;
	obj.modify(n);
	obj.show();

	cout<<"ENTER UPDATED BOOKS: ";
	cin>>books;

	obj.modify(books, a);
	obj.show();

}
	
