/*Write a program that takes your full name as input and displays the abbreviations of the
first and middle names except the last name which is displayed as it is. For example, if
your name is Chandrasekhara Venkata Raman, then the output should be C. V. Raman.*/

#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string fullName, firstName, middleName, lastName;
    cout << "Enter your full name: ";
    getline(cin, fullName);

    stringstream ss(fullName);
    ss >> firstName;
    ss >> middleName;

    while (ss >> lastName);

    cout << firstName[0] << ". " << middleName[0] << ". " << lastName << endl;

    return 0;
}
