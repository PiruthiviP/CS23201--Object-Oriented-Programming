/*Write a program to take integer inputs from the user until he/she presses ‘#’ and print the
product of all numbers.*/

#include <iostream>
using namespace std;

int main() {
    int num;
    int  product = 1;
    char ch;

    cout << "Enter numbers (press '#' to stop): " << endl;

    while (true) {
        cin >> ch;
        if (ch == '#') {
            break;
        } else {
            num = ch - '0';
            product *= num;
        }
    }

    cout << "Product of all numbers: " << product << endl;
    return 0;
}
