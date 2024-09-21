/*Write a C++ program to declare a class with 2 integers. Read values using member
function. Pass the object to another member function. Display the differences between
them.*/

#include <iostream>

using namespace std;

class Number {
public:
    int num1;
    int num2;

    
    void readNumbers() {
        cout << "Enter the first number: ";
        cin >> num1;
        
        cout << "Enter the second number: ";
        cin >> num2;
    }
    void displayDifference() {
        int difference = num1 - num2;
        cout << "The difference between " << num1 << " and " << num2 << " is: " << difference << endl;
    }
};

int main() {
    Number numbers;  

    
    numbers.readNumbers();
    numbers.displayDifference();

    return 0;
}