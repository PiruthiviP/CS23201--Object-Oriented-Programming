/*Create a class Distance with feet (integer) and inch (float) as data members. Have
necessary methods to get and display the Distance values. Create an object of distance
and convert to meters (float). [class to float – class to basic conversion]*/
#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inches;

public:
    Distance(int f, float i) : feet(f), inches(i) {}

    void display() {
        cout << "Distance: " << feet << " feet " << inches << " inches" << endl;
    }

    // Convert Distance to meters
    operator float() {
        return (feet * 0.3048) + (inches * 0.0254); // 1 foot = 0.3048 meters, 1 inch = 0.0254 meters
    }
};

int main() {
    int feet;
    float inches;

    cout << "Enter distance in feet: ";
    cin >> feet;
    cout << "Enter distance in inches: ";
    cin >> inches;

    Distance d(feet, inches);
    d.display();

    float meters = d; // Convert Distance object to float (meters)
    cout << "Distance in meters: " << meters << " m" << endl;

    return 0;
}
