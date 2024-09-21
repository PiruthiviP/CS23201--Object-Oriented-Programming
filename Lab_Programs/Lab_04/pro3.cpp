/*Write a program to create a structure salary,with the following information
Name – 20 character
Department - 20 character
Basic_pay – float type
Allowance - float type
Using salary structure, declare an employee array with 5 elements and write a
program to read the information and calculate the gross pay (Basic pay +
Allowance) and display the output.*/

#include <iostream>
using namespace std;

struct salary {
    char name[20];
    char department[20];
    float basic_pay;
    float allowance;
};

int main() {
    salary employee[5];
    
    for (int i = 0; i < 5; i++) {
        cout << "Enter details for employee " << i + 1 << ":\n";
        cout << "Name: ";
        cin >> employee[i].name;
        cout << "Department: ";
        cin >> employee[i].department;
        cout << "Basic Pay: ";
        cin >> employee[i].basic_pay;
        cout << "Allowance: ";
        cin >> employee[i].allowance;
    }
    
    for (int i = 0; i < 5; i++) {
        float gross_pay = employee[i].basic_pay + employee[i].allowance;
        cout << "\nEmployee " << i + 1 << " - " << employee[i].name << " (" << employee[i].department << ")\n";
        cout << "Gross Pay: " << gross_pay << endl;
    }

    return 0;
}
