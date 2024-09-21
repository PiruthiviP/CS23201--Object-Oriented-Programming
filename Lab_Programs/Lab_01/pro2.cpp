/*Calculate the volume and surface area of a sphere.
Volume =
4πr
3
3
and Surface Area = 4πr
2*/
#include<iostream>
using namespace std;

int main() {
    float r, v, sa;

    cout << "Enter radius of sphere: ";
    cin >> r;

    v = (4.0/3.0) * 3.14159 * r * r * r;
    sa = 4 * 3.14159 * r * r;

    cout << "Volume of sphere: " << v << endl;
    cout << "Surface Area of sphere: " << sa << endl;

    return 0;
}