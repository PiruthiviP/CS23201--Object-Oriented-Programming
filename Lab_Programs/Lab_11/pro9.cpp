//Write a program for nested namespace and test the same.
#include <iostream>

namespace MyNamespace {
    int myVariable = 5;

    void myFunction() {
        std::cout << "This is my function!" << std::endl;
    }
}

int main() {
    std::cout << MyNamespace::myVariable << std::endl;
    MyNamespace::myFunction();
    return 0;
}
