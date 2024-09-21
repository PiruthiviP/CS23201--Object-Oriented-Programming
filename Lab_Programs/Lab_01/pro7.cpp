/*Write a program to check whether the given number is even or odd using bitwise operator
(&)*/

#include <iostream>
using namespace std;

int main() {
    int num = 7;

    if (num & 1) {
        cout << "Odd" << endl;
    } else {
        cout << "Even" << endl;
    }
    return 0;
}
