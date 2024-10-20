/*Write a C++ program to declare matrix class which has data member integer array as 3 x 3. Derive class
matrix A from class matrix and matrix B from matrix A. All these classes should have a function show
() to display the contents. Read and display the elements of all the three matrices.*/
#include <iostream>
using namespace std;


class Matrix {
protected:
    int data[3][3]; 
public:
    
    void show() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }
    void read() {
        cout << "Enter 3x3 matrix elements:" << endl;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cin >> data[i][j];
            }
        }
    }
};
class MatrixA : public Matrix {
};

class MatrixB : public MatrixA {
};

int main() {
    Matrix mat;
    cout << "Enter details for matrix mat:" << endl;
    mat.read();
    cout << "Contents of matrix mat:" << endl;
    mat.show();

    MatrixA matA;
    cout << "\nEnter details for matrix matA:" << endl;
    matA.read();
    cout << "Contents of matrix matA:" << endl;
    matA.show();

    MatrixB matB;
    cout << "\nEnter details for matrix matB:" << endl;
    matB.read();
    cout << "Contents of matrix matB:" << endl;
    matB.show();

    return 0;
}