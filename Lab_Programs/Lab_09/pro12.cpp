//Write a Simple C++ program to implement Hybrid inheritance.
#include <iostream>
using namespace std;

class A {
public:
    void displayA() {
        cout << "Class A" << endl;
    }
};

class B : public A {
public:
    void displayB() {
        cout << "Class B" << endl;
    }
};

class C : public A {
public:
    void displayC() {
        cout << "Class C" << endl;
    }
};

class D : public B, public C {
public:
    void displayD() {
        cout << "Class D" << endl;
    }
};

int main() {
    D obj;
    obj.displayA(); // Accessing A's method through B
    obj.displayB(); // Accessing B's method
    obj.displayC(); // Accessing C's method
    obj.displayD(); // Accessing D's method
    return 0;
}
