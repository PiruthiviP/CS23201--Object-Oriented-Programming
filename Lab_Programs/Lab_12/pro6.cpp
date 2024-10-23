//Write a program to make a function throw multiple exception.
#include <iostream>
#include <stdexcept>
using namespace std;

void checkValue(int value) {
    if (value < 0) {
        throw runtime_error("Negative value error!");
    } else if (value == 0) {
        throw logic_error("Zero value error!");
    }
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    try {
        checkValue(num);
        cout << "You entered: " << num << endl;
    } catch (const runtime_error& e) {
        cout << "Caught: " << e.what() << endl;
    } catch (const logic_error& e) {
        cout << "Caught: " << e.what() << endl;
    }

    return 0;
}
