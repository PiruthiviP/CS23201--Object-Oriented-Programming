/*Write a series of C++ statements that will read two strings from the user, and then print
them in dictionary order.*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    cout << "Enter first string: ";
    getline(cin, str1);
    cout << "Enter second string: ";
    getline(cin, str2);

    if (str1 < str2) {
        cout << str1 << endl;
        cout << str2 << endl;
    } else {
        cout << str2 << endl;
        cout << str1 << endl;
    }
    return 0;
}
