//Write a program to demonstrate the concept of re-throwing an exception.
#include <iostream>
#include <stdexcept>
using namespace std;

void functionThatThrows() {
    throw runtime_error("Error in functionThatThrows");
}

int main() {
    try {
        functionThatThrows();
    } catch (const runtime_error& e) {
        cout << "Caught in main: " << e.what() << endl;
        throw; // Rethrow the exception
    } catch (...) {
        cout << "Caught an unknown exception!" << endl;
    }

    return 0;
}
