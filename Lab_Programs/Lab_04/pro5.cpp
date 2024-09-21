/*Write a structure to store the roll no., name, age (11 to 14) and address of students
(more than 10). Store the information of the students.
a. Write a function to print the names of all the students having age 14.
b. Write another function to print the names of all the students having even roll no.
c. Write another function to display the details of the student whose roll no is given
(i.e. roll no. entered by the user).*/

#include <iostream>
#include <string>

using namespace std;

struct Student {
    int rollNo;
    string name;
    int age;
    string address;
    void getdata()
    {
        cout << "Roll No.: ";
        cin >>rollNo;
        cout << "Name: ";
        cin.ignore();
        getline(cin,name);
        cout << "Age (11 to 14): ";
        cin >>age;
        cout << "Address: ";
        cin.ignore();
        getline(cin,address);
        
    }
    void printAge()
    {
        cout <<"The name of the student having age 14 :"<<name<< endl;
    }
    void printEvenRollNo()
    {
        
        cout <<"The name of the student in even rollno:"<< name << endl;
    }
    void displaystudent()
    {
        cout << "Details of student with roll number " << rollNo << ":\n";
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " <<address << endl;
    }
};
int main()
{
    Student std[10];
    int n,i,rollno;
    cout<<"How many student do you want to enter:";
    cin>>n;
    for(i=0;i<n;i++)
    {
       cout << "Enter details for student " << i+1 << ":\n";
      std[i].getdata();
    }
    cout << "Enter roll number to display details: ";
    cin >> rollno;
    for(i=0;i<n;i++)
    if(rollno==std[i].rollNo)
    {
        std[i].displaystudent();
    }
 for(i=0;i<n;i++)
 {
     if(std[i].rollNo%2==0)
     {
         std[i].printEvenRollNo();
     }
 }
for(i=0;i<n;i++)
{
   if(std[i].age==14)
   {
       std[i].printAge();
       
   }
}
}