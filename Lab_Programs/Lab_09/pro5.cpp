//Write a C++ program to implement the Multiple inheritance for the following example.
#include <iostream>
using namespace std;
class Employee{
    public:
    void displayEmployee() {
        cout << "This is an employee." << endl;
    }
    
};
class Student{
    public:
    void displayStudent() {
        cout << "This is a student." << endl;
    }
    
};
class Research_scholars:public Employee,public Student

{
    public:
    void displayResearchScholars() {
        cout << "This is a research scholar." << endl;
    }
 
    
};
int main() {
    Research_scholars rp1;
    rp1.displayEmployee();
    rp1.displayStudent();
    rp1.displayResearchScholars();
    
    
    return 0;
}