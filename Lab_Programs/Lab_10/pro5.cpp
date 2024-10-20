//Write a C++ program to demonstrate virtual destructors.
#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base Constructor" << endl;
    }
    
    virtual ~Base() { // Virtual destructor
        cout << "Base Destructor" << endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived Constructor" << endl;
    }
    
    ~Derived() {
        cout << "Derived Destructor" << endl;
    }
};

int main() {
    Base* obj = new Derived(); // Create a Derived object
    delete obj; // Properly calls both destructors
    return 0;
}
