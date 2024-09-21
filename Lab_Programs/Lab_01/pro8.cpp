/*Write a program to read the age of a candidate and determine whether he/she is eligible to
cast their vote. If user is not eligible, display how many years are left to be eligible.*/


#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;

    if (age >= 18) {
        cout << "Eligible to vote" << endl;
    } else {
        cout << "Not eligible, wait " << 18 - age << " more years" << endl;
    }
    return 0;
}
