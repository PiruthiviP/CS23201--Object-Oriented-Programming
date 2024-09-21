/*Write a C++ Program to illustrate the use of friend keyword to make a member function
of one class as friend function of another class.*/
#include <iostream>
using namespace std;

class B;

class A {
private:
    int aVal;

public:
    A(int val) : aVal(val) {}
    friend void displaySum(A a, B b);
};

class B {
private:
    int bVal;

public:
    B(int val) : bVal(val) {}
    void showSum(A a) {
        cout << "Sum: " << a.aVal + bVal << endl;
    }
};

void displaySum(A a, B b) {
    cout << "Sum: " << a.aVal + b.bVal << endl;
}

int main() {
    A a(10);
    B b(20);
    displaySum(a, b);
    b.showSum(a);
    return 0;
}
