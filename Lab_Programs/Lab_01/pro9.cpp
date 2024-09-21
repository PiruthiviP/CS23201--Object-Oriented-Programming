/*9.Write a program to check given year is leap year or not.
(In the Gregorian calendar three criteria must be taken into account to identify leap
years: Every year that is exactly divisible by four is a leap year, except for years that are
exactly divisible by 100, but these centurial years are leap years if they are exactly
divisible by 400. For example, the years 1700, 1800, and 1900 are not leap years, but the
years 1600 and 2000 are.)*/
#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter year: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << "Leap year" << endl;
    } else {
        cout << "Not a leap year" << endl;
    }
    return 0;
}
