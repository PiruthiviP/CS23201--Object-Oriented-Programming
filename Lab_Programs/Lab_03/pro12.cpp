/*Create a method called max(). Overload this method to find the maximum out of two
integers, maximum out of two double values, maximum out of three integers, maximum
out of n integers.*/

#include <iostream>
using namespace std;

int max(int a, int b) {
    return (a > b) ? a : b;
}

double max(double a, double b) {
    return (a > b) ? a : b;
}

int max(int a, int b, int c) {
    return (a > b && a > c) ? a : (b > c) ? b : c;
}

int max(int arr[], int n) {
    int largest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

int main() {
    int x1 = 5, x2 = 10, x3 = 8;
    double d1 = 3.5, d2 = 7.2;
    int arr[] = {1, 3, 7, 2, 5};

    cout << max(x1, x2) << endl;
    cout << max(d1, d2) << endl;
    cout << max(x1, x2, x3) << endl;
    cout << max(arr, 5) << endl;

    return 0;
}
