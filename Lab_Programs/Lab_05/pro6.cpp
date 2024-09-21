/*Write the definition for a class called complex that has floating point data members for
storing real and imaginary parts. The class has the following member functions:
void set(float, float) to set the specified value in object
void disp() to display complex number object
Implement the following overloading functions ADD that return a COMPLEX number.
complex ADD (a, s2) - where a is an integer (real part) and s2 is a complex number.
complex ADD (s1, s2)-where s1 & s2 are complex numbers.
complex ADD(complex) to sum two complex numbers & return complex number*/

#include <iostream>
using namespace std;

class complex {
    float real;
    float imag;

public:
    void set(float r, float i) {
        real = r;
        imag = i;
    }

    void disp() {
        cout << real << " + " << imag << "i" << endl;
    }

    complex ADD(int a, complex s2) {
        complex temp;
        temp.real = a + s2.real;
        temp.imag = s2.imag;
        return temp;
    }

    complex ADD(complex s1, complex s2) {
        complex temp;
        temp.real = s1.real + s2.real;
        temp.imag = s1.imag + s2.imag;
        return temp;
    }

    complex ADD(complex s) {
        complex temp;
        temp.real = real + s.real;
        temp.imag = imag + s.imag;
        return temp;
    }
};

int main() {
    complex c1, c2, c3, result;
    
    c1.set(3.2, 2.5);
    c2.set(4.1, 1.2);

    cout << "Complex number 1: ";
    c1.disp();

    cout << "Complex number 2: ";
    c2.disp();

    result = result.ADD(5, c2);
    cout << "Result of adding integer and complex number: ";
    result.disp();

    result = result.ADD(c1, c2);
    cout << "Result of adding two complex numbers: ";
    result.disp();

    result = c1.ADD(c2);
    cout << "Sum of two complex numbers: ";
    result.disp();

    return 0;
}
