/*Create a class student with data members roll number, name, address, total marks. Create
array of objects and display them. Write a C++ program to read and display the member
variable. Create a function called checkpass to check whether the student has been passed
or failed by passing total marls and passing marks. Have passing marks=50 as default*/

#include <iostream>
#include<string>

using namespace std;
class Student{
    int rollno;
    string name;
    string address;
    int totalmarks;
public:    
    
    void readData() {
        cout << "Enter roll number: ";
        cin >> rollno;

        cout << "Enter name: ";
        cin.ignore();
        getline(cin, name); 

        cout << "Enter address: ";
        cin.ignore();
        getline(cin, address);

        cout << "Enter total marks: ";
        cin >> totalmarks;
    }
    void displayInfo() const {
        cout <<"Roll No.:"<< rollno << endl;
        cout <<"Name:"<< name << endl;
        cout <<"Address:"<< address << endl;
        cout <<"Total Marks:"<< totalmarks << endl;
    }
    
    void checkPass(int passingMarks = 50) {
        if (totalmarks >= passingMarks) {
            cout << name << " has passed." << endl;
        } else {
            cout << name << " has failed." << endl;
        }
    }
    
};
int main() {
     int num;

    cout << "Enter the number of students: ";
    cin >> num;

    Student students[10]; 
    for (int i = 0; i < num; ++i) {
        cout << "\nStudent " << i + 1 << " details:\n";
        students[i].readData();
    }
    cout << "\nStudent Information:\n";
    for (int i = 0; i < num; ++i) {
        cout<<"\tFor Student:"<<i+1<<endl;
        students[i].displayInfo();
        
    }
    for (int i = 0; i < num; ++i) {
        cout << "\n For Student " << (i + 1) << ": ";
        students[i].checkPass();
    }
    cout << "checking pass marks 60 for the second student:\n";
    students[1].checkPass(60);

    
    return 0;
}