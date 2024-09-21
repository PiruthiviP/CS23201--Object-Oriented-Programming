/*The distance between the Sun and the Earth is 1.496 × 108
km and distance between the
Earth and the Moon is 3.84 × 108 m. During solar eclipse the Moon comes in between the
Earth and the Sun. Write a program to calculate the distance between the Moon and the
Sun at that particular time?*/
#include <iostream>
using namespace std;

int main() {
    double sun_earth = 1.496e8;
    double earth_moon = 3.84e5;

    double moon_sun = sun_earth - (earth_moon / 1000);

    cout << "Distance between the Moon and the Sun: " << moon_sun << " km" << endl;
    return 0;
}
