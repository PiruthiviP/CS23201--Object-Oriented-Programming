/*Write a function template to find the biggest out of two numbers. Using this find the
biggest out of 2 integer, 2 double values and two strings.*/
#include <iostream>
#include <string>
using namespace std;

template <typename T>
T findBiggest(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    int int1, int2;
    cout << "Enter two integers: ";
    cin >> int1 >> int2;
    cout << "The biggest integer is: " << findBiggest(int1, int2) << endl;

    double double1, double2;
    cout << "Enter two double values: ";
    cin >> double1 >> double2;
    cout << "The biggest double value is: " << findBiggest(double1, double2) << endl;

    string str1, str2;
    cout << "Enter two strings: ";
    cin >> str1 >> str2;
    cout << "The biggest string is: " << findBiggest(str1, str2) << endl;

    return 0;
}
