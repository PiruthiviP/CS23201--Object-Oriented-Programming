/*Write a structure to store the names, hourly rate and number of hours worked by
employees in a company. Write a program to calculate the salary depending on the
following condition, pay the hourly rate for the hours up to 40 and 1.5 times the
hourly rate for all hours worked above 40 hours.Enter data for ‘n’ employees and
Print the name of all the employees along with their final salaries.*/

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