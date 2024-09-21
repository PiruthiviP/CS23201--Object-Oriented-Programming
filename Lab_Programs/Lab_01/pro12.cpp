/*Write a program to print the multiples of 7 between 1 to 50 in reverse order. Ex- 49, 42,
...., 7*/

#include <iostream>
using namespace std;

int main() {
    for (int i = 49; i >= 7; i -= 7) {
        cout << i;
        if (i > 7) {
            cout << ", ";
        }
    }
    cout << endl;
    return 0;
}
