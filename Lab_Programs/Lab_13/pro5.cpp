// 5. Assuming that a text file named file1.txt contains some text written into it, write a function named copyUpper(), that reads the file file1.txt and creates a new file named file2.txt contains all words from the file file1.txt in uppercase.
#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

void copyUpper() {
    ifstream inFile("file1.txt");
    ofstream outFile("file2.txt");
    string word;

    if (inFile) {
        while (inFile >> word) {
            for (char& ch : word) {
                ch = toupper(ch);
            }
            outFile << word << " ";
        }
        inFile.close();
        outFile.close();
    }
}

int main() {
    copyUpper();
    return 0;
}
