/*Create a class Number with three private members. Overload – operator to negate objects
of Number class.*/
#include <iostream>
using namespace std;

class Number {
private:
    int a, b, c;

public:
    Number(int x, int y, int z) : a(x), b(y), c(z) {}

    Number operator-() {
        return Number(-a, -b, -c);
    }

    void show() {
        cout << a << " " << b << " " << c << endl;
    }
};

int main() {
    Number n(1, 2, 3);
    n.show();
    Number neg = -n;
    neg.show();
    return 0;
}
