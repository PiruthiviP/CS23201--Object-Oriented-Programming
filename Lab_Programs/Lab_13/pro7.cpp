// 7. Write a program to demonstrate example of tellg() and tellp() function.
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile("example.txt");
    outFile << "Hello" << endl;
    cout << "Current write position: " << outFile.tellp() << endl;
    outFile.close();

    ifstream inFile("example.txt");
    cout << "Current read position: " << inFile.tellg() << endl;
    inFile.close();
    return 0;
}
