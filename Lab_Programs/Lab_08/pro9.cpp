#include <iostream>
using namespace std;

class RationalNumber {
private:
    int numerator;
    int denominator;

    // Function to calculate GCD
    int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    // Simplify the fraction
    void simplify() {
        int g = gcd(numerator, denominator);
        numerator /= g;
        denominator /= g;

        // Ensure denominator is positive
        if (denominator < 0) {
            numerator = -numerator;
            denominator = -denominator;
        }
    }

public:
    // Constructor
    RationalNumber(int num, int denom) {
        if (denom == 0) {
            throw invalid_argument("Denominator cannot be zero.");
        }
        numerator = num;
        denominator = denom;
        simplify();
    }

    // Overload addition operator
    RationalNumber operator+(const RationalNumber& r) const {
        return RationalNumber(numerator * r.denominator + r.numerator * denominator, denominator * r.denominator);
    }

    // Overload subtraction operator
    RationalNumber operator-(const RationalNumber& r) const {
        return RationalNumber(numerator * r.denominator - r.numerator * denominator, denominator * r.denominator);
    }

    // Overload multiplication operator
    RationalNumber operator*(const RationalNumber& r) const {
        return RationalNumber(numerator * r.numerator, denominator * r.denominator);
    }

    // Overload division operator
    RationalNumber operator/(const RationalNumber& r) const {
        if (r.numerator == 0) {
            throw invalid_argument("Cannot divide by a fraction with zero numerator.");
        }
        return RationalNumber(numerator * r.denominator, denominator * r.numerator);
    }

    // Overload equality operator
    bool operator==(const RationalNumber& r) const {
        return (numerator == r.numerator) && (denominator == r.denominator);
    }

    // Overload relational operators
    bool operator<(const RationalNumber& r) const {
        return (numerator * r.denominator < r.numerator * denominator);
    }

    bool operator>(const RationalNumber& r) const {
        return (numerator * r.denominator > r.numerator * denominator);
    }

    void display() const {
        cout << numerator << "/" << denominator << endl;
    }
};

int main() {
    try {
        RationalNumber r1(3, 4); // 3/4
        RationalNumber r2(2, 5); // 2/5

        RationalNumber sum = r1 + r2;
        RationalNumber diff = r1 - r2;
        RationalNumber prod = r1 * r2;
        RationalNumber quot = r1 / r2;

        cout << "Rational Number 1: ";
        r1.display();
        cout << "Rational Number 2: ";
        r2.display();
        
        cout << "Sum: ";
        sum.display();
        cout << "Difference: ";
        diff.display();
        cout << "Product: ";
        prod.display();
        cout << "Quotient: ";
        quot.display();

        // Check equality
        cout << "r1 is " << (r1 == r2 ? "equal to" : "not equal to") << " r2" << endl;

        // Relational checks
        cout << "r1 is " << (r1 < r2 ? "less than" : "not less than") << " r2" << endl;
        cout << "r1 is " << (r1 > r2 ? "greater than" : "not greater than") << " r2" << endl;

    } catch (const invalid_argument& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
