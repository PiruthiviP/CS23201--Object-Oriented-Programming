/*Create two classes DM and DF which store the value of distances. DM stores distances in
meters and centimeters and DF in feet and inches. Write a C++ program that can read
values for the class objects and add one object of DM with another object of DF. Use
friend function to carry out the addition operation. The function may display the sum on
the units in which the results are required by the user. The display should be in the format
of feet and inches or meters and centimeters depending on the user’s choice.
1cm=0.393701inch
1 inch=2.5400013716cm
12inch=1 feet
100cm= 1 m*/

#include <iostream>
using namespace std;
class DF;
class DM{
    int meters;
    int centimeters;
    public:
    DM(int meters,int centimeters)
    {
        this->meters=meters;
        this->centimeters=centimeters;
    }
    friend void add(DM, DF);
};
class DF{
    int feet;
    int inches;
    public:
    DF(int feet,int inches )
    {
        this->feet=feet;
        this->inches=inches;
        
    }
    friend void add(DM, DF);
};
void add(DM d1, DF d2) {
    float total = d1.meters + d2.feet * 0.3048 + d2.inches * 0.0254;
    int meters = (int)total;
    float centimeters = (total - meters) * 100;
    cout << "Sum: " << meters << " meters and " << centimeters << " centimeters" << endl;
}
int main() {
    int opt,meter,centimeters;
    int feet,inches;
    cout<<"Enter the option to do operation \n1) For meters and centimeters\n2) Forfeet and inches"<<endl;
    cin>>opt;

    if(opt==1)
    {
        cout<<"Enter the meter:";
        cin>>meter;
        cout<<"Enter the centimeters:";
        cin>>centimeters;
        DM d1(meter, centimeters);
        cout<<"Enter the feet :";
        cin>>feet;
        cout<<"Enter the inches:";
        cin>>inches;
        DF d2(feet, inches);
        add(d1, d2);
    }
    else if(opt==2)
    {   cout<<"Enter the feet :";
        cin>>feet;
        cout<<"Enter the inches:";
        cin>>inches;
        DM d1(feet, inches);
         cout<<"Enter the meter:";
        cin>>meter;
        cout<<"Enter the centimeters:";
        cin>>centimeters;
        DF d2(meter, centimeters);
        add(d1, d2);
    }
    
    
    return 0;
};