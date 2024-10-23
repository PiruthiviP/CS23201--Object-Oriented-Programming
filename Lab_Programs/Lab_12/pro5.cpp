//Write a program to demonstrate user defined exception.
#include <iostream>
#include <stdexcept>
using namespace std;

class MyException : public exception {
public:
    const char* what() const noexcept {
        return "This is a user-defined exception!";
    }
};

void checkValue(int value) {
    if (value < 0) {
        throw MyException();
    }
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    try {
        checkValue(num);
        cout << "You entered: " << num << endl;
    } catch (const MyException& e) {
        cout << "Caught: " << e.what() << endl;
    }

    return 0;
}
