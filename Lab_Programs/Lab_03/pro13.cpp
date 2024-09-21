/*Write a program using pointers to dynamically allocate memory to store ‘n’ integer
value. Randomly generate values in the range 1 to 10 and find the index of the last
occurrence of the largest element in the array.*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int n, largest = 0, index = -1;
    cout << "Enter number of elements: ";
    cin >> n;

    int *arr = new int[n];

    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 10 + 1;
        if (arr[i] >= largest) {
            largest = arr[i];
            index = i;
        }
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Largest element: " << largest << endl;
    cout << "Last occurrence at index: " << index << endl;

    delete[] arr;
    return 0;
}
