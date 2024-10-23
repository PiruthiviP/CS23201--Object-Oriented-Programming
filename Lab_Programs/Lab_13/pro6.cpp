// 6. Write a program to read the name and percentage of ‘n’ different students. Calculate the grade according to following criteria and store the name, percentage and grade in a file. Open the file and display all the details.
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    ofstream file("students.txt");

    for (int i = 0; i < n; i++) {
        string name;
        float percentage;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter percentage: ";
        cin >> percentage;

        string grade;
        if (percentage >= 75) grade = "First Division";
        else if (percentage >= 45) grade = "Second Division";
        else if (percentage >= 35) grade = "Passed";
        else grade = "Failed";

        file << name << " " << percentage << " " << grade << endl;
    }
    file.close();

    ifstream inFile("students.txt");
    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }
    inFile.close();
    return 0;
}
