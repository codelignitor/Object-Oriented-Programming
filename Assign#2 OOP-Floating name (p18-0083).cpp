#include <iostream>
#include <windows.h>
using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);     //for go to XY funtion
COORD CursorPosition;			

class floating
{
	string name;
	int x,y;
	int a;
	public:
		void Go_to_XY(int x, int y)
		{ 
			CursorPosition.X = x; 
			CursorPosition.Y = y; 
			SetConsoleCursorPosition(console,CursorPosition);
		}
 
		void Horizontal(string name)
		{
			int j=0;
			int x=0;
			while(x<4){
	
	 		for(int i=0; i<114; i++)
			{
				Go_to_XY(i,j);
		    	cout<<name;
		    
		    	Sleep(130);
		    	Go_to_XY(i,j);
		    	cout<<"  ";
	    	}
	 		for(int i=114; i>=0; i--)
			{		
			
				Go_to_XY(i,j);
		    	cout<<name;
		    	cout<<" ";
		    	Sleep(130);
		    	Go_to_XY(i,j);
		    	}
			}
		
		}

		void vertical(string name)
		{
			int i=0;
			int j=0;
			int x=0;
			while(x<1)
			{	
				for (j=0;j<29;j++) 
   				{
      				Go_to_XY(i,j);
      				cout<<name;
      				Sleep(200);
      				Go_to_XY(i,j);
      				cout<<"       ";
      
   				}
																																																																																																								
   				for (j=29;j>=0;j--) 
   				{
      				Go_to_XY(i,j);
      				cout <<name;
      				Sleep(200);
      				Go_to_XY(i,j);
      				cout<<"       ";
				}
   			}
		}

		void diamond(string name)
		{
	   		int e=0;
   			while(e<20)
   			{
   
   				int x=1;
   				int y=14;
   				int a,b;
   
   				for(int i=0; i<16; i++)                                   
   				{
					Go_to_XY(x+(i*4),y+i);
   					cout<<name;
   					Sleep(250);
   					Go_to_XY(x+(i*4),y+i);
   					cout<<"       ";
        			
   				}
   
   				x=61;
   				y=28; 
   				for(int i=0; i<19; i++)                                   
   				{
					Go_to_XY(x+(i*3),y-i);
   					a=x+(i*3);
   					b=y-i;
   					cout<<name;
   					Sleep(250);
   					Go_to_XY(x+(i*3),y-i);
   					cout<<"       ";
   					
   					
   				}
   
   				x=115;
   				y=10;
   				for(int i=0; i<11; i++)                                   
   				{
					Go_to_XY(x-(i*6),y-i);
   	
   					cout<<name;
   					Sleep(250);
   					Go_to_XY(x-(i*6),y-i);
   					cout<<"        ";	
   				}
   			
				x=55;
   				y=0;
   				for(int i=0; i<10; i++)                                   
   				{
					Go_to_XY(x-(i*6),y+(i+2));
   	
   					cout<<name;
   					Sleep(250);
   					Go_to_XY(x-(i*6),y+(i+2));
   					cout<<"       ";
   	
   					}	
				}
			}

		void control_function(string name,int a)
		{
			if(a==1)
			{
         		floating::vertical(name);
			}
			else if(a==2)
			{
		 		floating::Horizontal(name);
			}
			else 
	 			floating::diamond(name);
		}

		
};


int main( )
{
	floating f;
	string name;
	int a;
	cout<<"Enter name: ";
	cin>>name;
	cout<<"\n";
	cout<<"Enter 1 for vertical, 2 for horizontal, 3 for diamond: ";
	cin>>a;
	cout<<"\n";
	system("cls");
	f.control_function(name,a);

}
