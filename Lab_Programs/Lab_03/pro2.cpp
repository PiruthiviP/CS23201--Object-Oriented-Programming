/*An integer is said to be a perfect number if the sum of its divisors, including 1 (but not
the number itself), is equal to the number. For example, 6 is a perfect number, because 6
= 1 + 2 + 3. Write a function isPerfect that determines whether parameter number is a
perfect number. Use this function prints all the perfect numbers in the range 1 and 1000.*/


#include <iostream>
using namespace std;

bool isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

int main() {
    for (int i = 1; i <= 1000; i++) {
        if (isPerfect(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
