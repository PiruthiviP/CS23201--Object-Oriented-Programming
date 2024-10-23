// 10. Write a program to write and read an array of objects in the file using read and write function.
#include <iostream>
#include <fstream>
using namespace std;

class Student {
public:
    int id;
};

int main() {
    Student students[3];
    for (int i = 0; i < 3; i++) {
        students[i].id = i + 1;
    }

    ofstream outFile("students.dat", ios::binary);
    outFile.write(reinterpret_cast<char*>(students), sizeof(students));
    outFile.close();

    Student readStudents[3];
    ifstream inFile("students.dat", ios::binary);
    inFile.read(reinterpret_cast<char*>(readStudents), sizeof(readStudents));
    inFile.close();

    for (int i = 0; i < 3; i++) {
        cout << "Student ID: " << readStudents[i].id << endl;
    }
    return 0;
}
