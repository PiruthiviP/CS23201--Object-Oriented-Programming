// 2. Write a program to open and read text from a text file character by character and count the number of vowels in the given file.
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("example.txt");
    char ch;
    int count = 0;

    if (file) {
        while (file.get(ch)) {
            ch = tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                count++;
            }
        }
        file.close();
        cout << "Number of vowels: " << count << endl;
    } else {
        cout << "File not found." << endl;
    }
    return 0;
}
