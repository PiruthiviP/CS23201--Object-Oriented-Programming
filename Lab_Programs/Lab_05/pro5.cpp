/*Create a 'DISTANCE' class with :
- feet and inches as data members
- member function to input distance
- member function to output distance
- member function to add two distance objects
Write a main function to create objects of DISTANCE class. Input two distances and
output the sum.*/
#include <iostream>
using namespace std;

class DISTANCE {
    int feet;
    int inches;

public:
    void input() {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }

    void output() {
        cout << feet << " feet " << inches << " inches" << endl;
    }

    void add(DISTANCE d1, DISTANCE d2) {
        feet = d1.feet + d2.feet;
        inches = d1.inches + d2.inches;
        
        if (inches >= 12) {
            feet += inches / 12;
            inches %= 12;
        }
    }
};

int main() {
    DISTANCE d1, d2, d3;

    cout << "Enter first distance:\n";
    d1.input();

    cout << "Enter second distance:\n";
    d2.input();

    d3.add(d1, d2);

    cout << "Sum of distances: ";
    d3.output();

    return 0;
}

