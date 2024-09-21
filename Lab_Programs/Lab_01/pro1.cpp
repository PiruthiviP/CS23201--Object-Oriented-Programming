//Write a C++ program to compute the area and perimeter of a rectangle.(Formula:
//Area=length x breadth, Perimeter=2(length + breadth)
#include<iostream>
using namespace std;

int main() {
    float l, b, a, p;

    cout << "Enter length of rectangle: ";
    cin >> l;
    cout << "Enter breadth of rectangle: ";
    cin >> b;

    a = l * b;
    p = 2 * (l + b);

    cout << "Area of rectangle: " << a << endl;
    cout << "Perimeter of rectangle: " << p << endl;

    return 0;
}