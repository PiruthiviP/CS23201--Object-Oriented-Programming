/*Write a function template to swap two numbers. Using this, swap 2 integers, 2 floats
and 2 characters.*/
#include <iostream>
using namespace std;

template <typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int int1, int2;
    cout << "Enter two integers: ";
    cin >> int1 >> int2;
    swapValues(int1, int2);
    cout << "After swapping: " << int1 << " " << int2 << endl;

    float float1, float2;
    cout << "Enter two floats: ";
    cin >> float1 >> float2;
    swapValues(float1, float2);
    cout << "After swapping: " << float1 << " " << float2 << endl;

    char char1, char2;
    cout << "Enter two characters: ";
    cin >> char1 >> char2;
    swapValues(char1, char2);
    cout << "After swapping: " << char1 << " " << char2 << endl;

    return 0;
}
