//Write a program which uses catch(...) handler

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 0;

    try {
        cout << "Result: " << a / b << endl;
    } catch (...) {
        cout << "An error occurred: Division by zero!" << endl;
    }

    return 0;
}

