/*Write a program containing a possible exception. Use a try block to throw it and a
catch block to handle it promptly.*/
#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    int number;

    cout << "Enter a positive number: ";
    cin >> number;

    try {
        if (number < 0) {
            throw std::invalid_argument("Negative number entered!");
        }
        cout << "You entered: " << number << endl;
    } catch (const std::invalid_argument& e) {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}
