/*Create your own namespace and access the members and methods from the namespace
without using ‘using keyword.*/
#include <iostream>

namespace Math {
    int add(int a, int b) {
        return a + b;
    }
}

int main() {
    int result = Math::add(3, 5);
    std::cout << "The sum is: " << result << std::endl;

    return 0;
}