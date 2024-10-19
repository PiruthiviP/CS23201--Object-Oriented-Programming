#include <iostream>
using namespace std;

class Complex {
    float x, y;
public:
    Complex(float real , float imag)  {
        x=real;
        y=imag;
    }

    
    Complex operator+( Complex& c)  {
        return Complex(x + c.x, y + c.y);
    }

    
    Complex operator-(Complex& c) {
        return Complex(x - c.x, y - c.y);
    }

    friend Complex operator*( Complex& c1,  Complex& c2) {
        return Complex(c1.x * c2.x - c1.y * c2.y, c1.x * c2.y + c1.y * c2.x);
    }

    
    friend Complex operator/( Complex& c1,  Complex& c2) {
        float denominator = c2.x * c2.x + c2.y * c2.y;
        return Complex((c1.x * c2.x + c1.y * c2.y) / denominator,
                       (c1.y * c2.x - c1.x * c2.y) / denominator);
    }

    // Display function
    friend ostream& operator<<(ostream& out,  Complex& c) {
        out << c.x << " + " << c.y << "i";
        return out;
    }
};

int main() {
    Complex c1(2, 3);
    Complex c2(5, 7);

    Complex addition = c1 + c2;
    Complex subtraction = c1 - c2;
    Complex multiplication = c1 * c2;
    Complex division = c1 / c2;

    cout << "Addition: " << addition << endl;
    cout << "Subtraction: " << subtraction << endl;
    cout << "Multiplication: " << multiplication << endl;
    cout << "Division: " << division << endl;

    return 0;
}