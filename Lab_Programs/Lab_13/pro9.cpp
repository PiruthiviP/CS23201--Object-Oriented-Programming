// 9. Write a program to write and read a single object value in the file using read and write function.
#include <iostream>
#include <fstream>
using namespace std;

class Person {
public:
    int age;
};

int main() {
    Person p;
    p.age = 25;

    ofstream outFile("person.dat", ios::binary);
    outFile.write(reinterpret_cast<char*>(&p), sizeof(p));
    outFile.close();

    Person pRead;
    ifstream inFile("person.dat", ios::binary);
    inFile.read(reinterpret_cast<char*>(&pRead), sizeof(pRead));
    inFile.close();

    cout << "Age: " << pRead.age << endl;
    return 0;
}
