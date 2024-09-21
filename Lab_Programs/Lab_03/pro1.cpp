/*Define a function hypotenuse that calculates the hypotenuse of a right triangle when the
other two sides are given. The function should take two double arguments and return the
hypotenuse as a double. Test this function.*/
#include <iostream>
#include <cmath>
using namespace std;

double hypotenuse(double a, double b) {
    return sqrt(a * a + b * b);
}

int main() {
    double side1, side2;
    cin >> side1 >> side2;

    double result = hypotenuse(side1, side2);
    cout << "Hypotenuse: " << result << endl;

    return 0;
}
