//Write a program to declare and initialize a variable. Create a reference variable. Display the value of actual variable using reference variable.
#include <iostream>
using namespace std;

int main() {
    int x=10;
    int &ref=x;
    cout<<"The value of x is:"<<x<<endl;
    cout<<"The value of ref is:"<<ref<<endl;
    x=20;
    cout << "After modification through reference:" << endl;
  cout << "Value of originalValue: " << x << endl;
  cout << "Value of referenceValue: " << ref << endl;

    return 0;
}