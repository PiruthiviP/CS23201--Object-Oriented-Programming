//Raising a number to a power p is the same as multiplying n by itself p times. Write a function called power that takes two arguments, a double value for n and an int value for p, and return the result as double value. Use default argument of 2 for p, so that if this argument is omitted the number will be squared. Write the main function that gets value from the user to test power function
#include <iostream>
using namespace std;
double power(double n, int p = 2) {
  double result = 1.0;
  for (int i = 0; i < p; i++) {
    result *= n;
  }
  return result;
}

int main() {
  double number;
  int exponent;
  cout << "Enter a number: ";
  cin >> number;
  cout << "Enter the exponent (or press Enter for square): ";
  if (cin >> exponent) {
  } else {
    exponent = 2;
    
  }

  double result = power(number, exponent);
  cout << number << " raised to the power of " << exponent << " is: " << result << endl;

  return 0;
}