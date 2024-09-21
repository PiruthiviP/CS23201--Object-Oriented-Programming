/*Write a program to read ‘n’ numbers, find their sum, and print the numbers in reverse
order.*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int numbers[n];
    int sum = 0;

    cout << "Enter the numbers: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
        sum += numbers[i];
    }

    cout << "Sum: " << sum << endl;
    cout << "Numbers in reverse order: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << numbers[i];
        if (i > 0) {
            cout << ", ";
        }
    }
    cout << endl;

    return 0;
}
