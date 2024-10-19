/*Create a class called MATRIX with its sizes (M*N) – rows and cols as the member
variables. Define all possible matrix operations (addition, subtraction and multiplication)
for Matrix objects. Overload the +, - and * operators respectively.*/

#include <iostream>
using namespace std;

class MATRIX {
private:
    int rows, cols;
    int** data;

public:
    MATRIX(int r, int c) : rows(r), cols(c) {
        data = new int*[rows];
        for (int i = 0; i < rows; i++) {
            data[i] = new int[cols];
        }
    }

    ~MATRIX() {
        for (int i = 0; i < rows; i++) {
            delete[] data[i];
        }
        delete[] data;
    }

    void input() {
        cout << "Enter elements of matrix (" << rows << "x" << cols << "):" << endl;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> data[i][j];
            }
        }
    }

    void display() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }

    MATRIX operator+(const MATRIX& m) {
        MATRIX result(rows, cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.data[i][j] = data[i][j] + m.data[i][j];
            }
        }
        return result;
    }

    MATRIX operator-(const MATRIX& m) {
        MATRIX result(rows, cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.data[i][j] = data[i][j] - m.data[i][j];
            }
        }
        return result;
    }

    MATRIX operator*(const MATRIX& m) {
        MATRIX result(rows, m.cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < m.cols; j++) {
                result.data[i][j] = 0;
                for (int k = 0; k < cols; k++) {
                    result.data[i][j] += data[i][k] * m.data[k][j];
                }
            }
        }
        return result;
    }
};

int main() {
    MATRIX m1(2, 2);
    m1.input();
    MATRIX m2(2, 2);
    m2.input();

    MATRIX sum = m1 + m2;
    MATRIX diff = m1 - m2;
    MATRIX prod = m1 * m2;

    cout << "Sum:" << endl;
    sum.display();
    cout << "Difference:" << endl;
    diff.display();
    cout << "Product:" << endl;
    prod.display();

    return 0;
}
