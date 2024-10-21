/*Create a simple Calculator to perform the four basic arithmetic operations addition (),
subtraction (), multiplication (), and division () in C++ using a class template. The
template of the class should have two variables whose values are passed at the time of
object creation. The constructor of this class takes two arguments of generic datatypes.*/
#include<iostream>
using namespace std;

template<typename T>
class Calculator {
    T num1, num2;
public:
    Calculator(T a, T b) {
        num1 = a;
        num2 = b;
    }

    T add() {
        return num1 + num2;
    }

    T subtract() {
        return num1 - num2;
    }

    T multiply() {
        return num1 * num2;
    }

    T divide() {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            cout << "Error: Division by zero\n";
    }
    }
};

int main() {
    Calculator<int> intCalc(10, 5);
    cout << "Addition: " << intCalc.add() << endl;
    cout << "Subtraction: " << intCalc.subtract() << endl;
    cout << "Multiplication: " << intCalc.multiply() << endl;
    cout << "Division: " << intCalc.divide() << endl;

    Calculator<float> floatCalc(10.5f, 3.5f);
    cout << "Addition: " << floatCalc.add() << endl;
    cout << "Subtraction: " << floatCalc.subtract() << endl;
    cout << "Multiplication: " << floatCalc.multiply() << endl;
    cout << "Division: " << floatCalc.divide() << endl;

    return 0;
}