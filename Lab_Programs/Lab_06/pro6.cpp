/*Create a class called Employee that includes three pieces of information as
data members—a first name (type string), a last name (type string) and a monthly salary
(type float) —to represent Rupees. Your class should have a constructor that
initializes the three data members. Provide a set and a get function for each data member.
If the monthly salary is not positive, set it to 0.Create two Employee objects and display
each object’s yearly salary. Then give each Employee a 10 percent raise and display each
Employee’s yearly salary again.*/

#include<string.h>
#include <iostream>
using namespace std;
class Employee{
    string firstname;
    string lastname;
    float salary;
    
    public:
    Employee()
    {
        firstname='0';
        lastname='0';
        salary=0;
    }
    
    string getFirstName(){
        return firstname;
    }
    
     string getlastName(){
        return lastname;
    }
    int getsalary(){
        return salary*12;
        
    }
    void setsalary(int sal)
    {
        salary=sal;
        if (salary < 0) {
            salary = 0;
        } else {
            salary = salary;
        }
    }
    void setFirstName(string name){
        firstname = name;
    }
    void setlastName(string name1){
        lastname = name1;
    }
    void giveRaise() {
        salary *= 0.1; 
    }
    
    
};
int main() {
    
    Employee e[3];
    string name,last;
    int sal,i;
    for(i=0;i<2;i++)
    {
        cout<<"\tFor person :"<<i+1<<endl;
        cout<<"Enter the first name:";
        cin >> name;
        e[i].setFirstName(name);
        cout<<"Enter the last name:";
        cin.ignore();
        cin>>last;
        e[i].setlastName(last);
        cout<<"Enter the monthly salary:";
        cin>>sal;
        e[i].setsalary(sal);
        
    }
    for(i=0;i<2;i++)
    {
    cout<<"\tFor person :"<<i+1<<endl;
    cout <<"The first name:"<< e[i].getFirstName()<<endl;
    cout<<"The last name:"<<e[i].getlastName()<<endl;
    cout<<"The yearly salary:"<<e[i].getsalary()<<endl;
    cout<<"salary after increment: ";
    e[i].giveRaise();
    cout<<e[i].getsalary()<<endl;
    }
    
    
    

    return 0;
}