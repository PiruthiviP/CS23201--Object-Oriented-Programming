/*Define a class in C++ with following description:
Private Members
A data member Flight number of type integer
A data member Destination of type string
A data member Distance of type float
A data member Fuel of type float
A member function CALFUEL() to calculate the value of Fuel as per the following
criteriaDistance Fuel
<=1000 500
more than 1000 and <=2000 1100
more than 2000 2200
Public Members
A function FEEDINFO() to allow user to enter values for Flight Number, Destination,
Distance & call function CALFUEL() to calculate the quantity of Fuel
A function SHOWINFO() to allow user to view the content of all the data members*/

#include <iostream>
#include<string>
using namespace std;

class flight{
    int flight_number;
    string destination;
    float distance,fuel;
    void calcfuel()
    {
        if(distance<=1000)
        fuel=500;
        else if(distance>1000&&distance <=2000)
        fuel=1100;
        else if(distance>=2000)
        fuel=2200;
    }
public:
void feedinfo()
{
    cout<<"Enter the flight number:";
    cin>>flight_number;
    cout<<"Enter the destination:";
    cin.ignore();
    getline(cin,destination);
    cout<<"Enter the distance:";
    cin>>distance;
    calcfuel();
}
void showinfo()
{
    cout<<endl;
    cout<<"The flight number is:"<<flight_number<<endl;
    cout<<"The destination is:"<<destination<<endl;
    cout<<"The distance is:"<<distance<<endl;
    cout<<"The fuel required is:"<<fuel<<endl;
}
};
int main() {
    flight f1;
    f1.feedinfo();
    f1.showinfo();
    

    return 0;
}