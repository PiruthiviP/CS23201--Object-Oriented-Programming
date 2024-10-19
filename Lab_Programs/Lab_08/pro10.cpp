/*Create a class Distance with feet (integer) and inch (float) as data members. Write a
program to prompt the user to enter meters (float) and convert to Distance object. Have
necessary methods to get and display the Distance values. [float to class – basic to class
conversion]*/
#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inches;

public:
    Distance(float meters) {
        float totalInches = meters * 39.37; // 1 meter = 39.37 inches
        feet = static_cast<int>(totalInches / 12); // 12 inches in a foot
        inches = totalInches - (feet * 12); // Remaining inches
    }

    void display() {
        cout << "Distance: " << feet << " feet " << inches << " inches" << endl;
    }
};

int main() {
    float meters;
    cout << "Enter distance in meters: ";
    cin >> meters;

    Distance d(meters);
    d.display();

    return 0;
}
