//Write a program to test static_cast and dynamic_cast in C++.
#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class" << endl;
    }
};

int main() {
    Base* basePtr = new Derived();

    // Using dynamic_cast
    Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);
    if (derivedPtr) {
        cout << "dynamic_cast successful!" << endl;
        derivedPtr->show();
    } else {
        cout << "dynamic_cast failed!" << endl;
    }

    // Using static_cast
    Derived* derivedPtrStatic = static_cast<Derived*>(basePtr);
    cout << "static_cast successful!" << endl;
    derivedPtrStatic->show();

    delete basePtr;
    return 0;
}
