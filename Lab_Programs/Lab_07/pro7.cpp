//Write a C++ Program to illustrate the use of friend classes in C++ Programming.
#include <iostream>
using namespace std;

class ClassB; 

class ClassA {
private:
    int aValue;

public:
    ClassA(int val) : aValue(val) {}
    friend class ClassB; 
};

class ClassB {
public:
    void display(ClassA a) {
        cout << "Value from ClassA: " << a.aValue << endl;
    }
};

int main() {
    ClassA a(10);
    ClassB b;
    b.display(a);
    return 0;
}
