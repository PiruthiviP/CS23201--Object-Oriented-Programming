/*15. Using a series of nested for loops, find all Pythagorean triples consisting of positive
integers less than or equal to 20.*/

#include <iostream>
using namespace std;

int main() {
    for (int a = 1; a <= 20; a++) {
        for (int b = a; b <= 20; b++) {
            for (int c = b; c <= 20; c++) {
                if (a * a + b * b == c * c) {
                    cout << "(" << a << ", " << b << ", " << c << ")" << endl;
                }
            }
        }
    }
    return 0;
}
