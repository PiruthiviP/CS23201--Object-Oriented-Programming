//Create your own namespace and access the members and methods from the namespace
//without using ‘using keyword.
#include <iostream>

namespace MyNamespace {
    int myVariable = 10;

    void myFunction() {
        std::cout << "Hello from MyNamespace!" << std::endl;
    }
}

int main() {
    std::cout << "Variable: " << MyNamespace::myVariable << std::endl;
    MyNamespace::myFunction();
    return 0;
}
