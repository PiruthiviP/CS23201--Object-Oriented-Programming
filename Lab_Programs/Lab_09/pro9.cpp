/*Declare a class of Vehicle. Derived classes are two-wheeler, three-wheeler and four- wheeler. Display the
properties of each type of vehicle using member functions of classes.*/
#include <iostream>
using namespace std;

class Vehicle {
public:
    void type() {
        cout << "This is a vehicle." << endl;
    }
};

class TwoWheeler : public Vehicle {
public:
    void type() {
        cout << "This is a two-wheeler." << endl;
    }
};

class ThreeWheeler : public Vehicle {
public:
    void type() {
        cout << "This is a three-wheeler." << endl;
    }
};

class FourWheeler : public Vehicle {
public:
    void type() {
        cout << "This is a four-wheeler." << endl;
    }
};

int main() {
    TwoWheeler bike;
    ThreeWheeler autoRickshaw;
    FourWheeler car;

    bike.type();
    autoRickshaw.type();
    car.type();

    return 0;
}
