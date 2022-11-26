#include<iostream>
using namespace std;
class Fraction
{private:
		double n;
		double d;
public:
	
		void operator+(Fraction t)
		{
			int x,y;
			Fraction temp;
			if(d==t.d)
			{
				x=n+t.n;
				y=d;
			}
			if(d!=t.d)
			{
				x=n*t.d+d*t.n;
				y=d*t.d;
				
			}
			temp.n=x;
			temp.d=y;
			cout<<temp;
		}
		void operator-(Fraction t)
		{
			int x,y;
			Fraction temp;
			if(d==t.d)
			{
				x=n-t.n;
				y=d;
			}
			if(d!=t.d)
			{
				x=n*t.d-d*t.n;
				y=d*t.d;
				
			}
			temp.n=x;
			temp.d=y;
			cout<<temp;
		}
		
		void operator  / (Fraction t)
		{
			int x,y;
			Fraction temp;
			x=n*t.d;
			y=d*t.n;
			temp.n=x;
			temp.d=y;
			cout<<temp;
		}
		void operator * (Fraction t)
		{
			int x,y;
			Fraction temp;
			x=n*t.n;
			y=d*t.d;
			temp.n=x;
			temp.d=y;
			cout<<temp;
		}
		
// relational opertors
		void operator < (Fraction t)
		{
			if(n/d<t.n/t.d)
			{
				cout<<"Lesser ";
			}
			else
			{
			cout<<"Not lesser";}
		}
		void operator > (Fraction t)
		{
			if(n/d>t.n/t.d)
			{
				cout<<"It is Greater . ";
			}
			else
			{
			cout<<"Not greater ";}
		}
		
// Assignment operators

		void operator <=(Fraction t)
		{
			if(n/d <= t.n/t.d)
			{
				cout<<"Less than or equal to ";
			}
			else
			{
				cout<<"No lessor ";
			}
		}
		void operator >=(Fraction t)
		{
			if(n/d>=t.n/t.d)
			{
				cout<<"Greater than or equal to ";
			}
			else
			{
				cout<<"Not Greater or equal ";
			}
		}
		

		void operator==(Fraction t)
		{
			if(n/d == t.n/t.d)
			{
				cout<<"Equal  ";
			}
			else
			{
				cout<<"Not equal ";
			}
		}
		void operator/=(Fraction t)
		{
			Fraction temp;
			n=n*t.d;
			d=d*t.n;
			temp.n=n;
			temp.d=d;
			cout<<temp;
		}
		void operator*=(Fraction t)
		{
			Fraction temp;
			n=n*t.n;
			d=d*t.d;	
			temp.n=n;
			temp.d=d;
			cout<<temp;
		}
		
		void operator+=(Fraction t)
		{
			Fraction temp;
				if(d==t.d)
			{
				n=n+t.n;
				d=d;
			}
			if(d!=t.d)
			{
				n=n*t.d+d*t.n;
				d=d*t.d;
				
			}
			temp.n=n;
			temp.d=d;
			cout<<temp;
		}
		void operator-=(Fraction t)
		{
			Fraction temp;
				if(d==t.d)
			{
				n=n-t.n;
				d=d;
			}
			if(d!=t.d)
			{
				n=n*t.d-d*t.n;
				d=d*t.d;
				
			}
			temp.n=n;
			temp.d=d;
			cout<<temp;
		}
		void operator=(Fraction t)
		{
			Fraction temp;
				n=t.n;
				d=t.d;
			temp.n=n;
			temp.d=d;
			cout<<temp;
		}
		
		void operator++(int)
		{
			Fraction temp;
			n=n+d;
			d=d;
			temp.n=n;
			temp.d=d;
			cout<<temp;
		}
		void operator++()
		{
			Fraction temp;
			n=n+d;
			d=d;
			temp.n=n;
			temp.d=d;
			cout<<temp;
		}
		void operator--(int)
		{
			Fraction temp;
			n=n-d;
			d=d;
			temp.n=n;
			temp.d=d;
			cout<<temp;
		}
		void operator--()
		{
			Fraction temp;
			n=n-d;
			d=d;
			temp.n=n;
			temp.d=d;
			cout<<temp;
		}
		friend istream& operator>>(istream &c,Fraction &t);
		friend ostream& operator<<(ostream &c,Fraction &t);
	
};

istream& operator>>(istream &c,Fraction &t)

{
	cout<<" Give Nominator = ";
	c>>t.n;
	cout<<"Give Denominator = ";
	c>>t.d;
	return c;
}

ostream& operator<<(ostream &c,Fraction &t)

{
	cout<<"Output: "<<endl;
	c<<t.n<<"/"<<t.d;
	return c;
}

int main()
{
	Fraction obj1,obj2,obj3;
	cin>>obj1;
	cin>>obj2;

	k1.operator+(k2);
//	k1.operator >=(k2);
//	k2.operator <=(k1);
//	obj1++;
	obj1.operator<<(obj2);	
	return 0;
}
