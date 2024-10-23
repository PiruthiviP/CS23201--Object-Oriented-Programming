// 1. Write a program to create a file and check whether the file is created successfully or not and then close the file.
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("example.txt");
    if (file) {
        cout << "File created successfully." << endl;
    } else {
        cout << "Failed to create file." << endl;
    }
    file.close();
    return 0;
}
