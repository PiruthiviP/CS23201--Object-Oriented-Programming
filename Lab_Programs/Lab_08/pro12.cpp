/*Create a class Centimeter with one integer member that represents centimeter. Create
another class Meter with one integer member that represents meter. Write a program to
convert a meter to centimeter. [class to class]*/
#include <iostream>
using namespace std;

class Centimeter {
private:
    int centimeters;

public:
    Centimeter(int cm) : centimeters(cm) {}

    void display() {
        cout << "Distance: " << centimeters << " cm" << endl;
    }
};

class Meter {
private:
    int meters;

public:
    Meter(int m) : meters(m) {}

    // Convert Meter to Centimeter
    operator Centimeter() {
        return Centimeter(meters * 100); // 1 meter = 100 centimeters
    }
};

int main() {
    int meterValue;

    cout << "Enter distance in meters: ";
    cin >> meterValue;

    Meter m(meterValue);
    Centimeter cm = m; // Convert Meter to Centimeter

    cm.display(); // Display the result in centimeters

    return 0;
}
