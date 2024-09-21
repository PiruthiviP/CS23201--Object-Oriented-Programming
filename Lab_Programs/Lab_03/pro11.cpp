//Write a function called zero_small() that has two integer arguments being passed by reference and sets 
//the smaller of the two numbers to 0. Write the main program to access the function.
#include <iostream>

using namespace std;

void zero_small(int& num1, int& num2) {
 
 if (num1 < num2) {
   num1 = 0;
 } else {
   num2 = 0;
 }
}

int main() {
 int num1 = 5;
 int num2 = 3;

 cout << "Before function call: num1 = " << num1 << ", num2 = " << num2 << endl;

 zero_small(num1, num2);  

 cout << "After function call: num1 = " << num1 << ", num2 = " << num2 << endl;

 return 0;
}