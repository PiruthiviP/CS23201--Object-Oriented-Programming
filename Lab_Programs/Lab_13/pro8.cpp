// 8. Write a program to copy the contents of one file to another file.
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream source("source.txt");
    ofstream dest("destination.txt");
    char ch;

    if (source) {
        while (source.get(ch)) {
            dest.put(ch);
        }
        source.close();
        dest.close();
    } else {
        cout << "Source file not found." << endl;
    }
    return 0;
}
