/*Write a program to multiply the given number by 8 without using * operator. (Hint: use
Bitwise operator)*/
#include <iostream>
using namespace std;

int main() {
    int num = 5;

    int result = num << 3;

    cout << "Result: " << result << endl;
    return 0;
}
