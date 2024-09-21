/*The area of a rectangular field is 48 m2
and one of its sides is 6m. Write a C++ program
to calculate the time taken by a person to cross the field diagonally at the rate of 20
m/minute?*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double area = 48;
    double side = 6;
    double rate = 20;

    double other_side = area / side;
    double diagonal = sqrt(pow(side, 2) + pow(other_side, 2));

    double time = diagonal / rate;

    cout << "Time to cross the field diagonally: " << time << " minutes" << endl;
    return 0;
}
