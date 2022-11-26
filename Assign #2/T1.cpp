
# include <iostream>
using namespace std;
int * function(int *ptr0)
{
	ptr0 =new int;
	return ptr0;
}
void new_func(int *ptr1 )
{
	*ptr1= 20;
}
void print(int *ptr2)
{	
	cout<<"Value Pointed by a pointer: "<<*ptr2;	
}

void destroy(int *ptr)
{
	ptr = NULL;
}
int main()
{
	int *ptr=NULL;
	ptr=function(ptr);
	new_func(ptr);
	print( ptr);
	destroy(ptr);
}

