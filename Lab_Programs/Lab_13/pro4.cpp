// 4. Write a program to create a file and then write some text into then file, after writing text file close the file. Again open the file in read mode and read all the written text.
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile("example.txt");
    outFile << "Hello, this is a test." << endl;
    outFile.close();

    ifstream inFile("example.txt");
    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }
    inFile.close();
    return 0;
}
