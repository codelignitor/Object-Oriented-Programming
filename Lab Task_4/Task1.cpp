# include <iostream>
using namespace std;

class vehicle
{
	protected:
		int no_of_tires,size,no_of_seats;
	public:
		void get_data(int){
			cout<<"Enter No.of tires, size of a vehicle & no of seats respectively: "<<endl;
			cin>>no_of_tires;
			cin>>size;
			cin>>no_of_seats;
		}
		void print_out(int){
			cout<<"No. of tires of vehicle: "<<no_of_tires;
			cout<<"The Size of vehicle: "<<size;
			cout<<"No. of seats of a vehicle: "<<no_of_seats;
		}
		
};

class car: public vehicle
{
	protected:
		int no_of_tires,size,no_of_seats;
		string color;
	public:
		void print_out(){
			cout<<"No. of tires of car: "<<no_of_tires;
			cout<<"The Size of car: "<<size;
			cout<<"No. of seats of a car: "<<no_of_seats;
			cout<<"color of a car: "<<color;	
		}
		void get_data(int){
			cout<<"Enter No.of tires, size of a vehicle, no of seats  & color respectively: "<<endl;
			cin>>no_of_tires;
			cin>>size;
			cin>>no_of_seats;
			cin>>color;
		}
};
class vitz: public car
{
	public :
		int model,plate_number;
		void get_data()
		{	
			cout<<"Enter No.of tires, size of a vehicle, no of seats, color, model, & plate number respectively: "<<endl;
			cin>>no_of_tires;
			cin>>size;
			cin>>no_of_seats;
			cin>>color;
			cin>>model;
			cin>>plate_number;
		}
		void print_out()
		{
			cout<<"No. of tires of car: "<<no_of_tires<<endl;
			cout<<"The Size of car: "<<size<<endl;
			cout<<"No. of seats of a car:"<<no_of_seats<<endl;
			cout<<"color of a car: "<<color<<endl;
			cout<<"Model of a car is: "<<model<<endl;
			cout<<"Plate number of the car is: "<<plate_number<<endl;
				
		}
		
};



int main()
{
	vitz v1;
	v1.get_data();
	v1.print_out();

	return 0;

}
