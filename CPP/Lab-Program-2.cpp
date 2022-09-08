#include <iostream> //header file which declares a set of functions for standard Input/Output 

using namespace std;

class Employee
{
	long int Empnumber;
	char Empname[20];

	public:

		void getdata();
		void display();
};

void Employee :: getdata()
{
	cout<<"\nEnter employee number: ";
	cin>>Empnumber;
	cout<<"\nEnter employee name: ";
	cin>>Empname;
}

void Employee :: display()
{
	cout<<"\nEmployee Name : "<<Empname;
	cout<<"\nEmployee number : "<<Empnumber;
}

//driver function
int main()
{
    Employee Employee[6];
    
    for(int i = 1; i<= 6; i++)
    {
        cout<<"\nPlease enter the details for employee "<<i<<" : "<<endl;
        Employee[i].getdata();
    }
    
     for(int i = 1; i<= 6; i++)
    {
        cout<<endl<<"The details for employee "<<i<<" are as follows : "<<endl;
        Employee[i].display();
    }
    
    return 0;

}
