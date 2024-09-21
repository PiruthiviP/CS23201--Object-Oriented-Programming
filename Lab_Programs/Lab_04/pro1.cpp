/*Create a structure called "Student" with members name, age, and total marks. Write a
C++ program to input data for two students, display their information, and find the
average of total marks.*/

#include <iostream>
#include <string>

using namespace std;
struct Employee {
    string name;
    double hourlyRate;
    double hoursWorked;
    
    void getdata()
    {
        cout<<endl;
        cout << "Enter name of employee: ";
        cin >>name;
        cout << "Enter hourly rate for employee:";
        cin >>hourlyRate;
        cout << "Enter number of hours worked by :";
        cin >>hoursWorked;
        cin.ignore();
    }
    void printdata()
    {
        cout<<endl;
        cout<<"\nThe name of the  employee:"<<name;
        cout<<"\nThe hourly rate for employee:"<<hourlyRate;
        cout<<"\nThe number of hours worked by employee:"<<hoursWorked;
        double salary = 0.0;
    if (hoursWorked <= 40) {
        cout<<"\nThe salary is:"<< hoursWorked *hourlyRate;
    } else {
        cout<<"\nThe salary is:"<< 40 *hourlyRate + (hoursWorked - 40) * 1.5 *hourlyRate;
    }
    }
    
    
};


int main() {
    int n; 
    cout << "Enter the number of employees: ";
    cin >> n;
    Employee employees[10];
    for (int i = 0; i < n; ++i) {
        employees[i].getdata();
    }
    for (int i = 0; i < n; ++i) {
        employees[i].printdata();
    }

    return 0;
}