/*Write a program to randomly store 50 numbers in the range 100 to 500 in an array A and
print the array A. Copy only those values in the range 100 to 200 in the array A to
another array B, and display the array B.*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int SIZE = 50;
    int A[SIZE], B[SIZE], count = 0;

    srand(time(0));

    for (int i = 0; i < SIZE; i++) {
        A[i] = rand() % 401 + 100;
    }

    cout << "Array A: ";
    for (int i = 0; i < SIZE; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < SIZE; i++) {
        if (A[i] >= 100 && A[i] <= 200) {
            B[count] = A[i];
            count++;
        }
    }

    cout << "Array B: ";
    for (int i = 0; i < count; i++) {
        cout << B[i] << " ";
    }
    cout << endl;

    return 0;
}
