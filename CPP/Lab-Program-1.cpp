#include<iostream> //header file which declares a set of functions for standard Input/Output  
#include<string> //header file which declares a set of functions for operations on strings

using namespace std;

//driver function
int main()
{
    //declaration of variables
    
    string firstname;
    char lastname, gender, result;
    int totalmarks;

    //taking input from the user
    
    cout<<"Please enter your first name : ";
    cin>>firstname;

    cout<<"Please enter your last name (only first character) : ";
    cin>>lastname;

    cout<<"Please enter your gender (M/F) : ";
    cin>>gender;
    
    cout<<"Please enter the total marks obtained in all six subjects (out of 600) : ";
    cin>>totalmarks;

    cout<<"Please enter your result (P/F) : ";
    cin>>result;

    //printing the results
    
    cout<<endl<<"The details entered by the user are as follows :\n";
    cout<<"First Name : "<<firstname<<endl<<"Last Name : "<<lastname<<endl<<"Gender : "<<gender<<endl<<"Total Marks obtained in all six subjects (out of 600) : "<<totalmarks<<endl<<"Result : "<<result;

    return 0;   
}
