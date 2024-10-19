/*Write a C++ program to evaluate the equation A= 3 x B, where A and B are objects of
same class. Use friend function.*/
#include <iostream>
using namespace std;

class Matrix;

class Matrix {
private:
    int value;

public:
    Matrix(int val) : value(val) {}

    friend Matrix operator*(int scalar, const Matrix& m);
    void display() {
        cout << "Value: " << value << endl;
    }
};

Matrix operator*(int scalar, const Matrix& m) {
    return Matrix(scalar * m.value);
}

int main() {
    Matrix B(5);
    Matrix A = 3 * B;

    A.display();
    return 0;
}
