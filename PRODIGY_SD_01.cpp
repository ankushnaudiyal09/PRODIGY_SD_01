#include<iostream>
using namespace std;

void main_menu()
{
    cout<<endl<<"\t\t----------------------- WELCOME TO TEMPERATURE CONVERTER ----------------------------"<<endl<<endl;

    cout<<"\tNOTE -> (a) THIS PROGRAM WORKS ON CELSIUS , FAHRENHEIT AND KELVIN . "<<endl;
    cout<<"\t\t(b) ENTER ANY OF THESE UNITS . "<<endl<<endl;

    cout<<"ENTER NUMBER OF DEGREE  : ";
    double degree;
    cin>>degree;
    
    cout<<endl<<"ENTER UNIT OF DEGREE : ";
    string unit;
    cin>>unit;

    double unit1 , unit2 ;

    if(unit == "CELSIUS" || unit == "celsius")
    {
       unit1 = ( degree * 9/5 ) + 32;

       unit2 = degree + 273.15;

       cout << endl
            << "fahernheit is : " << unit1 << endl<<endl;
       cout << "kelvin is : " << unit2 << endl<<endl;
    }
    else if(unit == "FAHRENHEIT" || unit == "fahrenheit")
    {
        unit1 = (degree - 32) * 5/9;
        unit2 = (degree - 32) * 5 / 9 + 273.15;
        cout<<endl<< "celsius is : " << unit1 << endl<<endl;
        cout<<"kelvin is : "<<unit2<<endl<<endl;
    }
    else if( unit == "KELVIN" || unit == "kelvin" ) 
    {
        unit1 = degree - 273.15;
        unit2 = (degree - 273.15) * 1.8 + 32;
        cout <<endl<< "celsius is : " << unit1 << endl<<endl;
        cout<<"fahrenheit is : "<<unit2<<endl<<endl;
    }
    else
    {
        cout<<endl<<endl<<"\t-> INVALID CHOICE :( "<<endl<<endl;  
    }   

}


int main(){
while(1)
{

main_menu();

string choice;
cout<<endl<<"\tpress exit for exiting ... , Otherwise type any key : ";
cin>>choice;

if(choice == "exit" || choice == "EXIT")
{
    cout<<endl<<"\t THANKS FOR USING ! EXITING ... "<<endl<<endl;
    break;
}

}
return 0;
}
